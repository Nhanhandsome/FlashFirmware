/*
 * bsp_flash.h
 *
 *  Created on: Jun 29, 2022
 *      Author: Admin
 */

#ifndef FLASHFIRMWAREAPP_HAL_BSP_FLASH_H_
#define FLASHFIRMWAREAPP_HAL_BSP_FLASH_H_

#include "stm32f0xx.h"

__weak uint8_t flash_hw_erase();
__weak uint32_t flash_hw_read(uint32_t addr);
__weak void flash_hw_write(uint32_t addr,uint32_t data);
__weak void flash_hw_unlock(void);
__weak void flash_hw_lock(void);
__weak void jump_hw_app(uint32_t addr);
#endif /* FLASHFIRMWAREAPP_HAL_BSP_FLASH_H_ */
