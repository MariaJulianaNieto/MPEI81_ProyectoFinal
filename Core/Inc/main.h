/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#define locom_encIzqA_Pin GPIO_PIN_0
#define locom_encIzqA_GPIO_Port GPIOA
#define locom_encIzqB_Pin GPIO_PIN_1
#define locom_encIzqB_GPIO_Port GPIOA
#define comm_btTX_Pin GPIO_PIN_2
#define comm_btTX_GPIO_Port GPIOA
#define comm_btRX_Pin GPIO_PIN_3
#define comm_btRX_GPIO_Port GPIOA
#define percep_irDistanciaADC_Pin GPIO_PIN_4
#define percep_irDistanciaADC_GPIO_Port GPIOA
#define pot_vBatADC_Pin GPIO_PIN_5
#define pot_vBatADC_GPIO_Port GPIOA
#define locom_encDerA_Pin GPIO_PIN_6
#define locom_encDerA_GPIO_Port GPIOA
#define locom_encDerB_Pin GPIO_PIN_7
#define locom_encDerB_GPIO_Port GPIOA
#define recol_servoPWM_Pin GPIO_PIN_0
#define recol_servoPWM_GPIO_Port GPIOB
#define pot_iBatADC_Pin GPIO_PIN_1
#define pot_iBatADC_GPIO_Port GPIOB
#define locom_mototDerBIN1_Pin GPIO_PIN_10
#define locom_mototDerBIN1_GPIO_Port GPIOB
#define locom_motorDerBIN2_Pin GPIO_PIN_11
#define locom_motorDerBIN2_GPIO_Port GPIOB
#define locom_driveSTBY_Pin GPIO_PIN_12
#define locom_driveSTBY_GPIO_Port GPIOB
#define ind_ledDatosWS2812_Pin GPIO_PIN_13
#define ind_ledDatosWS2812_GPIO_Port GPIOB
#define percep_echoCentro_Pin GPIO_PIN_14
#define percep_echoCentro_GPIO_Port GPIOB
#define percep_proxDigital_Pin GPIO_PIN_15
#define percep_proxDigital_GPIO_Port GPIOB
#define locom_motorIzqPWM_Pin GPIO_PIN_8
#define locom_motorIzqPWM_GPIO_Port GPIOA
#define comm_espTX_Pin GPIO_PIN_9
#define comm_espTX_GPIO_Port GPIOA
#define comm_espRX_Pin GPIO_PIN_10
#define comm_espRX_GPIO_Port GPIOA
#define locom_motorDerPWM_Pin GPIO_PIN_11
#define locom_motorDerPWM_GPIO_Port GPIOA
#define ui_botomModoTecnico_Pin GPIO_PIN_12
#define ui_botomModoTecnico_GPIO_Port GPIOA
#define percep_trigCompartido_Pin GPIO_PIN_15
#define percep_trigCompartido_GPIO_Port GPIOA
#define locom_motorIzqAIN1_Pin GPIO_PIN_3
#define locom_motorIzqAIN1_GPIO_Port GPIOB
#define locom_motorIzqAIN2_Pin GPIO_PIN_4
#define locom_motorIzqAIN2_GPIO_Port GPIOB
#define percep_echoIzq_Pin GPIO_PIN_5
#define percep_echoIzq_GPIO_Port GPIOB
#define i2cl_SCL_Pin GPIO_PIN_6
#define i2cl_SCL_GPIO_Port GPIOB
#define i2cl_SDA_Pin GPIO_PIN_7
#define i2cl_SDA_GPIO_Port GPIOB
#define ind_buzzer_Pin GPIO_PIN_8
#define ind_buzzer_GPIO_Port GPIOB
#define percep_echoDer_Pin GPIO_PIN_9
#define percep_echoDer_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
