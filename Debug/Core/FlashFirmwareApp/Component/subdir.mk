################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/FlashFirmwareApp/Component/flash.c 

OBJS += \
./Core/FlashFirmwareApp/Component/flash.o 

C_DEPS += \
./Core/FlashFirmwareApp/Component/flash.d 


# Each subdirectory must supply rules for building sources it contributes
Core/FlashFirmwareApp/Component/%.o Core/FlashFirmwareApp/Component/%.su: ../Core/FlashFirmwareApp/Component/%.c Core/FlashFirmwareApp/Component/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F051x8 -c -I../Core/Inc -I../Drivers/STM32F0xx_HAL_Driver/Inc -I../Drivers/STM32F0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F0xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/Admin/STM32CubeIDE/workspace_1.9.0/FlashFirmware/Core/FlashFirmwareApp/Service" -I"C:/Users/Admin/STM32CubeIDE/workspace_1.9.0/FlashFirmware/Core/FlashFirmwareApp/HAL" -I"C:/Users/Admin/STM32CubeIDE/workspace_1.9.0/FlashFirmware/Core/FlashFirmwareApp/Component" -I"C:/Users/Admin/STM32CubeIDE/workspace_1.9.0/FlashFirmware/Core/FlashFirmwareApp/App" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-FlashFirmwareApp-2f-Component

clean-Core-2f-FlashFirmwareApp-2f-Component:
	-$(RM) ./Core/FlashFirmwareApp/Component/flash.d ./Core/FlashFirmwareApp/Component/flash.o ./Core/FlashFirmwareApp/Component/flash.su

.PHONY: clean-Core-2f-FlashFirmwareApp-2f-Component

