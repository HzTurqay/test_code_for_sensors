/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    gpio.c
  * @brief   This file provides code for the configuration
  *          of all used GPIO pins.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
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

/** Configure pins
*/
void MX_GPIO_Init(void)
{

  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOE_CLK_ENABLE();
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOF_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOG_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(IMU3_CS_GPIO_Port, IMU3_CS_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOC, BAR1_CS_Pin|MCU_ARM_1_Pin|WD_EN_Pin|OUT_LS_2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOF, DET_0_Pin|ARM_0_Pin|IMU1_CS_Pin|OUT_LS_5_Pin
                          |OUT_LS_4_Pin|OUT_LS_6_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, OUT_LS_1_Pin|BAR2_CS_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(OUT_LS_3_GPIO_Port, OUT_LS_3_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(FLASH_CS_GPIO_Port, FLASH_CS_Pin, GPIO_PIN_SET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOG, SPI_LS_CS_Pin|IMU3_RESET_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(IMU2_CS_GPIO_Port, IMU2_CS_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin : IMU3_INT_Pin */
  GPIO_InitStruct.Pin = IMU3_INT_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_RISING;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(IMU3_INT_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : IMU3_CS_Pin */
  GPIO_InitStruct.Pin = IMU3_CS_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(IMU3_CS_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : BAR1_CS_Pin MCU_ARM_1_Pin WD_EN_Pin OUT_LS_2_Pin */
  GPIO_InitStruct.Pin = BAR1_CS_Pin|MCU_ARM_1_Pin|WD_EN_Pin|OUT_LS_2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : DET_0_Pin ARM_0_Pin IMU1_CS_Pin OUT_LS_5_Pin
                           OUT_LS_4_Pin OUT_LS_6_Pin */
  GPIO_InitStruct.Pin = DET_0_Pin|ARM_0_Pin|IMU1_CS_Pin|OUT_LS_5_Pin
                          |OUT_LS_4_Pin|OUT_LS_6_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOF, &GPIO_InitStruct);

  /*Configure GPIO pins : MUX_STAT_Pin BATT_SENSE_Pin IN_LS_1_Pin */
  GPIO_InitStruct.Pin = MUX_STAT_Pin|BATT_SENSE_Pin|IN_LS_1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOF, &GPIO_InitStruct);

  /*Configure GPIO pins : MCU_WDI_Pin WD_IN_Pin */
  GPIO_InitStruct.Pin = MCU_WDI_Pin|WD_IN_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : OUT_LS_1_Pin BAR2_CS_Pin */
  GPIO_InitStruct.Pin = OUT_LS_1_Pin|BAR2_CS_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pin : OUT_LS_3_Pin */
  GPIO_InitStruct.Pin = OUT_LS_3_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(OUT_LS_3_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : IN_LS_2_Pin IN_LS_3_Pin VDD_12_PG_Pin VDD_5_PG_Pin
                           VDD_3V3_SNS_PG_Pin VDD_3V3_SYS_PG_Pin VDD_3V3_SEC_PG_Pin */
  GPIO_InitStruct.Pin = IN_LS_2_Pin|IN_LS_3_Pin|VDD_12_PG_Pin|VDD_5_PG_Pin
                          |VDD_3V3_SNS_PG_Pin|VDD_3V3_SYS_PG_Pin|VDD_3V3_SEC_PG_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOG, &GPIO_InitStruct);

  /*Configure GPIO pins : IN_LS_4_Pin IN_LS_5_Pin IN_LS_6_Pin */
  GPIO_InitStruct.Pin = IN_LS_4_Pin|IN_LS_5_Pin|IN_LS_6_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

  /*Configure GPIO pins : SD_DET_Pin MAG1_INT_Pin */
  GPIO_InitStruct.Pin = SD_DET_Pin|MAG1_INT_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

  /*Configure GPIO pin : FLASH_CS_Pin */
  GPIO_InitStruct.Pin = FLASH_CS_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_OD;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(FLASH_CS_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : SPI_LS_CS_Pin IMU3_RESET_Pin */
  GPIO_InitStruct.Pin = SPI_LS_CS_Pin|IMU3_RESET_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOG, &GPIO_InitStruct);

  /*Configure GPIO pin : IMU2_CS_Pin */
  GPIO_InitStruct.Pin = IMU2_CS_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(IMU2_CS_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : IMU2_INT1_Pin IMU2_INT2_Pin IMU1_INT_Pin */
  GPIO_InitStruct.Pin = IMU2_INT1_Pin|IMU2_INT2_Pin|IMU1_INT_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_RISING;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOG, &GPIO_InitStruct);

  /*AnalogSwitch Config */
  HAL_SYSCFG_AnalogSwitchConfig(SYSCFG_SWITCH_PC3, SYSCFG_SWITCH_PC3_CLOSE);

}

/* USER CODE BEGIN 2 */

/* USER CODE END 2 */
