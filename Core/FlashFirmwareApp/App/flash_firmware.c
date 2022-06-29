/*
 * flash_firmware.c
 *
 *  Created on: Jun 29, 2022
 *      Author: Admin
 */

#include <config.h>
#include <flash_firmware.h>
#include "ringbuffer.h"

Ring_Buffer_t firmware_buffer;

uint16_t firmware_size = 1024;

uint8_t check_new_firmware() {
	return 0;
}
void flash_firmware_process() {

	if (check_new_firmware() > 0) {
		ring_init(&firmware_buffer, MAX_RING_BUFFER);
		word_to_byte_t work;
		uint16_t p_addr = 0;
		while (p_addr < firmware_size) {
			work.word = flash_read(NEW_FIRMWARE_ADDR+p_addr);
			for (uint16_t i = 0; i < 4; i++)
				ring_push_head(&firmware_buffer, work.byte[i]);
			p_addr = p_addr + 4;
		}
		checkout_firmware(app_firmware);
	} else {
		checkout_firmware(bootloader_firmware);
	}
}
void checkout_firmware(firmware_type_t firmware) {
	switch (firmware) {
	case bootloader_firmware:
		jump_app(BOOTLOADER_ADDR);
		break;
	case flash_firmware:
		jump_app(FLASH_FIRMWARE_ADDR);
		break;
	case app_firmware:
		jump_app(APP_FIRMWARE_ADDR);
		break;
	case factory_firmware:
		jump_app(FACTORY_FIRMWARE_ADDR);
		break;
	default:
		break;
	}
}

