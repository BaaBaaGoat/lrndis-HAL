/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
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
#include "stm32f4xx_hal.h"

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
#define DW1000_IRQ_Pin GPIO_PIN_1
#define DW1000_IRQ_GPIO_Port GPIOC
#define DW1000_IRQ_EXTI_IRQn EXTI1_IRQn
#define DW1000_MISO_Pin GPIO_PIN_2
#define DW1000_MISO_GPIO_Port GPIOC
#define DW1000_MOSI_Pin GPIO_PIN_3
#define DW1000_MOSI_GPIO_Port GPIOC
#define DW1000_384EN_Pin GPIO_PIN_0
#define DW1000_384EN_GPIO_Port GPIOA
#define DW1000_RESET_Pin GPIO_PIN_1
#define DW1000_RESET_GPIO_Port GPIOA
#define DW1000_CS_Pin GPIO_PIN_2
#define DW1000_CS_GPIO_Port GPIOA
#define VBAT_ADC_Pin GPIO_PIN_3
#define VBAT_ADC_GPIO_Port GPIOA
#define VBAT_ADC_EN_Pin GPIO_PIN_4
#define VBAT_ADC_EN_GPIO_Port GPIOC
#define KEY_Y4_Pin GPIO_PIN_5
#define KEY_Y4_GPIO_Port GPIOC
#define KEY_Y3_Pin GPIO_PIN_0
#define KEY_Y3_GPIO_Port GPIOB
#define KEY_Y2_Pin GPIO_PIN_1
#define KEY_Y2_GPIO_Port GPIOB
#define KEY_Y1_Pin GPIO_PIN_2
#define KEY_Y1_GPIO_Port GPIOB
#define DW1000_SCK_Pin GPIO_PIN_10
#define DW1000_SCK_GPIO_Port GPIOB
#define RST192_Pin GPIO_PIN_12
#define RST192_GPIO_Port GPIOB
#define EN192_Pin GPIO_PIN_13
#define EN192_GPIO_Port GPIOB
#define RS192_Pin GPIO_PIN_14
#define RS192_GPIO_Port GPIOB
#define CS192_Pin GPIO_PIN_15
#define CS192_GPIO_Port GPIOB
#define KEY_X4_Pin GPIO_PIN_7
#define KEY_X4_GPIO_Port GPIOC
#define KEY_X3_Pin GPIO_PIN_8
#define KEY_X3_GPIO_Port GPIOC
#define DAT192_Pin GPIO_PIN_9
#define DAT192_GPIO_Port GPIOC
#define CLK192_Pin GPIO_PIN_8
#define CLK192_GPIO_Port GPIOA
#define KEY_X2_Pin GPIO_PIN_9
#define KEY_X2_GPIO_Port GPIOA
#define KEY_X1_Pin GPIO_PIN_10
#define KEY_X1_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
