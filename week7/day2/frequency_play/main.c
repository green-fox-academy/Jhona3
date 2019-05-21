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

	BSP_PB_Init(BUTTON_KEY, BUTTON_MODE_GPIO);

	BSP_LED_Init(LED1);
	int counter = 0;
	int freq_x = 1;

	while (1) {
		/* If button is pressed do something */

			++counter;


		if (counter % 3 == 0 && counter <= 9) {
						++freq_x;
					}
		if (counter % 3 == 0 && counter > 9) {
						--freq_x;
					}
		if (counter == 18){
			counter = 0;
		}

		BSP_LED_On(LED1);
		HAL_Delay(1000 / freq_x);
		BSP_LED_Off(LED1);
		HAL_Delay(1000 / freq_x);

	}

}
