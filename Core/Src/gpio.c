/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    gpio.c
  * @brief   This file provides code for the configuration
  *          of all used GPIO pins.
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

/* Includes ------------------------------------------------------------------*/
#include "gpio.h"

/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/*----------------------------------------------------------------------------*/
/* Configure GPIO                                                             */
/*----------------------------------------------------------------------------*/
/* USER CODE BEGIN 1 */

/* USER CODE END 1 */

/** Configure pins as
        * Analog
        * Input
        * Output
        * EVENT_OUT
        * EXTI
     PA0-WKUP   ------> S_TIM2_CH1_ETR
     PA1   ------> S_TIM2_CH2
     PA2   ------> USART2_TX
     PA3   ------> USART2_RX
     PA6   ------> S_TIM3_CH1
     PA7   ------> S_TIM3_CH2
     PB0   ------> S_TIM3_CH3
     PA8   ------> S_TIM1_CH1
     PA9   ------> USART1_TX
     PA10   ------> USART1_RX
     PA11   ------> S_TIM1_CH4
     PB6   ------> I2C1_SCL
     PB7   ------> I2C1_SDA
*/
void MX_GPIO_Init(void)
{

  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOD_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, locom_mototDerBIN1_Pin|locom_motorDerBIN2_Pin|locom_driveSTBY_Pin|ind_ledDatosWS2812_Pin
                          |locom_motorIzqAIN1_Pin|locom_motorIzqAIN2_Pin|ind_buzzer_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(percep_trigCompartido_GPIO_Port, percep_trigCompartido_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : locom_encIzqA_Pin locom_encIzqB_Pin locom_encDerA_Pin locom_encDerB_Pin
                           locom_motorIzqPWM_Pin locom_motorDerPWM_Pin */
  GPIO_InitStruct.Pin = locom_encIzqA_Pin|locom_encIzqB_Pin|locom_encDerA_Pin|locom_encDerB_Pin
                          |locom_motorIzqPWM_Pin|locom_motorDerPWM_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : comm_btTX_Pin comm_espTX_Pin */
  GPIO_InitStruct.Pin = comm_btTX_Pin|comm_espTX_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : comm_btRX_Pin comm_espRX_Pin */
  GPIO_InitStruct.Pin = comm_btRX_Pin|comm_espRX_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pin : recol_servoPWM_Pin */
  GPIO_InitStruct.Pin = recol_servoPWM_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(recol_servoPWM_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : locom_mototDerBIN1_Pin locom_motorDerBIN2_Pin locom_driveSTBY_Pin ind_ledDatosWS2812_Pin
                           locom_motorIzqAIN1_Pin locom_motorIzqAIN2_Pin ind_buzzer_Pin */
  GPIO_InitStruct.Pin = locom_mototDerBIN1_Pin|locom_motorDerBIN2_Pin|locom_driveSTBY_Pin|ind_ledDatosWS2812_Pin
                          |locom_motorIzqAIN1_Pin|locom_motorIzqAIN2_Pin|ind_buzzer_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pins : percep_echoCentro_Pin percep_echoIzq_Pin percep_echoDer_Pin */
  GPIO_InitStruct.Pin = percep_echoCentro_Pin|percep_echoIzq_Pin|percep_echoDer_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_RISING;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pin : percep_proxDigital_Pin */
  GPIO_InitStruct.Pin = percep_proxDigital_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(percep_proxDigital_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : ui_botomModoTecnico_Pin */
  GPIO_InitStruct.Pin = ui_botomModoTecnico_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(ui_botomModoTecnico_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : percep_trigCompartido_Pin */
  GPIO_InitStruct.Pin = percep_trigCompartido_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(percep_trigCompartido_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : i2cl_SCL_Pin i2cl_SDA_Pin */
  GPIO_InitStruct.Pin = i2cl_SCL_Pin|i2cl_SDA_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_OD;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 2 */

/* USER CODE END 2 */
