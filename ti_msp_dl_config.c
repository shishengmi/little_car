/*
 * Copyright (c) 2023, Texas Instruments Incorporated
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
 *  ============ ti_msp_dl_config.c =============
 *  Configured MSPM0 DriverLib module definitions
 *
 *  DO NOT EDIT - This file is generated for the MSPM0G350X
 *  by the SysConfig tool.
 */

#include "ti_msp_dl_config.h"

DL_TimerG_backupConfig gPWM_ABackup;
DL_TimerG_backupConfig gPWM_BBackup;
DL_TimerA_backupConfig gPWM_CBackup;
DL_TimerA_backupConfig gPWM_DBackup;

/*
 *  ======== SYSCFG_DL_init ========
 *  Perform any initialization needed before using any board APIs
 */
SYSCONFIG_WEAK void SYSCFG_DL_init(void)
{
    SYSCFG_DL_initPower();
    SYSCFG_DL_GPIO_init();
    /* Module-Specific Initializations*/
    SYSCFG_DL_SYSCTL_init();
    SYSCFG_DL_PWM_A_init();
    SYSCFG_DL_PWM_B_init();
    SYSCFG_DL_PWM_C_init();
    SYSCFG_DL_PWM_D_init();
    SYSCFG_DL_TIMER_0_init();
    SYSCFG_DL_I2C_0_init();
    /* Ensure backup structures have no valid state */
	gPWM_ABackup.backupRdy 	= false;
	gPWM_BBackup.backupRdy 	= false;
	gPWM_CBackup.backupRdy 	= false;
	gPWM_DBackup.backupRdy 	= false;


}
/*
 * User should take care to save and restore register configuration in application.
 * See Retention Configuration section for more details.
 */
SYSCONFIG_WEAK bool SYSCFG_DL_saveConfiguration(void)
{
    bool retStatus = true;

	retStatus &= DL_TimerG_saveConfiguration(PWM_A_INST, &gPWM_ABackup);
	retStatus &= DL_TimerG_saveConfiguration(PWM_B_INST, &gPWM_BBackup);
	retStatus &= DL_TimerA_saveConfiguration(PWM_C_INST, &gPWM_CBackup);
	retStatus &= DL_TimerA_saveConfiguration(PWM_D_INST, &gPWM_DBackup);

    return retStatus;
}


SYSCONFIG_WEAK bool SYSCFG_DL_restoreConfiguration(void)
{
    bool retStatus = true;

	retStatus &= DL_TimerG_restoreConfiguration(PWM_A_INST, &gPWM_ABackup, false);
	retStatus &= DL_TimerG_restoreConfiguration(PWM_B_INST, &gPWM_BBackup, false);
	retStatus &= DL_TimerA_restoreConfiguration(PWM_C_INST, &gPWM_CBackup, false);
	retStatus &= DL_TimerA_restoreConfiguration(PWM_D_INST, &gPWM_DBackup, false);

    return retStatus;
}

SYSCONFIG_WEAK void SYSCFG_DL_initPower(void)
{
    DL_GPIO_reset(GPIOA);
    DL_GPIO_reset(GPIOB);
    DL_TimerG_reset(PWM_A_INST);
    DL_TimerG_reset(PWM_B_INST);
    DL_TimerA_reset(PWM_C_INST);
    DL_TimerA_reset(PWM_D_INST);
    DL_TimerG_reset(TIMER_0_INST);
    DL_I2C_reset(I2C_0_INST);

    DL_GPIO_enablePower(GPIOA);
    DL_GPIO_enablePower(GPIOB);
    DL_TimerG_enablePower(PWM_A_INST);
    DL_TimerG_enablePower(PWM_B_INST);
    DL_TimerA_enablePower(PWM_C_INST);
    DL_TimerA_enablePower(PWM_D_INST);
    DL_TimerG_enablePower(TIMER_0_INST);
    DL_I2C_enablePower(I2C_0_INST);
    delay_cycles(POWER_STARTUP_DELAY);
}

SYSCONFIG_WEAK void SYSCFG_DL_GPIO_init(void)
{

    DL_GPIO_initPeripheralOutputFunction(GPIO_PWM_A_C0_IOMUX,GPIO_PWM_A_C0_IOMUX_FUNC);
    DL_GPIO_enableOutput(GPIO_PWM_A_C0_PORT, GPIO_PWM_A_C0_PIN);
    DL_GPIO_initPeripheralOutputFunction(GPIO_PWM_A_C1_IOMUX,GPIO_PWM_A_C1_IOMUX_FUNC);
    DL_GPIO_enableOutput(GPIO_PWM_A_C1_PORT, GPIO_PWM_A_C1_PIN);
    DL_GPIO_initPeripheralOutputFunction(GPIO_PWM_B_C0_IOMUX,GPIO_PWM_B_C0_IOMUX_FUNC);
    DL_GPIO_enableOutput(GPIO_PWM_B_C0_PORT, GPIO_PWM_B_C0_PIN);
    DL_GPIO_initPeripheralOutputFunction(GPIO_PWM_B_C1_IOMUX,GPIO_PWM_B_C1_IOMUX_FUNC);
    DL_GPIO_enableOutput(GPIO_PWM_B_C1_PORT, GPIO_PWM_B_C1_PIN);
    DL_GPIO_initPeripheralOutputFunction(GPIO_PWM_C_C0_IOMUX,GPIO_PWM_C_C0_IOMUX_FUNC);
    DL_GPIO_enableOutput(GPIO_PWM_C_C0_PORT, GPIO_PWM_C_C0_PIN);
    DL_GPIO_initPeripheralOutputFunction(GPIO_PWM_C_C1_IOMUX,GPIO_PWM_C_C1_IOMUX_FUNC);
    DL_GPIO_enableOutput(GPIO_PWM_C_C1_PORT, GPIO_PWM_C_C1_PIN);
    DL_GPIO_initPeripheralOutputFunction(GPIO_PWM_D_C0_IOMUX,GPIO_PWM_D_C0_IOMUX_FUNC);
    DL_GPIO_enableOutput(GPIO_PWM_D_C0_PORT, GPIO_PWM_D_C0_PIN);
    DL_GPIO_initPeripheralOutputFunction(GPIO_PWM_D_C1_IOMUX,GPIO_PWM_D_C1_IOMUX_FUNC);
    DL_GPIO_enableOutput(GPIO_PWM_D_C1_PORT, GPIO_PWM_D_C1_PIN);

    DL_GPIO_initPeripheralInputFunctionFeatures(GPIO_I2C_0_IOMUX_SDA,
        GPIO_I2C_0_IOMUX_SDA_FUNC, DL_GPIO_INVERSION_DISABLE,
        DL_GPIO_RESISTOR_NONE, DL_GPIO_HYSTERESIS_DISABLE,
        DL_GPIO_WAKEUP_DISABLE);
    DL_GPIO_initPeripheralInputFunctionFeatures(GPIO_I2C_0_IOMUX_SCL,
        GPIO_I2C_0_IOMUX_SCL_FUNC, DL_GPIO_INVERSION_DISABLE,
        DL_GPIO_RESISTOR_NONE, DL_GPIO_HYSTERESIS_DISABLE,
        DL_GPIO_WAKEUP_DISABLE);
    DL_GPIO_enableHiZ(GPIO_I2C_0_IOMUX_SDA);
    DL_GPIO_enableHiZ(GPIO_I2C_0_IOMUX_SCL);

    DL_GPIO_initDigitalOutput(USER_GPIO_LED_PA0_IOMUX);

    DL_GPIO_initDigitalOutput(USER_GPIO_PIN_A2_IOMUX);

    DL_GPIO_initDigitalOutput(USER_GPIO_PIN_A1_IOMUX);

    DL_GPIO_initDigitalOutput(USER_GPIO_PIN_B2_IOMUX);

    DL_GPIO_initDigitalOutput(USER_GPIO_PIN_B1_IOMUX);

    DL_GPIO_initDigitalOutput(USER_GPIO_PIN_C2_IOMUX);

    DL_GPIO_initDigitalOutput(USER_GPIO_PIN_C1_IOMUX);

    DL_GPIO_initDigitalOutput(USER_GPIO_PIN_D2_IOMUX);

    DL_GPIO_initDigitalOutput(USER_GPIO_PIN_D1_IOMUX);

    DL_GPIO_clearPins(USER_GPIO_PORT, USER_GPIO_LED_PA0_PIN |
		USER_GPIO_PIN_A2_PIN |
		USER_GPIO_PIN_A1_PIN |
		USER_GPIO_PIN_B2_PIN |
		USER_GPIO_PIN_B1_PIN |
		USER_GPIO_PIN_C2_PIN |
		USER_GPIO_PIN_C1_PIN |
		USER_GPIO_PIN_D2_PIN |
		USER_GPIO_PIN_D1_PIN);
    DL_GPIO_enableOutput(USER_GPIO_PORT, USER_GPIO_LED_PA0_PIN |
		USER_GPIO_PIN_A2_PIN |
		USER_GPIO_PIN_A1_PIN |
		USER_GPIO_PIN_B2_PIN |
		USER_GPIO_PIN_B1_PIN |
		USER_GPIO_PIN_C2_PIN |
		USER_GPIO_PIN_C1_PIN |
		USER_GPIO_PIN_D2_PIN |
		USER_GPIO_PIN_D1_PIN);

}



SYSCONFIG_WEAK void SYSCFG_DL_SYSCTL_init(void)
{

	//Low Power Mode is configured to be SLEEP0
    DL_SYSCTL_setBORThreshold(DL_SYSCTL_BOR_THRESHOLD_LEVEL_0);

    DL_SYSCTL_setSYSOSCFreq(DL_SYSCTL_SYSOSC_FREQ_BASE);

}


/*
 * Timer clock configuration to be sourced by  / 1 (32000000 Hz)
 * timerClkFreq = (timerClkSrc / (timerClkDivRatio * (timerClkPrescale + 1)))
 *   32000000 Hz = 32000000 Hz / (1 * (0 + 1))
 */
static const DL_TimerG_ClockConfig gPWM_AClockConfig = {
    .clockSel = DL_TIMER_CLOCK_BUSCLK,
    .divideRatio = DL_TIMER_CLOCK_DIVIDE_1,
    .prescale = 0U
};

static const DL_TimerG_PWMConfig gPWM_AConfig = {
    .pwmMode = DL_TIMER_PWM_MODE_EDGE_ALIGN,
    .period = 1000,
    .startTimer = DL_TIMER_STOP,
};

SYSCONFIG_WEAK void SYSCFG_DL_PWM_A_init(void) {

    DL_TimerG_setClockConfig(
        PWM_A_INST, (DL_TimerG_ClockConfig *) &gPWM_AClockConfig);

    DL_TimerG_initPWMMode(
        PWM_A_INST, (DL_TimerG_PWMConfig *) &gPWM_AConfig);

    DL_TimerG_setCaptureCompareValue(PWM_A_INST, 1000, DL_TIMER_CC_0_INDEX);
    DL_TimerG_setCaptureCompareOutCtl(PWM_A_INST, DL_TIMER_CC_OCTL_INIT_VAL_LOW,
		DL_TIMER_CC_OCTL_INV_OUT_DISABLED, DL_TIMER_CC_OCTL_SRC_FUNCVAL,
		DL_TIMERG_CAPTURE_COMPARE_0_INDEX);

    DL_TimerG_setCaptCompUpdateMethod(PWM_A_INST, DL_TIMER_CC_UPDATE_METHOD_IMMEDIATE, DL_TIMERG_CAPTURE_COMPARE_0_INDEX);

    DL_TimerG_setCaptureCompareValue(PWM_A_INST, 1000, DL_TIMER_CC_1_INDEX);
    DL_TimerG_setCaptureCompareOutCtl(PWM_A_INST, DL_TIMER_CC_OCTL_INIT_VAL_LOW,
		DL_TIMER_CC_OCTL_INV_OUT_DISABLED, DL_TIMER_CC_OCTL_SRC_FUNCVAL,
		DL_TIMERG_CAPTURE_COMPARE_1_INDEX);

    DL_TimerG_setCaptCompUpdateMethod(PWM_A_INST, DL_TIMER_CC_UPDATE_METHOD_IMMEDIATE, DL_TIMERG_CAPTURE_COMPARE_1_INDEX);

    DL_TimerG_enableClock(PWM_A_INST);


    
    DL_TimerG_setCCPDirection(PWM_A_INST , DL_TIMER_CC0_OUTPUT | DL_TIMER_CC1_OUTPUT );

}
/*
 * Timer clock configuration to be sourced by  / 1 (32000000 Hz)
 * timerClkFreq = (timerClkSrc / (timerClkDivRatio * (timerClkPrescale + 1)))
 *   32000000 Hz = 32000000 Hz / (1 * (0 + 1))
 */
static const DL_TimerG_ClockConfig gPWM_BClockConfig = {
    .clockSel = DL_TIMER_CLOCK_BUSCLK,
    .divideRatio = DL_TIMER_CLOCK_DIVIDE_1,
    .prescale = 0U
};

static const DL_TimerG_PWMConfig gPWM_BConfig = {
    .pwmMode = DL_TIMER_PWM_MODE_EDGE_ALIGN,
    .period = 1000,
    .startTimer = DL_TIMER_STOP,
};

SYSCONFIG_WEAK void SYSCFG_DL_PWM_B_init(void) {

    DL_TimerG_setClockConfig(
        PWM_B_INST, (DL_TimerG_ClockConfig *) &gPWM_BClockConfig);

    DL_TimerG_initPWMMode(
        PWM_B_INST, (DL_TimerG_PWMConfig *) &gPWM_BConfig);

    DL_TimerG_setCaptureCompareValue(PWM_B_INST, 1000, DL_TIMER_CC_0_INDEX);
    DL_TimerG_setCaptureCompareOutCtl(PWM_B_INST, DL_TIMER_CC_OCTL_INIT_VAL_LOW,
		DL_TIMER_CC_OCTL_INV_OUT_DISABLED, DL_TIMER_CC_OCTL_SRC_FUNCVAL,
		DL_TIMERG_CAPTURE_COMPARE_0_INDEX);

    DL_TimerG_setCaptCompUpdateMethod(PWM_B_INST, DL_TIMER_CC_UPDATE_METHOD_IMMEDIATE, DL_TIMERG_CAPTURE_COMPARE_0_INDEX);

    DL_TimerG_setCaptureCompareValue(PWM_B_INST, 1000, DL_TIMER_CC_1_INDEX);
    DL_TimerG_setCaptureCompareOutCtl(PWM_B_INST, DL_TIMER_CC_OCTL_INIT_VAL_LOW,
		DL_TIMER_CC_OCTL_INV_OUT_DISABLED, DL_TIMER_CC_OCTL_SRC_FUNCVAL,
		DL_TIMERG_CAPTURE_COMPARE_1_INDEX);

    DL_TimerG_setCaptCompUpdateMethod(PWM_B_INST, DL_TIMER_CC_UPDATE_METHOD_IMMEDIATE, DL_TIMERG_CAPTURE_COMPARE_1_INDEX);

    DL_TimerG_enableClock(PWM_B_INST);


    
    DL_TimerG_setCCPDirection(PWM_B_INST , DL_TIMER_CC0_OUTPUT | DL_TIMER_CC1_OUTPUT );

}
/*
 * Timer clock configuration to be sourced by  / 1 (32000000 Hz)
 * timerClkFreq = (timerClkSrc / (timerClkDivRatio * (timerClkPrescale + 1)))
 *   32000000 Hz = 32000000 Hz / (1 * (0 + 1))
 */
static const DL_TimerA_ClockConfig gPWM_CClockConfig = {
    .clockSel = DL_TIMER_CLOCK_BUSCLK,
    .divideRatio = DL_TIMER_CLOCK_DIVIDE_1,
    .prescale = 0U
};

static const DL_TimerA_PWMConfig gPWM_CConfig = {
    .pwmMode = DL_TIMER_PWM_MODE_EDGE_ALIGN,
    .period = 1000,
    .isTimerWithFourCC = true,
    .startTimer = DL_TIMER_STOP,
};

SYSCONFIG_WEAK void SYSCFG_DL_PWM_C_init(void) {

    DL_TimerA_setClockConfig(
        PWM_C_INST, (DL_TimerA_ClockConfig *) &gPWM_CClockConfig);

    DL_TimerA_initPWMMode(
        PWM_C_INST, (DL_TimerA_PWMConfig *) &gPWM_CConfig);

    DL_TimerA_setCaptureCompareValue(PWM_C_INST, 1000, DL_TIMER_CC_0_INDEX);
    DL_TimerA_setCaptureCompareOutCtl(PWM_C_INST, DL_TIMER_CC_OCTL_INIT_VAL_LOW,
		DL_TIMER_CC_OCTL_INV_OUT_DISABLED, DL_TIMER_CC_OCTL_SRC_FUNCVAL,
		DL_TIMERA_CAPTURE_COMPARE_0_INDEX);

    DL_TimerA_setCaptCompUpdateMethod(PWM_C_INST, DL_TIMER_CC_UPDATE_METHOD_IMMEDIATE, DL_TIMERA_CAPTURE_COMPARE_0_INDEX);

    DL_TimerA_setCaptureCompareValue(PWM_C_INST, 1000, DL_TIMER_CC_1_INDEX);
    DL_TimerA_setCaptureCompareOutCtl(PWM_C_INST, DL_TIMER_CC_OCTL_INIT_VAL_LOW,
		DL_TIMER_CC_OCTL_INV_OUT_DISABLED, DL_TIMER_CC_OCTL_SRC_FUNCVAL,
		DL_TIMERA_CAPTURE_COMPARE_1_INDEX);

    DL_TimerA_setCaptCompUpdateMethod(PWM_C_INST, DL_TIMER_CC_UPDATE_METHOD_IMMEDIATE, DL_TIMERA_CAPTURE_COMPARE_1_INDEX);

    DL_TimerA_enableClock(PWM_C_INST);


    
    DL_TimerA_setCCPDirection(PWM_C_INST , DL_TIMER_CC0_OUTPUT | DL_TIMER_CC1_OUTPUT );

}
/*
 * Timer clock configuration to be sourced by  / 1 (32000000 Hz)
 * timerClkFreq = (timerClkSrc / (timerClkDivRatio * (timerClkPrescale + 1)))
 *   32000000 Hz = 32000000 Hz / (1 * (0 + 1))
 */
static const DL_TimerA_ClockConfig gPWM_DClockConfig = {
    .clockSel = DL_TIMER_CLOCK_BUSCLK,
    .divideRatio = DL_TIMER_CLOCK_DIVIDE_1,
    .prescale = 0U
};

static const DL_TimerA_PWMConfig gPWM_DConfig = {
    .pwmMode = DL_TIMER_PWM_MODE_EDGE_ALIGN,
    .period = 1000,
    .isTimerWithFourCC = true,
    .startTimer = DL_TIMER_STOP,
};

SYSCONFIG_WEAK void SYSCFG_DL_PWM_D_init(void) {

    DL_TimerA_setClockConfig(
        PWM_D_INST, (DL_TimerA_ClockConfig *) &gPWM_DClockConfig);

    DL_TimerA_initPWMMode(
        PWM_D_INST, (DL_TimerA_PWMConfig *) &gPWM_DConfig);

    DL_TimerA_setCaptureCompareValue(PWM_D_INST, 1000, DL_TIMER_CC_0_INDEX);
    DL_TimerA_setCaptureCompareOutCtl(PWM_D_INST, DL_TIMER_CC_OCTL_INIT_VAL_LOW,
		DL_TIMER_CC_OCTL_INV_OUT_DISABLED, DL_TIMER_CC_OCTL_SRC_FUNCVAL,
		DL_TIMERA_CAPTURE_COMPARE_0_INDEX);

    DL_TimerA_setCaptCompUpdateMethod(PWM_D_INST, DL_TIMER_CC_UPDATE_METHOD_IMMEDIATE, DL_TIMERA_CAPTURE_COMPARE_0_INDEX);

    DL_TimerA_setCaptureCompareValue(PWM_D_INST, 1000, DL_TIMER_CC_1_INDEX);
    DL_TimerA_setCaptureCompareOutCtl(PWM_D_INST, DL_TIMER_CC_OCTL_INIT_VAL_LOW,
		DL_TIMER_CC_OCTL_INV_OUT_DISABLED, DL_TIMER_CC_OCTL_SRC_FUNCVAL,
		DL_TIMERA_CAPTURE_COMPARE_1_INDEX);

    DL_TimerA_setCaptCompUpdateMethod(PWM_D_INST, DL_TIMER_CC_UPDATE_METHOD_IMMEDIATE, DL_TIMERA_CAPTURE_COMPARE_1_INDEX);

    DL_TimerA_enableClock(PWM_D_INST);


    
    DL_TimerA_setCCPDirection(PWM_D_INST , DL_TIMER_CC0_OUTPUT | DL_TIMER_CC1_OUTPUT );

}



/*
 * Timer clock configuration to be sourced by BUSCLK /  (32000000 Hz)
 * timerClkFreq = (timerClkSrc / (timerClkDivRatio * (timerClkPrescale + 1)))
 *   320000 Hz = 32000000 Hz / (1 * (99 + 1))
 */
static const DL_TimerG_ClockConfig gTIMER_0ClockConfig = {
    .clockSel    = DL_TIMER_CLOCK_BUSCLK,
    .divideRatio = DL_TIMER_CLOCK_DIVIDE_1,
    .prescale    = 99U,
};

/*
 * Timer load value (where the counter starts from) is calculated as (timerPeriod * timerClockFreq) - 1
 * TIMER_0_INST_LOAD_VALUE = (100 ms * 320000 Hz) - 1
 */
static const DL_TimerG_TimerConfig gTIMER_0TimerConfig = {
    .period     = TIMER_0_INST_LOAD_VALUE,
    .timerMode  = DL_TIMER_TIMER_MODE_PERIODIC_UP,
    .startTimer = DL_TIMER_STOP,
};

SYSCONFIG_WEAK void SYSCFG_DL_TIMER_0_init(void) {

    DL_TimerG_setClockConfig(TIMER_0_INST,
        (DL_TimerG_ClockConfig *) &gTIMER_0ClockConfig);

    DL_TimerG_initTimerMode(TIMER_0_INST,
        (DL_TimerG_TimerConfig *) &gTIMER_0TimerConfig);
    DL_TimerG_enableInterrupt(TIMER_0_INST , DL_TIMERG_INTERRUPT_ZERO_EVENT);
    DL_TimerG_enableClock(TIMER_0_INST);




}


static const DL_I2C_ClockConfig gI2C_0ClockConfig = {
    .clockSel = DL_I2C_CLOCK_BUSCLK,
    .divideRatio = DL_I2C_CLOCK_DIVIDE_1,
};

SYSCONFIG_WEAK void SYSCFG_DL_I2C_0_init(void) {

    DL_I2C_setClockConfig(I2C_0_INST,
        (DL_I2C_ClockConfig *) &gI2C_0ClockConfig);
    DL_I2C_setAnalogGlitchFilterPulseWidth(I2C_0_INST,
        DL_I2C_ANALOG_GLITCH_FILTER_WIDTH_50NS);
    DL_I2C_enableAnalogGlitchFilter(I2C_0_INST);

    /* Configure Controller Mode */
    DL_I2C_resetControllerTransfer(I2C_0_INST);
    /* Set frequency to 100000 Hz*/
    DL_I2C_setTimerPeriod(I2C_0_INST, 31);
    DL_I2C_setControllerTXFIFOThreshold(I2C_0_INST, DL_I2C_TX_FIFO_LEVEL_EMPTY);
    DL_I2C_setControllerRXFIFOThreshold(I2C_0_INST, DL_I2C_RX_FIFO_LEVEL_BYTES_1);
    DL_I2C_enableControllerClockStretching(I2C_0_INST);


    /* Enable module */
    DL_I2C_enableController(I2C_0_INST);


}

