#include "stm32f7xx_hal.h"
#include "stm32f7xx.h"
#include "stm32746g_discovery.h"
void led_init(){
	__HAL_RCC_GPIOF_CLK_ENABLE();
	
	GPIO_InitTypeDef gpio_config;

	gpio_config.Pin = GPIO_PIN_10 | GPIO_PIN_9;
	gpio_config.Mode = GPIO_MODE_OUTPUT_PP;
	gpio_config.Pull = GPIO_NOPULL;
	gpio_config.Speed = GPIO_SPEED_FAST;

	HAL_GPIO_Init(GPIOF, &gpio_config);
}

void user_button_init(){
	GPIO_InitTypeDef user_button_handle;
	__HAL_RCC_GPIOI_CLK_ENABLE();
	user_button_handle.Pin = GPIO_PIN_11;
	user_button_handle.Pull = GPIO_NOPULL;
	user_button_handle.Speed = GPIO_SPEED_FAST;
	user_button_handle.Mode = GPIO_MODE_IT_RISING;
	HAL_GPIO_Init(GPIOI, &user_button_handle);

	HAL_NVIC_SetPriority(EXTI15_10_IRQn, 2, 0);

	HAL_NVIC_EnableIRQ(EXTI15_10_IRQn);
}

volatile int counter = 0;

int main(void) {
	HAL_Init();
	led_init();

	user_button_init();
	


	//HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_SET);
	//HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_RESET);

	while(1){
		if(counter >= 1){
			GPIOF->BSRR = (1 << 10);
			GPIOF->BSRR = (1 << 9);
			HAL_Delay(250);
			GPIOF->BSRR = (1 << 26);
			GPIOF->BSRR = (1 << 25);
			HAL_Delay(250);
		}
	}





}
void EXTI15_10_IRQHandler(void)
{
    HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_11);
}
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
    /* this is the place for the user code */
	++counter;
}


void SysTick_Handler(void)
{
	HAL_IncTick();
	HAL_SYSTICK_IRQHandler();
}