#include "stm32f10x.h" // Device header
#include "Delay.h"

int main(void)
{
	// RCC->APB2ENR = 0x00000010;
	// GPIOC->CRH = 0x00300000;
	// GPIOC->ODR = 0x00000000;
	uint16_t LED = GPIO_Pin_0 | GPIO_Pin_1 | GPIO_Pin_2 | GPIO_Pin_3 | GPIO_Pin_4 | GPIO_Pin_5 | GPIO_Pin_6 | GPIO_Pin_7;

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin = LED;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;

	GPIO_Init(GPIOA, &GPIO_InitStructure);
	// GPIO_SetBits(GPIOA, GPIO_Pin_0);
	// GPIO_ResetBits(GP，IOA, GPIO_Pin_0);
	// GPIO_WriteBit(GPIOA, GPIO_Pin_0,Bit_SET);

	while (1)
	{
		int i = 0;
		uint16_t t = 0x0001;
		for (i; i <= 7; i++)
		{
			GPIO_Write(GPIOA, ~t);
			if (t != 0x0080)
				t = t << 1;
			else
				t = 0x0001;
			Delay_ms(500);
		}

		// GPIO_Write(GPIOA, ~0x0001);
		// Delay_ms(500);

		// GPIO_Write(GPIOA, ~0x0002);
		// Delay_ms(500);

		// GPIO_Write(GPIOA, ~0x0004);
		// Delay_ms(500);

		// GPIO_Write(GPIOA, ~0x0008);
		// Delay_ms(500);

		// GPIO_Write(GPIOA, ~0x0010);
		// Delay_ms(500);

		// GPIO_Write(GPIOA, ~0x0020);
		// Delay_ms(500);

		// GPIO_Write(GPIOA, ~0x0040);
		// Delay_ms(500);

		// GPIO_Write(GPIOA, ~0x0080);
		// Delay_ms(500);

		// GPIO_ResetBits(GPIOA, GPIO_Pin_0);
		// Delay_ms(500);
		// GPIO_SetBits(GPIOA, GPIO_Pin_0);
		// Delay_ms(500);

		// GPIO_WriteBit(GPIOA, GPIO_Pin_0,Bit_RESET);
		// Delay_ms(500);

		// GPIO_WriteBit(GPIOA, GPIO_Pin_0,Bit_SET);
		// Delay_ms(500);

		// GPIO_WriteBit(GPIOA, GPIO_Pin_0,Bit_RESET);
		// Delay_ms(500);

		// GPIO_WriteBit(GPIOA, GPIO_Pin_0,Bit_SET);
		// Delay_ms(500);
	}
}
