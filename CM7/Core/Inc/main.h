/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal.h"

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
#define IMU3_SCK_Pin GPIO_PIN_2
#define IMU3_SCK_GPIO_Port GPIOE
#define IMU3_INT_Pin GPIO_PIN_3
#define IMU3_INT_GPIO_Port GPIOE
#define IMU3_CS_Pin GPIO_PIN_4
#define IMU3_CS_GPIO_Port GPIOE
#define IMU3_MISO_Pin GPIO_PIN_5
#define IMU3_MISO_GPIO_Port GPIOE
#define IMU3_MOSI_Pin GPIO_PIN_6
#define IMU3_MOSI_GPIO_Port GPIOE
#define BAR1_CS_Pin GPIO_PIN_13
#define BAR1_CS_GPIO_Port GPIOC
#define DET_0_Pin GPIO_PIN_2
#define DET_0_GPIO_Port GPIOF
#define ARM_0_Pin GPIO_PIN_3
#define ARM_0_GPIO_Port GPIOF
#define MUX_STAT_Pin GPIO_PIN_4
#define MUX_STAT_GPIO_Port GPIOF
#define PWM_LS_16_Pin GPIO_PIN_6
#define PWM_LS_16_GPIO_Port GPIOF
#define IMU1_SCK_Pin GPIO_PIN_7
#define IMU1_SCK_GPIO_Port GPIOF
#define IMU1_MISO_Pin GPIO_PIN_8
#define IMU1_MISO_GPIO_Port GPIOF
#define IMU1_MOSI_Pin GPIO_PIN_9
#define IMU1_MOSI_GPIO_Port GPIOF
#define IMU1_CS_Pin GPIO_PIN_10
#define IMU1_CS_GPIO_Port GPIOF
#define MCU_WDI_Pin GPIO_PIN_0
#define MCU_WDI_GPIO_Port GPIOC
#define MCU_ARM_1_Pin GPIO_PIN_1
#define MCU_ARM_1_GPIO_Port GPIOC
#define WD_IN_Pin GPIO_PIN_2
#define WD_IN_GPIO_Port GPIOC
#define WD_EN_Pin GPIO_PIN_3
#define WD_EN_GPIO_Port GPIOC
#define OUT_LS_1_Pin GPIO_PIN_4
#define OUT_LS_1_GPIO_Port GPIOA
#define OUT_LS_2_Pin GPIO_PIN_5
#define OUT_LS_2_GPIO_Port GPIOC
#define OUT_LS_3_Pin GPIO_PIN_2
#define OUT_LS_3_GPIO_Port GPIOB
#define OUT_LS_5_Pin GPIO_PIN_11
#define OUT_LS_5_GPIO_Port GPIOF
#define OUT_LS_4_Pin GPIO_PIN_12
#define OUT_LS_4_GPIO_Port GPIOF
#define BATT_SENSE_Pin GPIO_PIN_13
#define BATT_SENSE_GPIO_Port GPIOF
#define OUT_LS_6_Pin GPIO_PIN_14
#define OUT_LS_6_GPIO_Port GPIOF
#define IN_LS_1_Pin GPIO_PIN_15
#define IN_LS_1_GPIO_Port GPIOF
#define IN_LS_2_Pin GPIO_PIN_0
#define IN_LS_2_GPIO_Port GPIOG
#define IN_LS_3_Pin GPIO_PIN_1
#define IN_LS_3_GPIO_Port GPIOG
#define IN_LS_4_Pin GPIO_PIN_10
#define IN_LS_4_GPIO_Port GPIOE
#define IN_LS_5_Pin GPIO_PIN_12
#define IN_LS_5_GPIO_Port GPIOE
#define IN_LS_6_Pin GPIO_PIN_15
#define IN_LS_6_GPIO_Port GPIOE
#define FLASH_SCK_Pin GPIO_PIN_10
#define FLASH_SCK_GPIO_Port GPIOB
#define PWM_LS_10_Pin GPIO_PIN_11
#define PWM_LS_10_GPIO_Port GPIOB
#define FLASH_MISO_Pin GPIO_PIN_14
#define FLASH_MISO_GPIO_Port GPIOB
#define FLASH_MOSI_Pin GPIO_PIN_15
#define FLASH_MOSI_GPIO_Port GPIOB
#define SD_DET_Pin GPIO_PIN_10
#define SD_DET_GPIO_Port GPIOD
#define VDD_12_PG_Pin GPIO_PIN_2
#define VDD_12_PG_GPIO_Port GPIOG
#define VDD_5_PG_Pin GPIO_PIN_3
#define VDD_5_PG_GPIO_Port GPIOG
#define VDD_3V3_SNS_PG_Pin GPIO_PIN_4
#define VDD_3V3_SNS_PG_GPIO_Port GPIOG
#define VDD_3V3_SYS_PG_Pin GPIO_PIN_5
#define VDD_3V3_SYS_PG_GPIO_Port GPIOG
#define VDD_3V3_SEC_PG_Pin GPIO_PIN_6
#define VDD_3V3_SEC_PG_GPIO_Port GPIOG
#define FLASH_CS_Pin GPIO_PIN_7
#define FLASH_CS_GPIO_Port GPIOG
#define SPI_LS_CS_Pin GPIO_PIN_8
#define SPI_LS_CS_GPIO_Port GPIOG
#define BAR2_CS_Pin GPIO_PIN_15
#define BAR2_CS_GPIO_Port GPIOA
#define IMU2_CS_Pin GPIO_PIN_1
#define IMU2_CS_GPIO_Port GPIOD
#define MAG1_INT_Pin GPIO_PIN_7
#define MAG1_INT_GPIO_Port GPIOD
#define IMU2_INT1_Pin GPIO_PIN_9
#define IMU2_INT1_GPIO_Port GPIOG
#define IMU2_INT2_Pin GPIO_PIN_10
#define IMU2_INT2_GPIO_Port GPIOG
#define IMU1_INT_Pin GPIO_PIN_11
#define IMU1_INT_GPIO_Port GPIOG
#define IMU3_RESET_Pin GPIO_PIN_15
#define IMU3_RESET_GPIO_Port GPIOG
#define MAG1_SCL_Pin GPIO_PIN_6
#define MAG1_SCL_GPIO_Port GPIOB
#define MAG1_SDA_Pin GPIO_PIN_7
#define MAG1_SDA_GPIO_Port GPIOB
#define PITOT_SCL_Pin GPIO_PIN_8
#define PITOT_SCL_GPIO_Port GPIOB
#define PITOT_SDA_Pin GPIO_PIN_9
#define PITOT_SDA_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
