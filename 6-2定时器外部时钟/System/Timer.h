#ifndef __TIMER_H
#define __TIMER_H
void Timer_Init(void);
void TIM2_IRQHandler();
uint16_t Timer_GetCounter(void);

#endif