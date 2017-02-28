/**
 * @brief LHC RTOS main application file
 */

#include "board.h"
#include "clock_config.h"
#include "pin_mux.h"
#include "fsl_tsi_v4.h"
#include "fsl_tpm.h"
#include "uLipeRtos4.h"


/* reserve space for stack used on threads in words */
uint32_t led_stk[192];
uint32_t touch_stk[192];
uint32_t dly_stk[64];

/* various kernel objects used in this demo */
OsHandler_t sema;
OsHandler_t que;
OsHandler_t flags;
OsHandler_t mtx;
#define TPM_SOURCE_CLOCK CLOCK_GetFreq(kCLOCK_PllFllSelClk)


OsTCB_t test_task;
Sem_t test_sema;
FlagsGrp_t test_flags;
Queue_t test_msg;
Mutex_t test_mtx;




/**
 * @brief Just a periodic task
 */
static void dly_task(void *args)
{
    for(;;){
        uLipeTaskDelay(10);
    }
}


/**
 * @brief led task triggered by queue contents
 */
static void led_task(void *args)
{
    tpm_chnl_pwm_signal_param_t pwm_param[3] = {0};
    tpm_config_t pwm_config = {0};
    uint16_t *tsi_data;

    pwm_param[0].chnlNumber = 0;
    pwm_param[0].dutyCyclePercent =0;
    pwm_param[0].level = kTPM_LowTrue;

    pwm_param[1].chnlNumber = 1;
    pwm_param[1].dutyCyclePercent = 0;
    pwm_param[1].level = kTPM_LowTrue;

    pwm_param[2].chnlNumber = 1;
    pwm_param[2].dutyCyclePercent = 0;
    pwm_param[2].level = kTPM_LowTrue;

    CLOCK_SetTpmClock(1);

    /* inits and configures the tpm timers */
    CLOCK_EnableClock(kCLOCK_Tpm2);
    CLOCK_EnableClock(kCLOCK_Tpm0);
    TPM_GetDefaultConfig(&pwm_config);
    TPM_Init(TPM0, &pwm_config);
    TPM_Init(TPM2, &pwm_config);

    TPM_SetupPwm(TPM2, &pwm_param[0],2,kTPM_EdgeAlignedPwm,12000, TPM_SOURCE_CLOCK);
    TPM_SetupPwm(TPM0, &pwm_param[2],1,kTPM_EdgeAlignedPwm,12000, TPM_SOURCE_CLOCK);

    TPM_StartTimer(TPM2, kTPM_SystemClock);
    TPM_StartTimer(TPM0, kTPM_SystemClock);


    /*set the initial duty and starts the pwm */
    TPM_UpdatePwmDutycycle(TPM2,0,kTPM_EdgeAlignedPwm, 64);
    TPM_UpdatePwmDutycycle(TPM2,1,kTPM_EdgeAlignedPwm, 64);
    TPM_UpdatePwmDutycycle(TPM0,1,kTPM_EdgeAlignedPwm, 64);



    for(;;) {
        tsi_data = ((uint16_t *)uLipeQueueRemove(que,OS_Q_BLOCK_EMPTY,0,NULL));

        uLipeTaskDelay(100);


        if(tsi_data != NULL) {
            uint16_t value = *tsi_data;


            value >>= 5;
            TPM_UpdatePwmDutycycle(TPM2,0,kTPM_EdgeAlignedPwm, value );
            TPM_UpdatePwmDutycycle(TPM2,1,kTPM_EdgeAlignedPwm, (64 - value > 64)? 0 : (64 - value) );
            TPM_UpdatePwmDutycycle(TPM0,1,kTPM_EdgeAlignedPwm, (value/2) );
        }
    }
}


/**
 * @brief deferrable touch task, triggered when touch event is complete
 */
static void touch_task(void *args)
{
    tsi_config_t config = {0};
    uint16_t measure;

    /* configure and inits tsi */
    CLOCK_EnableClock(kCLOCK_Tsi0);
    TSI_EnableModule(TSI0, false);
    TSI_Deinit(TSI0);
    TSI_GetNormalModeDefaultConfig(&config);
    TSI_Init(TSI0, &config);

    /* set TSI interrupt */
    NVIC_DisableIRQ(TSI0_IRQn);
    NVIC_SetPriority(TSI0_IRQn, 0xFD);
    TSI_EnableInterrupts(TSI0, kTSI_EndOfScanInterruptEnable | kTSI_GlobalInterruptEnable);

    /* Enable the TSI */
    TSI_EnableModule(TSI0, true);

    /* starts the touch */
    NVIC_EnableIRQ(TSI0_IRQn);
    TSI_SetMeasuredChannelNumber(TSI0, BOARD_TSI_ELECTRODE_1_CHANNEL);
    TSI_StartSoftwareTrigger(TSI0);
    for(;;) {
        //uLipeSemTake(sema, 0);
        uLipeFlagsPend(flags, 0x01, OS_FLAGS_PEND_ANY | OS_FLAGS_CONSUME, 0);
        measure = TSI_GetCounter(TSI0);
        uLipeTaskDelay(100);

        uLipeQueueInsert(que,&measure,OS_Q_NON_BLOCK,0);
        TSI_SetMeasuredChannelNumber(TSI0, BOARD_TSI_ELECTRODE_1_CHANNEL);
        TSI_StartSoftwareTrigger(TSI0);
    }

}

/**
 * @brief touch interrrupt server routine, responsible to defer the TOUCH event
 */
void TSI0_IRQHandler(void)
{
    uLipeKernelIrqIn();
    uint32_t status = TSI_GetStatusFlags(TSI0);
    if(status & kTSI_EndOfScanFlag) {
        /* wake up the touch task */
        //uLipeSemGive(sema, 1);
        uLipeFlagsPost(flags, 0x80);
    }

    TSI_ClearStatusFlags(TSI0, status | kTSI_GlobalInterruptEnable );
    uLipeKernelIrqOut();
}


/**
 * @brief the "old but gold" main function
 */
int main(void)
{

    OS_QUEUE_RESERVE(qdata, 1);

    BOARD_InitPins();
    BOARD_BootClockRUN();
    BOARD_InitTOUCH();

    uLipeRtosInit();
    uLipeTaskCreate(&led_task,&led_stk[0],128,1,NULL);
    uLipeTaskCreate(&touch_task,&touch_stk[0],128,4,NULL);
    uLipeTaskCreate(&dly_task,&dly_stk[0],64,3,NULL);

    que = uLipeQueueCreate(qdata,1,NULL);
    sema = uLipeSemCreate(0,1,NULL);
    flags = uLipeFlagsCreate(NULL);
    mtx = uLipeMutexCreate(NULL);
    uLipeRtosStart();
    return 0;
}
