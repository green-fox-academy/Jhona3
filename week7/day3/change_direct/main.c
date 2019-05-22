/**
 ******************************************************************************
 * @file    main.c
 * @author  Ac6
 * @version V1.0
 * @date    01-December-2013
 * @brief   Default main function.
 ******************************************************************************
 */

#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

int main(void) {
	HAL_Init();

	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOFEN; /* GPIOI clock enable */
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOBEN;
	// Init user led (I 1)
	GPIOF->MODER |= (GPIO_MODER_MODER10_0); /* configure PI1 in output mode */
	GPIOF->OTYPER &= ~(GPIO_OTYPER_OT_10);
	GPIOF->MODER |= (GPIO_MODER_MODER9_0); /* configure PI1 in output mode */
	GPIOF->OTYPER &= ~(GPIO_OTYPER_OT_9);
	GPIOF->MODER |= (GPIO_MODER_MODER8_0); /* configure PI1 in output mode */
	GPIOF->OTYPER &= ~(GPIO_OTYPER_OT_8);
	GPIOF->MODER |= (GPIO_MODER_MODER7_0); /* configure PI1 in output mode */
	GPIOF->OTYPER &= ~(GPIO_OTYPER_OT_7);/* ensure push pull mode selected default */

	GPIOB->MODER |= 0b0000000000010000;
	GPIOB->PUPDR &= ~(GPIO_PUPDR_PUPDR4);

	int pin = 10;

	int direct = 0;

	while (1) {

		if(GPIOB->IDR & (1<<4) ){
			++direct;
		}
		if(direct % 2 == 0){
			if(pin == 6){
				pin = 10;
			}
			GPIOF->BSRR = (1<<pin);
			HAL_Delay(125);
			GPIOF->BSRR = (1<<pin+16);
			--pin;
		}

		if(direct % 2 != 0){
			if(pin == 11){
				pin = 7;
			}
			GPIOF->BSRR = (1<<pin);
			HAL_Delay(125);
			GPIOF->BSRR = (1<<pin+16);
			++pin;
		}

	}

}
