#include "stm32f7xx_hal.h"
#include "stm32f7xx.h"
#include "stm32746g_discovery.h"
#include "ft5336.h"
#include "stm32746g_discovery_lcd.h"
#include "stm32746g_discovery_ts.h"
#include <stdio.h>

static void SystemClock_Config(void);
static void Error_Handler(void);

void LCD_Init(){
	BSP_LCD_Init();
	BSP_LCD_LayerDefaultInit(1, LCD_FB_START_ADDRESS);
	BSP_LCD_SelectLayer(1);
	BSP_LCD_Clear(LCD_COLOR_DARKCYAN);
	BSP_LCD_SetBackColor(LCD_COLOR_DARKCYAN);
	BSP_LCD_SetFont(&Font24);
	BSP_LCD_SetTextColor(LCD_COLOR_RED);

}

void TS_Init(){
	BSP_TS_Init(BSP_LCD_GetXSize(), BSP_LCD_GetYSize());

}

uint32_t rand_num2 = 2;
uint32_t rand_num = 0;
int main(void)
{
	SystemClock_Config();
    HAL_Init();
	LCD_Init();
	TS_Init();
	__HAL_RCC_RNG_CLK_ENABLE();
	RNG_HandleTypeDef handler;
	handler.Instance = RNG;
	HAL_RNG_Init(&handler);


	
	//uint32_t x_size = BSP_LCD_GetXSize();
	//uint32_t y_size = BSP_LCD_GetYSize();
	TS_StateTypeDef ts_state;
	ts_state.touchX[0] = 0;
	ts_state.touchY[0] = 0;
	
	
	int counter = 0;
    while(1) {
		BSP_TS_GetState(&ts_state);
		if(ts_state.touchDetected && counter == 0){
			rand_num2 = HAL_RNG_GetRandomNumber(&handler) % 350;
			rand_num = HAL_RNG_GetRandomNumber(&handler) % 250;

			BSP_LCD_Clear(LCD_COLOR_DARKCYAN);
			BSP_LCD_DisplayStringAt(rand_num2, rand_num, "Tap Fast!!!", LEFT_MODE);
			HAL_Delay(160);
			
			++counter;
			
		}
		if(ts_state.touchDetected && ts_state.touchX[0] > rand_num2 && ts_state.touchX[0] < rand_num2 + 130 && ts_state.touchY[0] > rand_num && ts_state.touchY[0] < rand_num + 40){
			rand_num2 = HAL_RNG_GetRandomNumber(&handler) % 350;
			rand_num = HAL_RNG_GetRandomNumber(&handler) % 250;

			BSP_LCD_Clear(LCD_COLOR_DARKCYAN);
			BSP_LCD_DisplayStringAt(rand_num2, rand_num, "Tap Fast!!!", LEFT_MODE);
			HAL_Delay(160);
			
			
		}
    }

    return 0;
}



// You shouldn't write any code beyond this point

static void Error_Handler(void)
{
}

static void SystemClock_Config(void)
{
    RCC_OscInitTypeDef RCC_OscInitStruct = {0};
    RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

    /**Configure the main internal regulator output voltage */
    __HAL_RCC_PWR_CLK_ENABLE();
    __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

    /**Initializes the CPU, AHB and APB busses clocks */
    RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
    RCC_OscInitStruct.HSIState = RCC_HSI_ON;
    RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
    RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
    RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
    RCC_OscInitStruct.PLL.PLLM = 8;
    RCC_OscInitStruct.PLL.PLLN = 216;
    RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
    RCC_OscInitStruct.PLL.PLLQ = 2;

    if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
    {
        Error_Handler();
    }

    /**Activate the Over-Drive mode */
    if (HAL_PWREx_EnableOverDrive() != HAL_OK)
    {
        Error_Handler();
    }

    /**Initializes the CPU, AHB and APB busses clocks */
    RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
    RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
    RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
    RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
    RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

    if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_7) != HAL_OK)
    {
        Error_Handler();
    }
}

void SysTick_Handler(void)
{
    HAL_IncTick();
}

void NMI_Handler(void)
{
}

void HardFault_Handler(void)
{
    while (1)
    {
    }
}

void MemManage_Handler(void)
{
    while (1)
    {
    }
}

void BusFault_Handler(void)
{
    while (1)
    {
    }
}

void UsageFault_Handler(void)
{
    while (1)
    {
    }
}

void SVC_Handler(void)
{
}

void DebugMon_Handler(void)
{
}

void PendSV_Handler(void)
{
}

