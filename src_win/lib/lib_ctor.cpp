/*
		This file has been auto-generated by WebbotLib tools V1.1
				** DO NOT MODIFY BY HAND **
*/
#include "../hardware.h"
StatusLed statusLed(&statusLED);
Switch button(&_button_);
Marquee marquee(&_marquee_);
Servo servo1(&_servo1_);
Servo servo2(&_servo2_);
Servo servo3(&_servo3_);
ServoDriver bank1(&_bank1_);
UartHW uart1(_C_uart1);
#include <Stream/Stream.h>
NullStream nullStream;

void __attribute__ ((constructor)) _cpp_Init_(void){
//	stdin = stdout = uart1;
//	stderr = uart1;
}

extern "C" void __cxa_pure_virtual(void){
	while(1);
}

