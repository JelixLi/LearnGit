#ifndef __timer_h
#define __timer_h

#include "stm32f4xx_tim.h"
//����ʱ����
#define  SYSCLK        168         //ָ��MCU����Ƶ��Ϊ168MHz
#define  A             3           //һ��ѭ��������������
#define  B             3           //���á���ʼ���������ܹ����õ�������
#define  delay_us(nus)   wait(((nus)*(SYSCLK)-(B))/(A))
#define  delay_ms(nms)   delay_us((nms)*1000)
#define  delay_s(ns)     delay_ms((ns)*1000)
//��ȷ��ʱ��������wait
void  wait(uint32_t n);

void TIMx_Init(void); 

void TIMx_Pwm_Init(u32 arr,u32 psc);


#endif



