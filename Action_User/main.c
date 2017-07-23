#include "stm32f4xx.h"
#include "usart.h"
#include "misc.h"
#include "stm32f4xx_gpio.h"
#include "stm32f4xx_rcc.h"
#include "timer.h"
#include "stm32f4xx_it.h"
#include "gpio.h"
#include "usart.h"
#include "can.h"
#include "math.h"
#include "stm32f4xx_usart.h"
#include "arm_math.h"

extern int Num_Reced;
CanRxMsg RxMessage;

int main(void)
{
	/*uint8_t CANSendDataA[8] = {1};
	uint8_t CANSendDataB[8] = {0};*/
	
	/*CAN1_Init();
	KeyInit();*/
	
  LEDInit();
	CAN1_Init();
	CAN2_Init();
	

	/*uint32_t StdId=25;
  uint8_t len=8;
	uint8_t temp;*/
	int Rece_Data=0;

	
	while(1)
	{
		/*if(GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_0)==0)
		{
			//while(CAN_TxMsg(CAN1,StdId,CANSendDataA,len)!=1);
			temp=CAN_TxMsg(CAN1,StdId,CANSendDataA,len);
		}
		else
		{
			//while(CAN_TxMsg(CAN1,StdId,CANSendDataB,len)!=1);
			temp=CAN_TxMsg(CAN1,StdId,CANSendDataB,len);
		}*/
		
		/*if(Num_Reced)
		{
			Num_Reced=0;
			CAN_Receive(CAN2, CAN_FIFO0, &RxMessage);
			if(RxMessage.Data[0]==1)
		  {
		  	Rece_Data=1;
		  }
		  else
			{
				Rece_Data=0;
			}
			if(Rece_Data)
			{
				GPIO_ResetBits(GPIOA,GPIO_Pin_6);
			}
			else
			{
				GPIO_SetBits(GPIOA,GPIO_Pin_6);
			}
		}*/
//		if(RxMessage.Data[0]==1)
//		{
//			Rece_Data=1;
//		}
//		else
//		{
//			Rece_Data=0;
//		}
//		if(Rece_Data)
//		{
//			GPIO_ResetBits(GPIOA,GPIO_Pin_6);
//		}
//		else
//		{
//			GPIO_SetBits(GPIOA,GPIO_Pin_6);
//		}
	}
}

