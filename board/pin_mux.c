/*
 * Copyright (c) 2016, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of Freescale Semiconductor, Inc. nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

/*
 * TEXT BELOW IS USED AS SETTING FOR THE PINS TOOL *****************************
PinsProfile:
- !!product 'Pins v2.0'
- !!processor 'MKL25Z128xxx4'
- !!package 'MKL25Z128VLK4'
- !!mcu_data 'ksdk2_0'
- !!processor_version '1.1.0'
- !!board 'FRDM-KL25Z'
- pin_labels:
  - {pin_num: '1', pin_signal: PTE0/UART1_TX/RTC_CLKOUT/CMP0_OUT/I2C1_SDA, label: 'J2[18]/D14'}
  - {pin_num: '2', pin_signal: PTE1/SPI1_MOSI/UART1_RX/SPI1_MISO/I2C1_SCL, label: 'J2[20]/D15'}
  - {pin_num: '3', pin_signal: PTE2/SPI1_SCK, label: 'J9[9]'}
  - {pin_num: '4', pin_signal: PTE3/SPI1_MISO/SPI1_MOSI, label: 'J9[11]'}
  - {pin_num: '5', pin_signal: PTE4/SPI1_PCS0, label: 'J9[13]'}
  - {pin_num: '6', pin_signal: PTE5, label: 'J9[15]'}
  - {pin_num: '7', pin_signal: VDD8, label: P3V3_KL25Z}
  - {pin_num: '8', pin_signal: VSS9, label: GND}
  - {pin_num: '10', pin_signal: USB0_DM, label: 'J5[2]/USB_DN', identifier: USB_DN}
  - {pin_num: '9', pin_signal: USB0_DP, label: 'J5[3]/USB_DP', identifier: USB_DP}
  - {pin_num: '11', pin_signal: VOUT33, label: USB_VOUT33}
  - {pin_num: '12', pin_signal: VREGIN, label: 'J5[1]/P5V_KL25Z', identifier: VREGIN}
  - {pin_num: '13', pin_signal: ADC0_DP0/ADC0_SE0/PTE20/TPM1_CH0/UART0_TX, label: 'J10[1]'}
  - {pin_num: '14', pin_signal: ADC0_DM0/ADC0_SE4a/PTE21/TPM1_CH1/UART0_RX, label: 'J10[3]'}
  - {pin_num: '15', pin_signal: ADC0_DP3/ADC0_SE3/PTE22/TPM2_CH0/UART2_TX, label: 'J10[5]'}
  - {pin_num: '16', pin_signal: ADC0_DM3/ADC0_SE7a/PTE23/TPM2_CH1/UART2_RX, label: 'J10[7]'}
  - {pin_num: '17', pin_signal: VDDA, label: P3V3_KL25Z}
  - {pin_num: '18', pin_signal: VREFH, label: P3V3_KL25Z}
  - {pin_num: '19', pin_signal: VREFL, label: GND}
  - {pin_num: '20', pin_signal: VSSA, label: GND}
  - {pin_num: '21', pin_signal: CMP0_IN5/ADC0_SE4b/PTE29/TPM0_CH2/TPM_CLKIN0, label: 'J10[9]'}
  - {pin_num: '22', pin_signal: DAC0_OUT/ADC0_SE23/CMP0_IN4/PTE30/TPM0_CH3/TPM_CLKIN1, label: 'J10[11]'}
  - {pin_num: '23', pin_signal: PTE31/TPM0_CH4, label: 'J2[13]'}
  - {pin_num: '24', pin_signal: PTE24/TPM0_CH0/I2C0_SCL, label: 'U7[4]/I2C0_SCL', identifier: ACCEL_SCL}
  - {pin_num: '25', pin_signal: PTE25/TPM0_CH1/I2C0_SDA, label: 'U7[6]/I2C0_SDA', identifier: ACCEL_SDA}
  - {pin_num: '26', pin_signal: TSI0_CH1/PTA0/TPM0_CH5/SWD_CLK, label: 'J6[4]/U4D[11]/KL25_SWD_CLK'}
  - {pin_num: '27', pin_signal: TSI0_CH2/PTA1/UART0_RX/TPM2_CH0, label: 'J1[2]/D0/UART0_RX', identifier: DEBUG_UART_RX}
  - {pin_num: '28', pin_signal: TSI0_CH3/PTA2/UART0_TX/TPM2_CH1, label: 'J1[4]/D1/UART0_TX', identifier: DEBUG_UART_TX}
  - {pin_num: '29', pin_signal: TSI0_CH4/PTA3/I2C1_SCL/TPM0_CH0/SWD_DIO, label: 'J6[2]/U4A[3]/U4C[9]/SWD_DIO_TGTMCU'}
  - {pin_num: '30', pin_signal: TSI0_CH5/PTA4/I2C1_SDA/TPM0_CH1/NMI_b, label: 'J1[10]/D4'}
  - {pin_num: '31', pin_signal: PTA5/USB_CLKIN/TPM0_CH2, label: 'J1[12]/D5'}
  - {pin_num: '32', pin_signal: PTA12/TPM1_CH0, label: 'J1[8]/D3'}
  - {pin_num: '33', pin_signal: PTA13/TPM1_CH1, label: 'J2[2]/D8'}
  - {pin_num: '34', pin_signal: PTA14/SPI0_PCS0/UART0_TX, label: 'U7[11]/INT1_ACCEL', identifier: ACCEL_INT1}
  - {pin_num: '35', pin_signal: PTA15/SPI0_SCK/UART0_RX, label: 'U7[9]/INT2_ACCEL', identifier: ACCEL_INT2}
  - {pin_num: '36', pin_signal: PTA16/SPI0_MOSI/SPI0_MISO, label: 'J2[9]'}
  - {pin_num: '37', pin_signal: PTA17/SPI0_MISO/SPI0_MOSI, label: 'J2[11]'}
  - {pin_num: '38', pin_signal: VDD48, label: P3V3_KL25Z}
  - {pin_num: '39', pin_signal: VSS49, label: GND}
  - {pin_num: '40', pin_signal: EXTAL0/PTA18/UART1_RX/TPM_CLKIN0, label: 'Y1[3]/EXTAL', identifier: EXTAL0}
  - {pin_num: '41', pin_signal: XTAL0/PTA19/UART1_TX/TPM_CLKIN1/LPTMR0_ALT1, label: 'Y1[1]/XTAL', identifier: XTAL0}
  - {pin_num: '42', pin_signal: PTA20/RESET_b, label: 'J6[10]/J9[6]/RST_TGTMCU/SW1'}
  - {pin_num: '43', pin_signal: ADC0_SE8/TSI0_CH0/PTB0/LLWU_P5/I2C0_SCL/TPM1_CH0, label: 'J10[2]/A0'}
  - {pin_num: '44', pin_signal: ADC0_SE9/TSI0_CH6/PTB1/I2C0_SDA/TPM1_CH1, label: 'J10[4]/A1'}
  - {pin_num: '45', pin_signal: ADC0_SE12/TSI0_CH7/PTB2/I2C0_SCL/TPM2_CH0, label: 'J10[6]/A2'}
  - {pin_num: '46', pin_signal: ADC0_SE13/TSI0_CH8/PTB3/I2C0_SDA/TPM2_CH1, label: 'J10[8]/A3'}
  - {pin_num: '47', pin_signal: PTB8/EXTRG_IN, label: 'J9[1]'}
  - {pin_num: '48', pin_signal: PTB9, label: 'J9[3]'}
  - {pin_num: '49', pin_signal: PTB10/SPI1_PCS0, label: 'J9[5]'}
  - {pin_num: '50', pin_signal: PTB11/SPI1_SCK, label: 'J9[7]'}
  - {pin_num: '51', pin_signal: TSI0_CH9/PTB16/SPI1_MOSI/UART0_RX/TPM_CLKIN0/SPI1_MISO, label: TSI0_CH9, identifier: TSI_ELECTRODE_1}
  - {pin_num: '52', pin_signal: TSI0_CH10/PTB17/SPI1_MISO/UART0_TX/TPM_CLKIN1/SPI1_MOSI, label: TSI0_CH10, identifier: TSI_ELECTRODE_2}
  - {pin_num: '53', pin_signal: TSI0_CH11/PTB18/TPM2_CH0, label: 'D3[1]/LEDRGB_RED', identifier: LED_RED}
  - {pin_num: '54', pin_signal: TSI0_CH12/PTB19/TPM2_CH1, label: 'D3[4]/LEDRGB_GREEN', identifier: LED_GREEN}
  - {pin_num: '55', pin_signal: ADC0_SE14/TSI0_CH13/PTC0/EXTRG_IN/CMP0_OUT, label: 'J1[3]'}
  - {pin_num: '56', pin_signal: ADC0_SE15/TSI0_CH14/PTC1/LLWU_P6/RTC_CLKIN/I2C1_SCL/TPM0_CH0, label: 'J10[12]/U6[31]/A5'}
  - {pin_num: '57', pin_signal: ADC0_SE11/TSI0_CH15/PTC2/I2C1_SDA/TPM0_CH1, label: 'J10[10]/A4'}
  - {pin_num: '58', pin_signal: PTC3/LLWU_P7/UART1_RX/TPM0_CH2/CLKOUTa, label: 'J1[5]'}
  - {pin_num: '59', pin_signal: VSS74, label: GND}
  - {pin_num: '60', pin_signal: VDD75, label: P3V3_KL25Z}
  - {pin_num: '61', pin_signal: PTC4/LLWU_P8/SPI0_PCS0/UART1_TX/TPM0_CH3, label: 'J1[7]'}
  - {pin_num: '62', pin_signal: PTC5/LLWU_P9/SPI0_SCK/LPTMR0_ALT2/CMP0_OUT, label: 'J1[9]'}
  - {pin_num: '63', pin_signal: CMP0_IN0/PTC6/LLWU_P10/SPI0_MOSI/EXTRG_IN/SPI0_MISO, label: 'J1[11]'}
  - {pin_num: '64', pin_signal: CMP0_IN1/PTC7/SPI0_MISO/SPI0_MOSI, label: 'J1[1]'}
  - {pin_num: '65', pin_signal: CMP0_IN2/PTC8/I2C0_SCL/TPM0_CH4, label: 'J1[14]'}
  - {pin_num: '66', pin_signal: CMP0_IN3/PTC9/I2C0_SDA/TPM0_CH5, label: 'J1[16]'}
  - {pin_num: '67', pin_signal: PTC10/I2C1_SCL, label: 'J1[13]'}
  - {pin_num: '68', pin_signal: PTC11/I2C1_SDA, label: 'J1[15]'}
  - {pin_num: '69', pin_signal: PTC12/TPM_CLKIN0, label: 'J2[1]'}
  - {pin_num: '70', pin_signal: PTC13/TPM_CLKIN1, label: 'J2[3]'}
  - {pin_num: '71', pin_signal: PTC16, label: 'J2[5]'}
  - {pin_num: '72', pin_signal: PTC17, label: 'J2[7]'}
  - {pin_num: '73', pin_signal: PTD0/SPI0_PCS0/TPM0_CH0, label: 'J2[6]/D10'}
  - {pin_num: '74', pin_signal: ADC0_SE5b/PTD1/SPI0_SCK/TPM0_CH1, label: 'J2[12]/D3[3]/D13/LEDRGB_BLUE', identifier: LED_BLUE}
  - {pin_num: '75', pin_signal: PTD2/SPI0_MOSI/UART2_RX/TPM0_CH2/SPI0_MISO, label: 'J2[8]/D11'}
  - {pin_num: '76', pin_signal: PTD3/SPI0_MISO/UART2_TX/TPM0_CH3/SPI0_MOSI, label: 'J2[10]/D12'}
  - {pin_num: '77', pin_signal: PTD4/LLWU_P14/SPI1_PCS0/UART2_RX/TPM0_CH4, label: 'J1[6]/D2'}
  - {pin_num: '78', pin_signal: ADC0_SE6b/PTD5/SPI1_SCK/UART2_TX/TPM0_CH5, label: 'J2[4]/D9'}
  - {pin_num: '79', pin_signal: ADC0_SE7b/PTD6/LLWU_P15/SPI1_MOSI/UART0_RX/SPI1_MISO, label: 'J2[17]'}
  - {pin_num: '80', pin_signal: PTD7/SPI1_MISO/UART0_TX/SPI1_MOSI, label: 'J2[19]'}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR THE PINS TOOL ***
 */

#include "fsl_common.h"
#include "fsl_port.h"
#include "pin_mux.h"

#define PIN1_IDX                         1u   /*!< Pin number for pin 1 in a port */
#define PIN18_IDX                       18u   /*!< Pin number for pin 18 in a port */
#define PIN19_IDX                       19u   /*!< Pin number for pin 19 in a port */
#define SOPT4_TPM2CH0SRC_TPM2_CH0     0x00u   /*!< TPM2 channel 0 input capture source select: TPM2_CH0 signal */

/*
 * TEXT BELOW IS USED AS SETTING FOR THE PINS TOOL *****************************
BOARD_InitPins:
- options: {prefix: BOARD_, coreID: singlecore, enableClock: 'true'}
- pin_list:
  - {pin_num: '53', peripheral: TPM2, signal: 'CH, 0', pin_signal: TSI0_CH11/PTB18/TPM2_CH0, identifier: ''}
  - {pin_num: '54', peripheral: TPM2, signal: 'CH, 1', pin_signal: TSI0_CH12/PTB19/TPM2_CH1, identifier: ''}
  - {pin_num: '74', peripheral: TPM0, signal: 'CH, 1', pin_signal: ADC0_SE5b/PTD1/SPI0_SCK/TPM0_CH1, identifier: ''}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR THE PINS TOOL ***
 */

/*FUNCTION**********************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 *END**************************************************************************/
void BOARD_InitPins(void) {
  CLOCK_EnableClock(kCLOCK_PortB);                           /* Port B Clock Gate Control: Clock enabled */
  CLOCK_EnableClock(kCLOCK_PortD);                           /* Port D Clock Gate Control: Clock enabled */

  PORT_SetPinMux(PORTB, PIN18_IDX, kPORT_MuxAlt3);           /* PORTB18 (pin 53) is configured as TPM2_CH0 */
  PORT_SetPinMux(PORTB, PIN19_IDX, kPORT_MuxAlt3);           /* PORTB19 (pin 54) is configured as TPM2_CH1 */
  PORT_SetPinMux(PORTD, PIN1_IDX, kPORT_MuxAlt4);            /* PORTD1 (pin 74) is configured as TPM0_CH1 */
  SIM->SOPT4 = ((SIM->SOPT4 &
    (~(SIM_SOPT4_TPM2CH0SRC_MASK)))                          /* Mask bits to zero which are setting */
      | SIM_SOPT4_TPM2CH0SRC(SOPT4_TPM2CH0SRC_TPM2_CH0)      /* TPM2 channel 0 input capture source select: TPM2_CH0 signal */
    );
}


#define PCR_PE_DISABLED               0x00u   /*!< Pull Enable: Internal pullup or pulldown resistor is not enabled on the corresponding pin. */
#define PIN1_IDX                         1u   /*!< Pin number for pin 1 in a port */
#define PIN18_IDX                       18u   /*!< Pin number for pin 18 in a port */
#define PIN19_IDX                       19u   /*!< Pin number for pin 19 in a port */

/*
 * TEXT BELOW IS USED AS SETTING FOR THE PINS TOOL *****************************
BOARD_InitLEDs:
- options: {prefix: BOARD_, coreID: singlecore, enableClock: 'true'}
- pin_list:
  - {pin_num: '53', peripheral: GPIOB, signal: 'GPIO, 18', pin_signal: TSI0_CH11/PTB18/TPM2_CH0, direction: OUTPUT, pull_enable: disable}
  - {pin_num: '54', peripheral: GPIOB, signal: 'GPIO, 19', pin_signal: TSI0_CH12/PTB19/TPM2_CH1, direction: OUTPUT, pull_enable: disable}
  - {pin_num: '74', peripheral: GPIOD, signal: 'GPIO, 1', pin_signal: ADC0_SE5b/PTD1/SPI0_SCK/TPM0_CH1, direction: OUTPUT, pull_enable: disable}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR THE PINS TOOL ***
 */

/*FUNCTION**********************************************************************
 *
 * Function Name : BOARD_InitLEDs
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 *END**************************************************************************/
void BOARD_InitLEDs(void) {
  CLOCK_EnableClock(kCLOCK_PortB);                           /* Port B Clock Gate Control: Clock enabled */
  CLOCK_EnableClock(kCLOCK_PortD);                           /* Port D Clock Gate Control: Clock enabled */

  PORT_SetPinMux(PORTB, PIN18_IDX, kPORT_MuxAsGpio);         /* PORTB18 (pin 53) is configured as PTB18 */
  PORTB->PCR[18] = ((PORTB->PCR[18] &
    (~(PORT_PCR_PE_MASK | PORT_PCR_ISF_MASK)))               /* Mask bits to zero which are setting */
      | PORT_PCR_PE(PCR_PE_DISABLED)                         /* Pull Enable: Internal pullup or pulldown resistor is not enabled on the corresponding pin. */
    );
  PORT_SetPinMux(PORTB, PIN19_IDX, kPORT_MuxAsGpio);         /* PORTB19 (pin 54) is configured as PTB19 */
  PORTB->PCR[19] = ((PORTB->PCR[19] &
    (~(PORT_PCR_PE_MASK | PORT_PCR_ISF_MASK)))               /* Mask bits to zero which are setting */
      | PORT_PCR_PE(PCR_PE_DISABLED)                         /* Pull Enable: Internal pullup or pulldown resistor is not enabled on the corresponding pin. */
    );
  PORT_SetPinMux(PORTD, PIN1_IDX, kPORT_MuxAsGpio);          /* PORTD1 (pin 74) is configured as PTD1 */
  PORTD->PCR[1] = ((PORTD->PCR[1] &
    (~(PORT_PCR_PE_MASK | PORT_PCR_ISF_MASK)))               /* Mask bits to zero which are setting */
      | PORT_PCR_PE(PCR_PE_DISABLED)                         /* Pull Enable: Internal pullup or pulldown resistor is not enabled on the corresponding pin. */
    );
}


#define PCR_PE_DISABLED               0x00u   /*!< Pull Enable: Internal pullup or pulldown resistor is not enabled on the corresponding pin. */
#define PIN16_IDX                       16u   /*!< Pin number for pin 16 in a port */
#define PIN17_IDX                       17u   /*!< Pin number for pin 17 in a port */

/*
 * TEXT BELOW IS USED AS SETTING FOR THE PINS TOOL *****************************
BOARD_InitTOUCH:
- options: {prefix: BOARD_, coreID: singlecore, enableClock: 'true'}
- pin_list:
  - {pin_num: '51', peripheral: TSI0, signal: 'CH, 9', pin_signal: TSI0_CH9/PTB16/SPI1_MOSI/UART0_RX/TPM_CLKIN0/SPI1_MISO, pull_enable: disable}
  - {pin_num: '52', peripheral: TSI0, signal: 'CH, 10', pin_signal: TSI0_CH10/PTB17/SPI1_MISO/UART0_TX/TPM_CLKIN1/SPI1_MOSI, pull_enable: disable}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR THE PINS TOOL ***
 */

/*FUNCTION**********************************************************************
 *
 * Function Name : BOARD_InitTOUCH
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 *END**************************************************************************/
void BOARD_InitTOUCH(void) {
  CLOCK_EnableClock(kCLOCK_PortB);                           /* Port B Clock Gate Control: Clock enabled */

  PORT_SetPinMux(PORTB, PIN16_IDX, kPORT_PinDisabledOrAnalog); /* PORTB16 (pin 51) is configured as TSI0_CH9 */
  PORTB->PCR[16] = ((PORTB->PCR[16] &
    (~(PORT_PCR_PE_MASK | PORT_PCR_ISF_MASK)))               /* Mask bits to zero which are setting */
      | PORT_PCR_PE(PCR_PE_DISABLED)                         /* Pull Enable: Internal pullup or pulldown resistor is not enabled on the corresponding pin. */
    );
  PORT_SetPinMux(PORTB, PIN17_IDX, kPORT_PinDisabledOrAnalog); /* PORTB17 (pin 52) is configured as TSI0_CH10 */
  PORTB->PCR[17] = ((PORTB->PCR[17] &
    (~(PORT_PCR_PE_MASK | PORT_PCR_ISF_MASK)))               /* Mask bits to zero which are setting */
      | PORT_PCR_PE(PCR_PE_DISABLED)                         /* Pull Enable: Internal pullup or pulldown resistor is not enabled on the corresponding pin. */
    );
}


/*
 * TEXT BELOW IS USED AS SETTING FOR THE PINS TOOL *****************************
BOARD_InitUSB:
- options: {prefix: BOARD_, coreID: singlecore, enableClock: 'true'}
- pin_list:
  - {pin_num: '9', peripheral: USB0, signal: DP, pin_signal: USB0_DP}
  - {pin_num: '10', peripheral: USB0, signal: DM, pin_signal: USB0_DM}
  - {pin_num: '12', peripheral: USB0, signal: VRIN, pin_signal: VREGIN}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR THE PINS TOOL ***
 */

/*FUNCTION**********************************************************************
 *
 * Function Name : BOARD_InitUSB
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 *END**************************************************************************/
void BOARD_InitUSB(void) {
}


#define PCR_PE_DISABLED               0x00u   /*!< Pull Enable: Internal pullup or pulldown resistor is not enabled on the corresponding pin. */
#define PIN1_IDX                         1u   /*!< Pin number for pin 1 in a port */
#define PIN2_IDX                         2u   /*!< Pin number for pin 2 in a port */
#define SOPT5_UART0RXSRC_UART_RX      0x00u   /*!< UART0 receive data source select: UART0_RX pin */
#define SOPT5_UART0TXSRC_UART_TX      0x00u   /*!< UART0 transmit data source select: UART0_TX pin */

/*
 * TEXT BELOW IS USED AS SETTING FOR THE PINS TOOL *****************************
BOARD_InitDEBUG_UART:
- options: {prefix: BOARD_, coreID: singlecore, enableClock: 'true'}
- pin_list:
  - {pin_num: '27', peripheral: UART0, signal: RX, pin_signal: TSI0_CH2/PTA1/UART0_RX/TPM2_CH0, pull_enable: disable}
  - {pin_num: '28', peripheral: UART0, signal: TX, pin_signal: TSI0_CH3/PTA2/UART0_TX/TPM2_CH1, direction: OUTPUT, pull_enable: disable}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR THE PINS TOOL ***
 */

/*FUNCTION**********************************************************************
 *
 * Function Name : BOARD_InitDEBUG_UART
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 *END**************************************************************************/
void BOARD_InitDEBUG_UART(void) {
  CLOCK_EnableClock(kCLOCK_PortA);                           /* Port A Clock Gate Control: Clock enabled */

  PORT_SetPinMux(PORTA, PIN1_IDX, kPORT_MuxAlt2);            /* PORTA1 (pin 27) is configured as UART0_RX */
  PORTA->PCR[1] = ((PORTA->PCR[1] &
    (~(PORT_PCR_PE_MASK | PORT_PCR_ISF_MASK)))               /* Mask bits to zero which are setting */
      | PORT_PCR_PE(PCR_PE_DISABLED)                         /* Pull Enable: Internal pullup or pulldown resistor is not enabled on the corresponding pin. */
    );
  PORT_SetPinMux(PORTA, PIN2_IDX, kPORT_MuxAlt2);            /* PORTA2 (pin 28) is configured as UART0_TX */
  PORTA->PCR[2] = ((PORTA->PCR[2] &
    (~(PORT_PCR_PE_MASK | PORT_PCR_ISF_MASK)))               /* Mask bits to zero which are setting */
      | PORT_PCR_PE(PCR_PE_DISABLED)                         /* Pull Enable: Internal pullup or pulldown resistor is not enabled on the corresponding pin. */
    );
  SIM->SOPT5 = ((SIM->SOPT5 &
    (~(SIM_SOPT5_UART0TXSRC_MASK | SIM_SOPT5_UART0RXSRC_MASK))) /* Mask bits to zero which are setting */
      | SIM_SOPT5_UART0TXSRC(SOPT5_UART0TXSRC_UART_TX)       /* UART0 transmit data source select: UART0_TX pin */
      | SIM_SOPT5_UART0RXSRC(SOPT5_UART0RXSRC_UART_RX)       /* UART0 receive data source select: UART0_RX pin */
    );
}


#define PCR_PE_DISABLED               0x00u   /*!< Pull Enable: Internal pullup or pulldown resistor is not enabled on the corresponding pin. */
#define PIN14_IDX                       14u   /*!< Pin number for pin 14 in a port */
#define PIN15_IDX                       15u   /*!< Pin number for pin 15 in a port */
#define PIN24_IDX                       24u   /*!< Pin number for pin 24 in a port */
#define PIN25_IDX                       25u   /*!< Pin number for pin 25 in a port */

/*
 * TEXT BELOW IS USED AS SETTING FOR THE PINS TOOL *****************************
BOARD_InitACCEL:
- options: {prefix: BOARD_, coreID: singlecore, enableClock: 'true'}
- pin_list:
  - {pin_num: '24', peripheral: I2C0, signal: SCL, pin_signal: PTE24/TPM0_CH0/I2C0_SCL, pull_enable: disable}
  - {pin_num: '25', peripheral: I2C0, signal: SDA, pin_signal: PTE25/TPM0_CH1/I2C0_SDA, pull_enable: disable}
  - {pin_num: '34', peripheral: GPIOA, signal: 'GPIO, 14', pin_signal: PTA14/SPI0_PCS0/UART0_TX, direction: INPUT, pull_enable: enable}
  - {pin_num: '35', peripheral: GPIOA, signal: 'GPIO, 15', pin_signal: PTA15/SPI0_SCK/UART0_RX, direction: INPUT, pull_enable: enable}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR THE PINS TOOL ***
 */

/*FUNCTION**********************************************************************
 *
 * Function Name : BOARD_InitACCEL
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 *END**************************************************************************/
void BOARD_InitACCEL(void) {
  CLOCK_EnableClock(kCLOCK_PortA);                           /* Port A Clock Gate Control: Clock enabled */
  CLOCK_EnableClock(kCLOCK_PortE);                           /* Port E Clock Gate Control: Clock enabled */

  const port_pin_config_t porta14_pin34_config = {
    kPORT_PullUp,                                            /* Internal pull-up resistor is enabled */
    kPORT_FastSlewRate,                                      /* Fast slew rate is configured */
    kPORT_PassiveFilterDisable,                              /* Passive filter is disabled */
    kPORT_LowDriveStrength,                                  /* Low drive strength is configured */
    kPORT_MuxAsGpio,                                         /* Pin is configured as PTA14 */
  };
  PORT_SetPinConfig(PORTA, PIN14_IDX, &porta14_pin34_config); /* PORTA14 (pin 34) is configured as PTA14 */
  const port_pin_config_t porta15_pin35_config = {
    kPORT_PullUp,                                            /* Internal pull-up resistor is enabled */
    kPORT_FastSlewRate,                                      /* Fast slew rate is configured */
    kPORT_PassiveFilterDisable,                              /* Passive filter is disabled */
    kPORT_LowDriveStrength,                                  /* Low drive strength is configured */
    kPORT_MuxAsGpio,                                         /* Pin is configured as PTA15 */
  };
  PORT_SetPinConfig(PORTA, PIN15_IDX, &porta15_pin35_config); /* PORTA15 (pin 35) is configured as PTA15 */
  PORT_SetPinMux(PORTE, PIN24_IDX, kPORT_MuxAlt5);           /* PORTE24 (pin 24) is configured as I2C0_SCL */
  PORTE->PCR[24] = ((PORTE->PCR[24] &
    (~(PORT_PCR_PE_MASK | PORT_PCR_ISF_MASK)))               /* Mask bits to zero which are setting */
      | PORT_PCR_PE(PCR_PE_DISABLED)                         /* Pull Enable: Internal pullup or pulldown resistor is not enabled on the corresponding pin. */
    );
  PORT_SetPinMux(PORTE, PIN25_IDX, kPORT_MuxAlt5);           /* PORTE25 (pin 25) is configured as I2C0_SDA */
  PORTE->PCR[25] = ((PORTE->PCR[25] &
    (~(PORT_PCR_PE_MASK | PORT_PCR_ISF_MASK)))               /* Mask bits to zero which are setting */
      | PORT_PCR_PE(PCR_PE_DISABLED)                         /* Pull Enable: Internal pullup or pulldown resistor is not enabled on the corresponding pin. */
    );
}


#define PCR_PE_DISABLED               0x00u   /*!< Pull Enable: Internal pullup or pulldown resistor is not enabled on the corresponding pin. */
#define PIN18_IDX                       18u   /*!< Pin number for pin 18 in a port */
#define PIN19_IDX                       19u   /*!< Pin number for pin 19 in a port */
/*
 * TEXT BELOW IS USED AS SETTING FOR THE PINS TOOL *****************************
BOARD_InitOSC:
- options: {prefix: BOARD_, coreID: singlecore, enableClock: 'true'}
- pin_list:
  - {pin_num: '40', peripheral: OSC0, signal: EXTAL0, pin_signal: EXTAL0/PTA18/UART1_RX/TPM_CLKIN0, pull_enable: disable}
  - {pin_num: '41', peripheral: OSC0, signal: XTAL0, pin_signal: XTAL0/PTA19/UART1_TX/TPM_CLKIN1/LPTMR0_ALT1, pull_enable: disable}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR THE PINS TOOL ***
 */

/*FUNCTION**********************************************************************
 *
 * Function Name : BOARD_InitOSC
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 *END**************************************************************************/
void BOARD_InitOSC(void) {
  CLOCK_EnableClock(kCLOCK_PortA);                           /* Port A Clock Gate Control: Clock enabled */

  PORT_SetPinMux(PORTA, PIN18_IDX, kPORT_PinDisabledOrAnalog); /* PORTA18 (pin 40) is configured as EXTAL0 */
  PORTA->PCR[18] = ((PORTA->PCR[18] &
    (~(PORT_PCR_PE_MASK | PORT_PCR_ISF_MASK)))               /* Mask bits to zero which are setting */
      | PORT_PCR_PE(PCR_PE_DISABLED)                         /* Pull Enable: Internal pullup or pulldown resistor is not enabled on the corresponding pin. */
    );
  PORT_SetPinMux(PORTA, PIN19_IDX, kPORT_PinDisabledOrAnalog); /* PORTA19 (pin 41) is configured as XTAL0 */
  PORTA->PCR[19] = ((PORTA->PCR[19] &
    (~(PORT_PCR_PE_MASK | PORT_PCR_ISF_MASK)))               /* Mask bits to zero which are setting */
      | PORT_PCR_PE(PCR_PE_DISABLED)                         /* Pull Enable: Internal pullup or pulldown resistor is not enabled on the corresponding pin. */
    );
}

/*******************************************************************************
 * EOF
 ******************************************************************************/
