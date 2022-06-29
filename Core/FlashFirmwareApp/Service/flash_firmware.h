/*
 * flash_firmware.h
 *
 *  Created on: Jun 29, 2022
 *      Author: Admin
 */

#ifndef FLASHFIRMWAREAPP_SERVICE_FLASH_FIRMWARE_H_
#define FLASHFIRMWAREAPP_SERVICE_FLASH_FIRMWARE_H_

#include "intelhex.h"
#include "utils.h"
#include "flash.h"


uint8_t check_new_firmware();
void flash_firmware();
void revert_firmware();


#endif /* FLASHFIRMWAREAPP_SERVICE_FLASH_FIRMWARE_H_ */
