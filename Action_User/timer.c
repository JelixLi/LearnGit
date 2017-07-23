/**
  ******************************************************************************
  * @file    timer.c
  * @author  Calcus Lee
  * @version V1.0.1
  * @date    9-August-2013
  * @brief   functions of time
  ******************************************************************************
  * @attention
  * three are some great and accurency time delay function in timer.h
  *
**/

#include "timer.h"
#include "misc.h"
#include "stm32f4xx_rcc.h"
#include "stm32f4xx_gpio.h"



//精确延时函数调用wait
void  wait(uint32_t n)
{
	do{
	n--;
	}while(n);
}

void TIMx_Init(void)
{
	TIM_TimeBaseInitTypeDef TIMx_TimeBaseStructure;
	NVIC_InitTypeDef NVIC_InitStructure;
	
}

void TIMx_Pwm_Init(u32 arr,u32 psc)
{
		GPIO_InitTypeDef GPIO_InitStructure;
		TIM_TimeBaseInitTypeDef TIM_TimeBaseStructure;
		TIM_OCInitTypeDef TIM_OCInitStructure;
	
}
