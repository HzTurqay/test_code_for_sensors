/*
 * sensor_read.c
 *
 *  Created on: Aug 21, 2025
 *      Author: Turgay Mammadov
 */


#include "main.h"
#include "fatfs.h"
#include "i2c.h"
#include "memorymap.h"
#include "sdmmc.h"
#include "spi.h"
#include "tim.h"
#include "usart.h"
#include "usb_otg.h"
#include "gpio.h"
#include "sensor_read.h"
#include <stdio.h>
#include "stdint.h"
#include "MS5607SPI.h"
#include "MS5611.h"
#include "ahrs_hal.h"


double ms5607_temp;
double ms5607_pressure;

uint32_t ms5611_temp;
uint32_t ms5611_pressure;
float ms5611_altitude;


float ahrs_altitude;
float ahrs_pitch;
float ahrs_roll;


ADIS16467_t adis;

void read_ahrs(void){
	get_dmp_data(&ahrs_altitude, &ahrs_pitch, &ahrs_roll);
}






void initialise_adis(ADIS16467_t *de){
de->hspi = &hspi4;
de->GPIO_PIN = IMU3_CS_Pin;
de->GPIOx = IMU3_CS_GPIO_Port;
}

void read_bar1(void){
	MS5607_Init(&hspi6, BAR1_CS_GPIO_Port, BAR1_CS_Pin);
	MS5607SetTemperatureOSR(OSR_512);
	MS5607SetPressureOSR(OSR_512);

	ms5607_pressure = MS5607GetPressurePa();
	ms5607_temp = MS5607GetTemperatureC();

	printf("the values for ms5607 BAR and TEMP : %.2f C %.2f PA" , ms5607_temp , ms5607_pressure);

}



void read_adis(void){
	initialise_adis(&adis);
	ADIS16467_Init(&adis);
	ADIS16467_Read_Gyro(&adis);
}

void read_bar2(void){
	Barometer_init();

	Barometer_setOSR(OSR_512);

	ms5611_temp = Barometer_getTemp(true);
	ms5611_pressure = Barometer_getPressure(true);
	ms5611_altitude = Barometer_getAltitude(true);

	printf("the values for ms5611 BAR, TEMP and altitude : %u PA %u C , %.2f ALT" , (unsigned int)ms5611_pressure , (unsigned int)ms5611_temp , ms5611_altitude);

}






int _write(int file, char *ptr, int len)
{
 HAL_UART_Transmit(&huart1, (uint8_t*)ptr, len, HAL_MAX_DELAY);
 return len;
}
