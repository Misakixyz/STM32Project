#include "stm32f10x.h"

void Servo_Init(void) {
    PWM_Init();
}

void Servo_SetAngle(float Angle) {
    PWM_SetCompare2( Angle /100 * 2000 + 500 );
}