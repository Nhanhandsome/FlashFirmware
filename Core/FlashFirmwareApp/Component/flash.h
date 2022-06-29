/*
 * flash.h
 *
 *  Created on: Jun 29, 2022
 *      Author: Admin
 */

#ifndef FLASHFIRMWAREAPP_COMPONENT_FLASH_H_
#define FLASHFIRMWAREAPP_COMPONENT_FLASH_H_

#include "bsp_flash.h"


uint8_t flash_erase();
uint32_t flash_read(uint32_t addr);
void flash_write(uint32_t addr,uint32_t data);
void flash_unlock(void);
void flash_lock(void);
void jump_app(uint32_t addr);



#endif /* FLASHFIRMWAREAPP_COMPONENT_FLASH_H_ */
