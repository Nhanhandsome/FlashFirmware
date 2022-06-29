/*
 * intelhex.c
 *
 *  Created on: Jun 29, 2022
 *      Author: Admin
 */


#include "intelhex.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
intel_hex* intel_hex_process(uint8_t* data, uint16_t length){
	intel_hex* result = (intel_hex*)malloc(length);
	if(data[0] == ':'){
		result->start_code = data[0];
		result->byte_count = data[1];
		result->addr[0] = data[2];
		result->addr[1] = data[3];
		result->record_type = data[4];
		result->data = malloc(result->byte_count);
		for(uint16_t i = 0;i<result->byte_count;i++){
			result->data[i] = data[5+i];
		}
		result->checksum = data[5+result->byte_count];
		if(result->checksum != intel_hex_checksum(data, length)){
			free(result);
			return NULL;
		}
	}
	return result;
}
uint8_t intel_hex_checksum(uint8_t* data, uint16_t length){
	uint8_t intel_crc = 0;
	for(uint16_t i = 1;i<length-1;i++){
		intel_crc = intel_crc + data[i];
	}
	intel_crc = !intel_crc + 1;
	return intel_crc;
}

