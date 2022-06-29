/*
 * flash_firmware.h
 *
 *  Created on: Jun 29, 2022
 *      Author: Admin
 */

#ifndef FLASHFIRMWAREAPP_APP_FLASH_FIRMWARE_H_
#define FLASHFIRMWAREAPP_APP_FLASH_FIRMWARE_H_

#include "intelhex.h"
#include "utils.h"
#include "flash.h"


typedef enum{
	bootloader_firmware = 0,
	flash_firmware,
	app_firmware,
	factory_firmware
}firmware_type_t;

uint8_t check_new_firmware();
void flash_firmware_process();
void checkout_firmware(firmware_type_t firmware);

#endif /* FLASHFIRMWAREAPP_APP_FLASH_FIRMWARE_H_ */
