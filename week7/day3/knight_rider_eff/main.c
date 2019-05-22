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

	// Init user led (I 1)
	GPIOF->MODER |= (GPIO_MODER_MODER10_0); /* configure PI1 in output mode */
	GPIOF->OTYPER &= ~(GPIO_OTYPER_OT_10);
	GPIOF->MODER |= (GPIO_MODER_MODER9_0); /* configure PI1 in output mode */
	GPIOF->OTYPER &= ~(GPIO_OTYPER_OT_9);
	GPIOF->MODER |= (GPIO_MODER_MODER8_0); /* configure PI1 in output mode */
	GPIOF->OTYPER &= ~(GPIO_OTYPER_OT_8);
	GPIOF->MODER |= (GPIO_MODER_MODER7_0); /* configure PI1 in output mode */
	GPIOF->OTYPER &= ~(GPIO_OTYPER_OT_7);/* ensure push pull mode selected default */

	int pin = 10;
	int direct = 1;

	while (1) {


			GPIOF->BSRR = (1<<pin);
			HAL_Delay(125);
			GPIOF->BSRR = (1<<16+pin);

			if(pin > 6 && direct%2 != 0){
				--pin;
			}
			if(pin > 6 && direct%2 == 0){
							++pin;
						}
			if(pin == 7 || pin == 10){
				++direct;
			}



	}

}
