#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

static void SystemClock_Config(void);

/* the timer's config structure */
TIM_HandleTypeDef tim2_timer_handle;


void init_timer()
{
    __HAL_RCC_TIM2_CLK_ENABLE();
  
    
    tim2_timer_handle.Instance = TIM2;
    tim2_timer_handle.Init.Prescaler = 32400 - 1; // 108000000/43200=25000 -> speed of 1 count-up: 1/25000 sec = 0.4 ms
    tim2_timer_handle.Init.Period = 40000 - 1; // 40000 x 0.3 ms = 12 second period
    tim2_timer_handle.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
    tim2_timer_handle.Init.CounterMode = TIM_COUNTERMODE_UP;

    HAL_TIM_Base_Init(&tim2_timer_handle);
  
}
GPIO_InitTypeDef pf10_led_1;


void init_led(){

 __HAL_RCC_GPIOF_CLK_ENABLE();

 pf10_led_1.Pin = GPIO_PIN_10 | GPIO_PIN_9 | GPIO_PIN_8;
 pf10_led_1.Mode = GPIO_MODE_OUTPUT_PP;
 pf10_led_1.Pull = GPIO_NOPULL;
 pf10_led_1.Speed = GPIO_SPEED_FAST;
 
HAL_GPIO_Init(GPIOF, &pf10_led_1);
}



int main(void)
{
    HAL_Init();
    init_led();

    /* this function call sets the timers input clock to 108 Mhz (=108000000 Hz) */	
    SystemClock_Config();

    init_timer();

    /* starting the timer */
    HAL_TIM_Base_Start(&tim2_timer_handle);

    uint16_t timer_value = 0;
    while (1) {
	
        /* blinking the user LED with 0.1 Hz (1 on and 1 off per 100 ms) */
        timer_value = __HAL_TIM_GET_COUNTER(&tim2_timer_handle);
        if (timer_value == 0) {
            HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_RESET);
        }
        if (timer_value == 10000) {
           HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_SET);
           
        }
        if(timer_value == 20000){
           HAL_GPIO_WritePin(GPIOF, GPIO_PIN_8, GPIO_PIN_SET);
           HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_RESET);
           HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_RESET);
        }
        if(timer_value == 30000){
            HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_SET);
            HAL_GPIO_WritePin(GPIOF, GPIO_PIN_8, GPIO_PIN_RESET);
        }
    }
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

