#include "ti_msp_dl_config.h"
#include "drv_oled.h"
#include "stdio.h"
#include "motor.h"

uint32_t cnt=0;
int main(void)
{
	SYSCFG_DL_init();//芯片资源初始化,由SysConfig配置软件自动生成
	NVIC_EnableIRQ(TIMER_0_INST_INT_IRQN);//中断使能
	DL_TimerG_startCounter(TIMER_0_INST);//开始计数


	Motor_Structure Motor_A;
	Motor_Structure Motor_B;
	Motor_Structure Motor_C;
	Motor_Structure Motor_D;

	Motor_A.Motor_TIM=PWM_A_INST;

	DL_TimerG_startCounter(Motor_A.Motor_TIM);
	DL_TimerG_startCounter(PWM_B_INST);
	DL_TimerG_startCounter(PWM_C_INST);
	DL_TimerG_startCounter(PWM_D_INST);

	DL_GPIO_setPins(USER_GPIO_PORT, USER_GPIO_PIN_A2_PIN);
	DL_GPIO_clearPins(USER_GPIO_PORT, USER_GPIO_PIN_A1_PIN);

	DL_GPIO_setPins(USER_GPIO_PORT, USER_GPIO_PIN_B2_PIN);
	DL_GPIO_clearPins(USER_GPIO_PORT, USER_GPIO_PIN_B1_PIN);

	DL_GPIO_setPins(USER_GPIO_PORT, USER_GPIO_PIN_C2_PIN);
	DL_GPIO_clearPins(USER_GPIO_PORT, USER_GPIO_PIN_C1_PIN);

	DL_GPIO_setPins(USER_GPIO_PORT, USER_GPIO_PIN_D2_PIN);
	DL_GPIO_clearPins(USER_GPIO_PORT, USER_GPIO_PIN_D1_PIN);


	
	DL_TimerG_setCaptureCompareValue(PWM_A_INST, 900, GPIO_PWM_A_C0_IDX);
	DL_TimerG_setCaptureCompareValue(PWM_B_INST, 900, GPIO_PWM_B_C0_IDX);
	DL_TimerG_setCaptureCompareValue(PWM_C_INST, 900, GPIO_PWM_C_C0_IDX);
	DL_TimerG_setCaptureCompareValue(PWM_D_INST, 900, GPIO_PWM_D_C0_IDX);
	while(1)
	{
		;
	}
	
}


void TIMER_0_INST_IRQHandler(void)
{
    switch (DL_TimerG_getPendingInterrupt(TIMER_0_INST)) {
        case DL_TIMERG_IIDX_ZERO:
				{
					DL_GPIO_togglePins(USER_GPIO_PORT,USER_GPIO_LED_PA0_PIN);//IO电平翻转
				}
				break;
        default:
            break;
    }
}


