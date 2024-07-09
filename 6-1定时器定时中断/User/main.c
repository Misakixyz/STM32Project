#include "stm32f10x.h" // Device header
#include "Delay.h"
#include "OLED.h"
#include "Timer.h"

uint16_t NUM;
int main(void)
{
	OLED_Init();
	Timer_Init();

	OLED_ShowString(1, 1, "NUM:");


	while (1)
	{
		OLED_ShowNum(1, 5, NUM, 5);
		OLED_ShowNum(2, 5, TIM_GetCounter(TIM2), 5);
	}
}
