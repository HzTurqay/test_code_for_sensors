################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/ADIS1647.c \
../Core/Src/DataConverter.c \
../Core/Src/MS5607SPI.c \
../Core/Src/MS5611.c \
../Core/Src/W25Qxx.c \
../Core/Src/ahrs_hal.c \
../Core/Src/driver_icm20689.c \
../Core/Src/gpio.c \
../Core/Src/i2c.c \
../Core/Src/icm42688_hal.c \
../Core/Src/iis2mdc.c \
../Core/Src/iis2mdc_reg.c \
../Core/Src/main.c \
../Core/Src/memorymap.c \
../Core/Src/sdmmc.c \
../Core/Src/sensor_read.c \
../Core/Src/spi.c \
../Core/Src/stm32h7xx_hal_msp.c \
../Core/Src/stm32h7xx_it.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/tim.c \
../Core/Src/usart.c \
../Core/Src/usb_otg.c 

OBJS += \
./Core/Src/ADIS1647.o \
./Core/Src/DataConverter.o \
./Core/Src/MS5607SPI.o \
./Core/Src/MS5611.o \
./Core/Src/W25Qxx.o \
./Core/Src/ahrs_hal.o \
./Core/Src/driver_icm20689.o \
./Core/Src/gpio.o \
./Core/Src/i2c.o \
./Core/Src/icm42688_hal.o \
./Core/Src/iis2mdc.o \
./Core/Src/iis2mdc_reg.o \
./Core/Src/main.o \
./Core/Src/memorymap.o \
./Core/Src/sdmmc.o \
./Core/Src/sensor_read.o \
./Core/Src/spi.o \
./Core/Src/stm32h7xx_hal_msp.o \
./Core/Src/stm32h7xx_it.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/tim.o \
./Core/Src/usart.o \
./Core/Src/usb_otg.o 

C_DEPS += \
./Core/Src/ADIS1647.d \
./Core/Src/DataConverter.d \
./Core/Src/MS5607SPI.d \
./Core/Src/MS5611.d \
./Core/Src/W25Qxx.d \
./Core/Src/ahrs_hal.d \
./Core/Src/driver_icm20689.d \
./Core/Src/gpio.d \
./Core/Src/i2c.d \
./Core/Src/icm42688_hal.d \
./Core/Src/iis2mdc.d \
./Core/Src/iis2mdc_reg.d \
./Core/Src/main.d \
./Core/Src/memorymap.d \
./Core/Src/sdmmc.d \
./Core/Src/sensor_read.d \
./Core/Src/spi.d \
./Core/Src/stm32h7xx_hal_msp.d \
./Core/Src/stm32h7xx_it.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/tim.d \
./Core/Src/usart.d \
./Core/Src/usb_otg.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o Core/Src/%.su Core/Src/%.cyclo: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DCORE_CM7 -DUSE_HAL_DRIVER -DSTM32H757xx -DUSE_PWR_LDO_SUPPLY -c -I../Core/Inc -I../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../Drivers/CMSIS/Include -I../FATFS/Target -I../FATFS/App -I../../Middlewares/Third_Party/FatFs/src -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Src

clean-Core-2f-Src:
	-$(RM) ./Core/Src/ADIS1647.cyclo ./Core/Src/ADIS1647.d ./Core/Src/ADIS1647.o ./Core/Src/ADIS1647.su ./Core/Src/DataConverter.cyclo ./Core/Src/DataConverter.d ./Core/Src/DataConverter.o ./Core/Src/DataConverter.su ./Core/Src/MS5607SPI.cyclo ./Core/Src/MS5607SPI.d ./Core/Src/MS5607SPI.o ./Core/Src/MS5607SPI.su ./Core/Src/MS5611.cyclo ./Core/Src/MS5611.d ./Core/Src/MS5611.o ./Core/Src/MS5611.su ./Core/Src/W25Qxx.cyclo ./Core/Src/W25Qxx.d ./Core/Src/W25Qxx.o ./Core/Src/W25Qxx.su ./Core/Src/ahrs_hal.cyclo ./Core/Src/ahrs_hal.d ./Core/Src/ahrs_hal.o ./Core/Src/ahrs_hal.su ./Core/Src/driver_icm20689.cyclo ./Core/Src/driver_icm20689.d ./Core/Src/driver_icm20689.o ./Core/Src/driver_icm20689.su ./Core/Src/gpio.cyclo ./Core/Src/gpio.d ./Core/Src/gpio.o ./Core/Src/gpio.su ./Core/Src/i2c.cyclo ./Core/Src/i2c.d ./Core/Src/i2c.o ./Core/Src/i2c.su ./Core/Src/icm42688_hal.cyclo ./Core/Src/icm42688_hal.d ./Core/Src/icm42688_hal.o ./Core/Src/icm42688_hal.su ./Core/Src/iis2mdc.cyclo ./Core/Src/iis2mdc.d ./Core/Src/iis2mdc.o ./Core/Src/iis2mdc.su ./Core/Src/iis2mdc_reg.cyclo ./Core/Src/iis2mdc_reg.d ./Core/Src/iis2mdc_reg.o ./Core/Src/iis2mdc_reg.su ./Core/Src/main.cyclo ./Core/Src/main.d ./Core/Src/main.o ./Core/Src/main.su ./Core/Src/memorymap.cyclo ./Core/Src/memorymap.d ./Core/Src/memorymap.o ./Core/Src/memorymap.su ./Core/Src/sdmmc.cyclo ./Core/Src/sdmmc.d ./Core/Src/sdmmc.o ./Core/Src/sdmmc.su ./Core/Src/sensor_read.cyclo ./Core/Src/sensor_read.d ./Core/Src/sensor_read.o ./Core/Src/sensor_read.su ./Core/Src/spi.cyclo ./Core/Src/spi.d ./Core/Src/spi.o ./Core/Src/spi.su ./Core/Src/stm32h7xx_hal_msp.cyclo ./Core/Src/stm32h7xx_hal_msp.d ./Core/Src/stm32h7xx_hal_msp.o ./Core/Src/stm32h7xx_hal_msp.su ./Core/Src/stm32h7xx_it.cyclo ./Core/Src/stm32h7xx_it.d ./Core/Src/stm32h7xx_it.o ./Core/Src/stm32h7xx_it.su ./Core/Src/syscalls.cyclo ./Core/Src/syscalls.d ./Core/Src/syscalls.o ./Core/Src/syscalls.su ./Core/Src/sysmem.cyclo ./Core/Src/sysmem.d ./Core/Src/sysmem.o ./Core/Src/sysmem.su ./Core/Src/tim.cyclo ./Core/Src/tim.d ./Core/Src/tim.o ./Core/Src/tim.su ./Core/Src/usart.cyclo ./Core/Src/usart.d ./Core/Src/usart.o ./Core/Src/usart.su ./Core/Src/usb_otg.cyclo ./Core/Src/usb_otg.d ./Core/Src/usb_otg.o ./Core/Src/usb_otg.su

.PHONY: clean-Core-2f-Src

