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

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_


/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*! @brief Direction type  */
typedef enum _pin_mux_direction
{
  kPIN_MUX_DirectionInput = 0U,         /* Input direction */
  kPIN_MUX_DirectionOutput = 1U,        /* Output direction */
  kPIN_MUX_DirectionInputOrOutput = 2U  /* Input or output direction */
} pin_mux_direction_t;

/*!
 * @addtogroup pin_mux
 * @{
 */

/*******************************************************************************
 * API
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

/* PORTB18 (number 53), D3[1]/LEDRGB_RED */
#define BOARD_LED_RED_GPIO                                                 GPIOB   /*!< GPIO device name: GPIOB */
#define BOARD_LED_RED_PORT                                                 PORTB   /*!< PORT device name: PORTB */
#define BOARD_LED_RED_GPIO_PIN                                               18U   /*!< PORTB pin index: 18 */
#define BOARD_LED_RED_PIN_NAME                                             PTB18   /*!< Pin name */
#define BOARD_LED_RED_LABEL                                   "D3[1]/LEDRGB_RED"   /*!< Label */
#define BOARD_LED_RED_NAME                                             "LED_RED"   /*!< Identifier name */
#define BOARD_LED_RED_DIRECTION                         kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTB19 (number 54), D3[4]/LEDRGB_GREEN */
#define BOARD_LED_GREEN_GPIO                                               GPIOB   /*!< GPIO device name: GPIOB */
#define BOARD_LED_GREEN_PORT                                               PORTB   /*!< PORT device name: PORTB */
#define BOARD_LED_GREEN_GPIO_PIN                                             19U   /*!< PORTB pin index: 19 */
#define BOARD_LED_GREEN_PIN_NAME                                           PTB19   /*!< Pin name */
#define BOARD_LED_GREEN_LABEL                               "D3[4]/LEDRGB_GREEN"   /*!< Label */
#define BOARD_LED_GREEN_NAME                                         "LED_GREEN"   /*!< Identifier name */
#define BOARD_LED_GREEN_DIRECTION                       kPIN_MUX_DirectionOutput   /*!< Direction */

/* PORTD1 (number 74), J2[12]/D3[3]/D13/LEDRGB_BLUE */
#define BOARD_LED_BLUE_GPIO                                                GPIOD   /*!< GPIO device name: GPIOD */
#define BOARD_LED_BLUE_PORT                                                PORTD   /*!< PORT device name: PORTD */
#define BOARD_LED_BLUE_GPIO_PIN                                               1U   /*!< PORTD pin index: 1 */
#define BOARD_LED_BLUE_PIN_NAME                                             PTD1   /*!< Pin name */
#define BOARD_LED_BLUE_LABEL                      "J2[12]/D3[3]/D13/LEDRGB_BLUE"   /*!< Label */
#define BOARD_LED_BLUE_NAME                                           "LED_BLUE"   /*!< Identifier name */
#define BOARD_LED_BLUE_DIRECTION                        kPIN_MUX_DirectionOutput   /*!< Direction */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitLEDs(void);

/* PORTB16 (number 51), TSI0_CH9 */
#define BOARD_TSI_ELECTRODE_1_PERIPHERAL                                    TSI0   /*!< Device name: TSI0 */
#define BOARD_TSI_ELECTRODE_1_SIGNAL                                          CH   /*!< TSI0 signal: CH */
#define BOARD_TSI_ELECTRODE_1_CHANNEL                                          9   /*!< TSI0 channel: 9 */
#define BOARD_TSI_ELECTRODE_1_PIN_NAME                                  TSI0_CH9   /*!< Pin name */
#define BOARD_TSI_ELECTRODE_1_LABEL                                   "TSI0_CH9"   /*!< Label */
#define BOARD_TSI_ELECTRODE_1_NAME                             "TSI_ELECTRODE_1"   /*!< Identifier name */

/* PORTB17 (number 52), TSI0_CH10 */
#define BOARD_TSI_ELECTRODE_2_PERIPHERAL                                    TSI0   /*!< Device name: TSI0 */
#define BOARD_TSI_ELECTRODE_2_SIGNAL                                          CH   /*!< TSI0 signal: CH */
#define BOARD_TSI_ELECTRODE_2_CHANNEL                                         10   /*!< TSI0 channel: 10 */
#define BOARD_TSI_ELECTRODE_2_PIN_NAME                                 TSI0_CH10   /*!< Pin name */
#define BOARD_TSI_ELECTRODE_2_LABEL                                  "TSI0_CH10"   /*!< Label */
#define BOARD_TSI_ELECTRODE_2_NAME                             "TSI_ELECTRODE_2"   /*!< Identifier name */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitTOUCH(void);

/* USB0_DP (number 9), J5[3]/USB_DP */
#define BOARD_USB_DP_PERIPHERAL                                             USB0   /*!< Device name: USB0 */
#define BOARD_USB_DP_SIGNAL                                                   DP   /*!< USB0 signal: DP */
#define BOARD_USB_DP_PIN_NAME                                            USB0_DP   /*!< Pin name */
#define BOARD_USB_DP_LABEL                                        "J5[3]/USB_DP"   /*!< Label */
#define BOARD_USB_DP_NAME                                               "USB_DP"   /*!< Identifier name */

/* USB0_DM (number 10), J5[2]/USB_DN */
#define BOARD_USB_DN_PERIPHERAL                                             USB0   /*!< Device name: USB0 */
#define BOARD_USB_DN_SIGNAL                                                   DM   /*!< USB0 signal: DM */
#define BOARD_USB_DN_PIN_NAME                                            USB0_DM   /*!< Pin name */
#define BOARD_USB_DN_LABEL                                        "J5[2]/USB_DN"   /*!< Label */
#define BOARD_USB_DN_NAME                                               "USB_DN"   /*!< Identifier name */

/* VREGIN (number 12), J5[1]/P5V_KL25Z */
#define BOARD_VREGIN_PERIPHERAL                                             USB0   /*!< Device name: USB0 */
#define BOARD_VREGIN_SIGNAL                                                 VRIN   /*!< USB0 signal: VRIN */
#define BOARD_VREGIN_PIN_NAME                                             VREGIN   /*!< Pin name */
#define BOARD_VREGIN_LABEL                                     "J5[1]/P5V_KL25Z"   /*!< Label */
#define BOARD_VREGIN_NAME                                               "VREGIN"   /*!< Identifier name */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitUSB(void);

/* PORTA1 (number 27), J1[2]/D0/UART0_RX */
#define BOARD_DEBUG_UART_RX_PERIPHERAL                                     UART0   /*!< Device name: UART0 */
#define BOARD_DEBUG_UART_RX_SIGNAL                                            RX   /*!< UART0 signal: RX */
#define BOARD_DEBUG_UART_RX_PIN_NAME                                    UART0_RX   /*!< Pin name */
#define BOARD_DEBUG_UART_RX_LABEL                            "J1[2]/D0/UART0_RX"   /*!< Label */
#define BOARD_DEBUG_UART_RX_NAME                                 "DEBUG_UART_RX"   /*!< Identifier name */

/* PORTA2 (number 28), J1[4]/D1/UART0_TX */
#define BOARD_DEBUG_UART_TX_PERIPHERAL                                     UART0   /*!< Device name: UART0 */
#define BOARD_DEBUG_UART_TX_SIGNAL                                            TX   /*!< UART0 signal: TX */
#define BOARD_DEBUG_UART_TX_PIN_NAME                                    UART0_TX   /*!< Pin name */
#define BOARD_DEBUG_UART_TX_LABEL                            "J1[4]/D1/UART0_TX"   /*!< Label */
#define BOARD_DEBUG_UART_TX_NAME                                 "DEBUG_UART_TX"   /*!< Identifier name */
#define BOARD_DEBUG_UART_TX_DIRECTION                   kPIN_MUX_DirectionOutput   /*!< Direction */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitDEBUG_UART(void);

/* PORTE24 (number 24), U7[4]/I2C0_SCL */
#define BOARD_ACCEL_SCL_PERIPHERAL                                          I2C0   /*!< Device name: I2C0 */
#define BOARD_ACCEL_SCL_SIGNAL                                               SCL   /*!< I2C0 signal: SCL */
#define BOARD_ACCEL_SCL_PIN_NAME                                        I2C0_SCL   /*!< Pin name */
#define BOARD_ACCEL_SCL_LABEL                                   "U7[4]/I2C0_SCL"   /*!< Label */
#define BOARD_ACCEL_SCL_NAME                                         "ACCEL_SCL"   /*!< Identifier name */

/* PORTE25 (number 25), U7[6]/I2C0_SDA */
#define BOARD_ACCEL_SDA_PERIPHERAL                                          I2C0   /*!< Device name: I2C0 */
#define BOARD_ACCEL_SDA_SIGNAL                                               SDA   /*!< I2C0 signal: SDA */
#define BOARD_ACCEL_SDA_PIN_NAME                                        I2C0_SDA   /*!< Pin name */
#define BOARD_ACCEL_SDA_LABEL                                   "U7[6]/I2C0_SDA"   /*!< Label */
#define BOARD_ACCEL_SDA_NAME                                         "ACCEL_SDA"   /*!< Identifier name */

/* PORTA14 (number 34), U7[11]/INT1_ACCEL */
#define BOARD_ACCEL_INT1_GPIO                                              GPIOA   /*!< GPIO device name: GPIOA */
#define BOARD_ACCEL_INT1_PORT                                              PORTA   /*!< PORT device name: PORTA */
#define BOARD_ACCEL_INT1_GPIO_PIN                                            14U   /*!< PORTA pin index: 14 */
#define BOARD_ACCEL_INT1_PIN_NAME                                          PTA14   /*!< Pin name */
#define BOARD_ACCEL_INT1_LABEL                               "U7[11]/INT1_ACCEL"   /*!< Label */
#define BOARD_ACCEL_INT1_NAME                                       "ACCEL_INT1"   /*!< Identifier name */
#define BOARD_ACCEL_INT1_DIRECTION                       kPIN_MUX_DirectionInput   /*!< Direction */

/* PORTA15 (number 35), U7[9]/INT2_ACCEL */
#define BOARD_ACCEL_INT2_GPIO                                              GPIOA   /*!< GPIO device name: GPIOA */
#define BOARD_ACCEL_INT2_PORT                                              PORTA   /*!< PORT device name: PORTA */
#define BOARD_ACCEL_INT2_GPIO_PIN                                            15U   /*!< PORTA pin index: 15 */
#define BOARD_ACCEL_INT2_PIN_NAME                                          PTA15   /*!< Pin name */
#define BOARD_ACCEL_INT2_LABEL                                "U7[9]/INT2_ACCEL"   /*!< Label */
#define BOARD_ACCEL_INT2_NAME                                       "ACCEL_INT2"   /*!< Identifier name */
#define BOARD_ACCEL_INT2_DIRECTION                       kPIN_MUX_DirectionInput   /*!< Direction */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitACCEL(void);

/* PORTA18 (number 40), Y1[3]/EXTAL */
#define BOARD_EXTAL0_PERIPHERAL                                             OSC0   /*!< Device name: OSC0 */
#define BOARD_EXTAL0_SIGNAL                                               EXTAL0   /*!< OSC0 signal: EXTAL0 */
#define BOARD_EXTAL0_PIN_NAME                                             EXTAL0   /*!< Pin name */
#define BOARD_EXTAL0_LABEL                                         "Y1[3]/EXTAL"   /*!< Label */
#define BOARD_EXTAL0_NAME                                               "EXTAL0"   /*!< Identifier name */

/* PORTA19 (number 41), Y1[1]/XTAL */
#define BOARD_XTAL0_PERIPHERAL                                              OSC0   /*!< Device name: OSC0 */
#define BOARD_XTAL0_SIGNAL                                                 XTAL0   /*!< OSC0 signal: XTAL0 */
#define BOARD_XTAL0_PIN_NAME                                               XTAL0   /*!< Pin name */
#define BOARD_XTAL0_LABEL                                           "Y1[1]/XTAL"   /*!< Label */
#define BOARD_XTAL0_NAME                                                 "XTAL0"   /*!< Identifier name */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitOSC(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/*******************************************************************************
 * EOF
 ******************************************************************************/
