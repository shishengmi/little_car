/*
 * Copyright (c) 2023, Texas Instruments Incorporated - http://www.ti.com
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 *  ============ ti_msp_dl_config.h =============
 *  Configured MSPM0 DriverLib module declarations
 *
 *  DO NOT EDIT - This file is generated for the MSPM0G350X
 *  by the SysConfig tool.
 */
#ifndef ti_msp_dl_config_h
#define ti_msp_dl_config_h

#define CONFIG_MSPM0G350X

#if defined(__ti_version__) || defined(__TI_COMPILER_VERSION__)
#define SYSCONFIG_WEAK __attribute__((weak))
#elif defined(__IAR_SYSTEMS_ICC__)
#define SYSCONFIG_WEAK __weak
#elif defined(__GNUC__)
#define SYSCONFIG_WEAK __attribute__((weak))
#endif

#include <ti/devices/msp/msp.h>
#include <ti/driverlib/driverlib.h>
#include <ti/driverlib/m0p/dl_core.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 *  ======== SYSCFG_DL_init ========
 *  Perform all required MSP DL initialization
 *
 *  This function should be called once at a point before any use of
 *  MSP DL.
 */


/* clang-format off */

#define POWER_STARTUP_DELAY                                                (16)



#define CPUCLK_FREQ                                                     32000000



/* Defines for PWM_A */
#define PWM_A_INST                                                         TIMG7
#define PWM_A_INST_IRQHandler                                   TIMG7_IRQHandler
#define PWM_A_INST_INT_IRQN                                     (TIMG7_INT_IRQn)
#define PWM_A_INST_CLK_FREQ                                             32000000
/* GPIO defines for channel 0 */
#define GPIO_PWM_A_C0_PORT                                                 GPIOA
#define GPIO_PWM_A_C0_PIN                                         DL_GPIO_PIN_17
#define GPIO_PWM_A_C0_IOMUX                                      (IOMUX_PINCM39)
#define GPIO_PWM_A_C0_IOMUX_FUNC                     IOMUX_PINCM39_PF_TIMG7_CCP0
#define GPIO_PWM_A_C0_IDX                                    DL_TIMER_CC_0_INDEX
/* GPIO defines for channel 1 */
#define GPIO_PWM_A_C1_PORT                                                 GPIOA
#define GPIO_PWM_A_C1_PIN                                         DL_GPIO_PIN_18
#define GPIO_PWM_A_C1_IOMUX                                      (IOMUX_PINCM40)
#define GPIO_PWM_A_C1_IOMUX_FUNC                     IOMUX_PINCM40_PF_TIMG7_CCP1
#define GPIO_PWM_A_C1_IDX                                    DL_TIMER_CC_1_INDEX

/* Defines for PWM_B */
#define PWM_B_INST                                                         TIMG6
#define PWM_B_INST_IRQHandler                                   TIMG6_IRQHandler
#define PWM_B_INST_INT_IRQN                                     (TIMG6_INT_IRQn)
#define PWM_B_INST_CLK_FREQ                                             32000000
/* GPIO defines for channel 0 */
#define GPIO_PWM_B_C0_PORT                                                 GPIOA
#define GPIO_PWM_B_C0_PIN                                          DL_GPIO_PIN_5
#define GPIO_PWM_B_C0_IOMUX                                      (IOMUX_PINCM10)
#define GPIO_PWM_B_C0_IOMUX_FUNC                     IOMUX_PINCM10_PF_TIMG6_CCP0
#define GPIO_PWM_B_C0_IDX                                    DL_TIMER_CC_0_INDEX
/* GPIO defines for channel 1 */
#define GPIO_PWM_B_C1_PORT                                                 GPIOA
#define GPIO_PWM_B_C1_PIN                                         DL_GPIO_PIN_22
#define GPIO_PWM_B_C1_IOMUX                                      (IOMUX_PINCM47)
#define GPIO_PWM_B_C1_IOMUX_FUNC                     IOMUX_PINCM47_PF_TIMG6_CCP1
#define GPIO_PWM_B_C1_IDX                                    DL_TIMER_CC_1_INDEX

/* Defines for PWM_C */
#define PWM_C_INST                                                         TIMA1
#define PWM_C_INST_IRQHandler                                   TIMA1_IRQHandler
#define PWM_C_INST_INT_IRQN                                     (TIMA1_INT_IRQn)
#define PWM_C_INST_CLK_FREQ                                             32000000
/* GPIO defines for channel 0 */
#define GPIO_PWM_C_C0_PORT                                                 GPIOA
#define GPIO_PWM_C_C0_PIN                                         DL_GPIO_PIN_10
#define GPIO_PWM_C_C0_IOMUX                                      (IOMUX_PINCM21)
#define GPIO_PWM_C_C0_IOMUX_FUNC                     IOMUX_PINCM21_PF_TIMA1_CCP0
#define GPIO_PWM_C_C0_IDX                                    DL_TIMER_CC_0_INDEX
/* GPIO defines for channel 1 */
#define GPIO_PWM_C_C1_PORT                                                 GPIOA
#define GPIO_PWM_C_C1_PIN                                         DL_GPIO_PIN_11
#define GPIO_PWM_C_C1_IOMUX                                      (IOMUX_PINCM22)
#define GPIO_PWM_C_C1_IOMUX_FUNC                     IOMUX_PINCM22_PF_TIMA1_CCP1
#define GPIO_PWM_C_C1_IDX                                    DL_TIMER_CC_1_INDEX

/* Defines for PWM_D */
#define PWM_D_INST                                                         TIMA0
#define PWM_D_INST_IRQHandler                                   TIMA0_IRQHandler
#define PWM_D_INST_INT_IRQN                                     (TIMA0_INT_IRQn)
#define PWM_D_INST_CLK_FREQ                                             32000000
/* GPIO defines for channel 0 */
#define GPIO_PWM_D_C0_PORT                                                 GPIOA
#define GPIO_PWM_D_C0_PIN                                         DL_GPIO_PIN_21
#define GPIO_PWM_D_C0_IOMUX                                      (IOMUX_PINCM46)
#define GPIO_PWM_D_C0_IOMUX_FUNC                     IOMUX_PINCM46_PF_TIMA0_CCP0
#define GPIO_PWM_D_C0_IDX                                    DL_TIMER_CC_0_INDEX
/* GPIO defines for channel 1 */
#define GPIO_PWM_D_C1_PORT                                                 GPIOA
#define GPIO_PWM_D_C1_PIN                                          DL_GPIO_PIN_1
#define GPIO_PWM_D_C1_IOMUX                                       (IOMUX_PINCM2)
#define GPIO_PWM_D_C1_IOMUX_FUNC                      IOMUX_PINCM2_PF_TIMA0_CCP1
#define GPIO_PWM_D_C1_IDX                                    DL_TIMER_CC_1_INDEX



/* Defines for TIMER_0 */
#define TIMER_0_INST                                                     (TIMG0)
#define TIMER_0_INST_IRQHandler                                 TIMG0_IRQHandler
#define TIMER_0_INST_INT_IRQN                                   (TIMG0_INT_IRQn)
#define TIMER_0_INST_LOAD_VALUE                                         (31999U)




/* Defines for I2C_0 */
#define I2C_0_INST                                                          I2C1
#define I2C_0_INST_IRQHandler                                    I2C1_IRQHandler
#define I2C_0_INST_INT_IRQN                                        I2C1_INT_IRQn
#define I2C_0_BUS_SPEED_HZ                                                100000
#define GPIO_I2C_0_SDA_PORT                                                GPIOA
#define GPIO_I2C_0_SDA_PIN                                        DL_GPIO_PIN_30
#define GPIO_I2C_0_IOMUX_SDA                                      (IOMUX_PINCM5)
#define GPIO_I2C_0_IOMUX_SDA_FUNC                       IOMUX_PINCM5_PF_I2C1_SDA
#define GPIO_I2C_0_SCL_PORT                                                GPIOA
#define GPIO_I2C_0_SCL_PIN                                        DL_GPIO_PIN_29
#define GPIO_I2C_0_IOMUX_SCL                                      (IOMUX_PINCM4)
#define GPIO_I2C_0_IOMUX_SCL_FUNC                       IOMUX_PINCM4_PF_I2C1_SCL



/* Port definition for Pin Group USER_GPIO */
#define USER_GPIO_PORT                                                   (GPIOA)

/* Defines for LED_PA0: GPIOA.0 with pinCMx 1 on package pin 33 */
#define USER_GPIO_LED_PA0_PIN                                    (DL_GPIO_PIN_0)
#define USER_GPIO_LED_PA0_IOMUX                                   (IOMUX_PINCM1)
/* Defines for PIN_A2: GPIOA.25 with pinCMx 55 on package pin 26 */
#define USER_GPIO_PIN_A2_PIN                                    (DL_GPIO_PIN_25)
#define USER_GPIO_PIN_A2_IOMUX                                   (IOMUX_PINCM55)
/* Defines for PIN_A1: GPIOA.24 with pinCMx 54 on package pin 25 */
#define USER_GPIO_PIN_A1_PIN                                    (DL_GPIO_PIN_24)
#define USER_GPIO_PIN_A1_IOMUX                                   (IOMUX_PINCM54)
/* Defines for PIN_B2: GPIOA.23 with pinCMx 53 on package pin 24 */
#define USER_GPIO_PIN_B2_PIN                                    (DL_GPIO_PIN_23)
#define USER_GPIO_PIN_B2_IOMUX                                   (IOMUX_PINCM53)
/* Defines for PIN_B1: GPIOA.16 with pinCMx 38 on package pin 9 */
#define USER_GPIO_PIN_B1_PIN                                    (DL_GPIO_PIN_16)
#define USER_GPIO_PIN_B1_IOMUX                                   (IOMUX_PINCM38)
/* Defines for PIN_C2: GPIOA.15 with pinCMx 37 on package pin 8 */
#define USER_GPIO_PIN_C2_PIN                                    (DL_GPIO_PIN_15)
#define USER_GPIO_PIN_C2_IOMUX                                   (IOMUX_PINCM37)
/* Defines for PIN_C1: GPIOA.14 with pinCMx 36 on package pin 7 */
#define USER_GPIO_PIN_C1_PIN                                    (DL_GPIO_PIN_14)
#define USER_GPIO_PIN_C1_IOMUX                                   (IOMUX_PINCM36)
/* Defines for PIN_D2: GPIOA.13 with pinCMx 35 on package pin 6 */
#define USER_GPIO_PIN_D2_PIN                                    (DL_GPIO_PIN_13)
#define USER_GPIO_PIN_D2_IOMUX                                   (IOMUX_PINCM35)
/* Defines for PIN_D1: GPIOA.12 with pinCMx 34 on package pin 5 */
#define USER_GPIO_PIN_D1_PIN                                    (DL_GPIO_PIN_12)
#define USER_GPIO_PIN_D1_IOMUX                                   (IOMUX_PINCM34)

/* clang-format on */

void SYSCFG_DL_init(void);
void SYSCFG_DL_initPower(void);
void SYSCFG_DL_GPIO_init(void);
void SYSCFG_DL_SYSCTL_init(void);
void SYSCFG_DL_PWM_A_init(void);
void SYSCFG_DL_PWM_B_init(void);
void SYSCFG_DL_PWM_C_init(void);
void SYSCFG_DL_PWM_D_init(void);
void SYSCFG_DL_TIMER_0_init(void);
void SYSCFG_DL_I2C_0_init(void);


bool SYSCFG_DL_saveConfiguration(void);
bool SYSCFG_DL_restoreConfiguration(void);

#ifdef __cplusplus
}
#endif

#endif /* ti_msp_dl_config_h */
