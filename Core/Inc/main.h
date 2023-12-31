/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define BUT1_Pin GPIO_PIN_1
#define BUT1_GPIO_Port GPIOA
#define BUT2_Pin GPIO_PIN_2
#define BUT2_GPIO_Port GPIOA
#define BUT3_Pin GPIO_PIN_3
#define BUT3_GPIO_Port GPIOA
#define LED_RED_Pin GPIO_PIN_4
#define LED_RED_GPIO_Port GPIOA
#define LED_YELLOW_Pin GPIO_PIN_5
#define LED_YELLOW_GPIO_Port GPIOA
#define LED_GREEN_Pin GPIO_PIN_6
#define LED_GREEN_GPIO_Port GPIOA
#define LED_RED_0_Pin GPIO_PIN_7
#define LED_RED_0_GPIO_Port GPIOA
#define A_Pin GPIO_PIN_0
#define A_GPIO_Port GPIOB
#define B_Pin GPIO_PIN_1
#define B_GPIO_Port GPIOB
#define C_Pin GPIO_PIN_2
#define C_GPIO_Port GPIOB
#define D0_Pin GPIO_PIN_10
#define D0_GPIO_Port GPIOB
#define E0_Pin GPIO_PIN_11
#define E0_GPIO_Port GPIOB
#define F0_Pin GPIO_PIN_12
#define F0_GPIO_Port GPIOB
#define G0_Pin GPIO_PIN_13
#define G0_GPIO_Port GPIOB
#define EN1_Pin GPIO_PIN_14
#define EN1_GPIO_Port GPIOB
#define EN2_Pin GPIO_PIN_15
#define EN2_GPIO_Port GPIOB
#define LED_YELLOW_0_Pin GPIO_PIN_8
#define LED_YELLOW_0_GPIO_Port GPIOA
#define LED_GREEN_0_Pin GPIO_PIN_9
#define LED_GREEN_0_GPIO_Port GPIOA
#define D_Pin GPIO_PIN_3
#define D_GPIO_Port GPIOB
#define E_Pin GPIO_PIN_4
#define E_GPIO_Port GPIOB
#define F_Pin GPIO_PIN_5
#define F_GPIO_Port GPIOB
#define G_Pin GPIO_PIN_6
#define G_GPIO_Port GPIOB
#define A0_Pin GPIO_PIN_7
#define A0_GPIO_Port GPIOB
#define B0_Pin GPIO_PIN_8
#define B0_GPIO_Port GPIOB
#define C0_Pin GPIO_PIN_9
#define C0_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
