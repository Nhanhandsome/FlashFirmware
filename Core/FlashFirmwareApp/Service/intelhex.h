/*
 * intelhex.h
 *
 *  Created on: Jun 29, 2022
 *      Author: Admin
 */

#ifndef FLASHFIRMWAREAPP_SERVICE_INTELHEX_H_
#define FLASHFIRMWAREAPP_SERVICE_INTELHEX_H_

#include "stdio.h"
#include "stdlib.h"
#include "math.h"


typedef struct intel_hex_t intel_hex;

struct intel_hex_t{
	uint8_t start_code; // 1 byte
	uint8_t byte_count;// 1 byte
	uint8_t addr[2]; //2 byte
	uint8_t record_type; //1 byte
	uint8_t *data; // (1 * byte_count) byte
	uint8_t checksum; // 1 byte
};

typedef enum{
	Data_rec = 0x00,
	EndFile_rec = 0x01,
	Extended_Segment_Address_rec = 0x02, // mcu 32bit not user
 	Start_Segment_Address_rec = 0x03, // mcu 32bit not user
	Extended_Linear_Address_rec = 0x04,
	Start_Linear_Address_rec = 0x05
}Record_type_t;

intel_hex* intel_hex_process(uint8_t* data, uint16_t length);
uint8_t intel_hex_checksum(uint8_t* data, uint16_t length);

#endif /* FLASHFIRMWAREAPP_SERVICE_INTELHEX_H_ */
