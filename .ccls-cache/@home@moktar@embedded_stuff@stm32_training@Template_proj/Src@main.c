//#define STM32F401xE

#include "stm32f4xx.h"
#include <stdint.h>
#define GPIOA_en (1U<<0)//enable the clock source (set 1 at pos 0)

#define PIN5 (1U<<5)
#define LED_pin PIN5


int main(void)
{
	RCC->AHB1ENR |=GPIOA_en ;
	GPIOA->MODER |= (1U<< 10);
	GPIOA->MODER &= ~(1U<< 11);
	while (1)
		{
		//Set pin 	1
	//		GPIOA_ODR_R |= LED_pin;
			// toggle pin
	//		GPIOA_ODR_R ^= LED_pin;
		GPIOA->ODR^= LED_pin;
			for (int i=0;i<100000;i++)
			{}


		}
return 0;
}
