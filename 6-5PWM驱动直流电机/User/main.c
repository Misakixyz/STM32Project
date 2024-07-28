#include "stm32f10x.h" // Device header
#include "Delay.h"
#include "OLED.h"
#include "Motor.h"
#include "Key.h"

// uint8_t KeyNum;
uint16_t NUM;
int8_t Speed;
int main(void)
{
	OLED_Init();
	Motor_Init();
	Key_Init();

	Motor_SetSpeed(50);

	OLED_ShowString(1, 1, "Speed:");

	while (1)
	{
		uint8_t KeyNum = Key_GetNum();
		if (KeyNum == 1) {
			Speed += 10;
			if (Speed > 100) {
				Speed = -100;
			}
		}
		Motor_SetSpeed(Speed);
		OLED_ShowSignedNum(1, 7, Speed, 3);
	}
}

