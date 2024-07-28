#include "stm32f10x.h"
#include "PWM.h"

void Servo_Init(void) {
    PWM_Init();
}

void Servo_SetAngle(uint16_t Angle) {
    PWM_SetCompare2( Angle /180.0 * 2000 + 500 );
}
