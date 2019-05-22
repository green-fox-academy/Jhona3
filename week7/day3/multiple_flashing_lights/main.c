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
	//GPIOI->OSPEEDR |= (GPIO_OSPEEDER_OSPEEDR1); /* ensure maximum speed setting (even though it is unnecessary) */
	//GPIOI->PUPDR &= ~(GPIO_PUPDR_PUPDR1);   /* ensure all pull up pull down resistors are disabled */

	// Init user button (I 11)
	//GPIOI->MODER |= 0b0000100000000000;      /* configure PI11 in input mode */
	//int pin = 10;
	//uint32_t red_led = (1 << pin);
	//uint32_t user_button = (1 << 11);
	//uint32_t off_red_led = red_led << 16;

	while (1) {
		//uint32_t red_led = (1 << pin);
			//uint32_t user_button = (1 << 11);
		//uint32_t off_red_led = red_led << 16;

		//GPIOF->BSRR = red_led;
		//HAL_Delay(250);
		//GPIOF->BSRR = off_red_led;
			GPIOF->BSRR = (1<<10);
			GPIOF->BSRR = (1<<9);
			GPIOF->BSRR = (1<<8);
			GPIOF->BSRR = (1<<7);
			HAL_Delay(500);
			GPIOF->BSRR = (1<<26);
			GPIOF->BSRR = (1<<25);
			GPIOF->BSRR = (1<<24);
			GPIOF->BSRR = (1<<23);
			HAL_Delay(500);
		//--pin;
		//if(pin == 6){
			//pin = 10;




	}

}
