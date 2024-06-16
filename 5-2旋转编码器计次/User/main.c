#include "stm32f10x.h" // Device header
#include "Delay.h"
#include "OLED.h"


uint8_t KeyNum;
int main(void)
{
	OLED_Init();
	OLED_ShowChar(1, 1, 'X');
	OLED_ShowString(1, 3, "Hellow World");
	OLED_ShowNum(2, 1, 777777, 6);
	OLED_ShowSignedNum(2, 8, -999, 2);
	OLED_ShowHexNum(3, 1, 0xBB77, 4);
	OLED_ShowBinNum(4, 1, 0xBB77, 16);

	while (1)
	{

	}
}
