################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/FlashFirmwareApp/App/flash_firmware.c 

OBJS += \
./Core/FlashFirmwareApp/App/flash_firmware.o 

C_DEPS += \
./Core/FlashFirmwareApp/App/flash_firmware.d 


# Each subdirectory must supply rules for building sources it contributes
Core/FlashFirmwareApp/App/%.o Core/FlashFirmwareApp/App/%.su: ../Core/FlashFirmwareApp/App/%.c Core/FlashFirmwareApp/App/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F051x8 -c -I../Core/Inc -I../Drivers/STM32F0xx_HAL_Driver/Inc -I../Drivers/STM32F0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F0xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/Admin/STM32CubeIDE/workspace_1.9.0/FlashFirmware/Core/FlashFirmwareApp/Service" -I"C:/Users/Admin/STM32CubeIDE/workspace_1.9.0/FlashFirmware/Core/FlashFirmwareApp/HAL" -I"C:/Users/Admin/STM32CubeIDE/workspace_1.9.0/FlashFirmware/Core/FlashFirmwareApp/Component" -I"C:/Users/Admin/STM32CubeIDE/workspace_1.9.0/FlashFirmware/Core/FlashFirmwareApp/App" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-FlashFirmwareApp-2f-App

clean-Core-2f-FlashFirmwareApp-2f-App:
	-$(RM) ./Core/FlashFirmwareApp/App/flash_firmware.d ./Core/FlashFirmwareApp/App/flash_firmware.o ./Core/FlashFirmwareApp/App/flash_firmware.su

.PHONY: clean-Core-2f-FlashFirmwareApp-2f-App

