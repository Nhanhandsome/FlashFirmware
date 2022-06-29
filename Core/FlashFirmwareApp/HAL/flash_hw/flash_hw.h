/*
 * flash_hw.h
 *
 *  Created on: Jun 29, 2022
 *      Author: Admin
 */

#ifndef FLASHFIRMWAREAPP_HAL_FLASH_HW_FLASH_HW_H_
#define FLASHFIRMWAREAPP_HAL_FLASH_HW_FLASH_HW_H_

#include "stm32f0xx.h"
#include "stm32f0xx_hal_flash.h"


uint8_t flash_hw_erase();
uint32_t flash_hw_read(uint32_t addr);
void flash_hw_write(uint32_t addr,uint32_t data);
void flash_hw_unlock(void);
void flash_hw_lock(void);



#endif /* FLASHFIRMWAREAPP_HAL_FLASH_HW_FLASH_HW_H_ */
