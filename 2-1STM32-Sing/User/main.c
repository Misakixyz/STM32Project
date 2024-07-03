#include "stm32f10x.h" // Device header
#include "Delay.h"

int main(void)
{
	// RCC->APB2ENR = 0x00000010;
	// GPIOC->CRH = 0x00300000;
	// GPIOC->ODR = 0x00000000;
	// uint16_t LED = GPIO_Pin_0 | GPIO_Pin_1 | GPIO_Pin_2 | GPIO_Pin_3 | GPIO_Pin_4 | GPIO_Pin_5 | GPIO_Pin_6 | GPIO_Pin_7;

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;

	GPIO_Init(GPIOB, &GPIO_InitStructure);
	// GPIO_SetBits(GPIOA, GPIO_Pin_0);
	// GPIO_ResetBits(GP，IOA, GPIO_Pin_0);
	// GPIO_WriteBit(GPIOA, GPIO_Pin_0,Bit_SET);

	while (1)
	{
		GPIO_ResetBits(GPIOB, GPIO_Pin_12);
		Delay_ms(500);
		GPIO_SetBits(GPIOB, GPIO_Pin_12);
		Delay_ms(500);

		GPIO_ResetBits(GPIOB, GPIO_Pin_12);
		Delay_ms(100);
		GPIO_SetBits(GPIOB, GPIO_Pin_12);
		Delay_ms(700);
		
	}
}
