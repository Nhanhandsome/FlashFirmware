/*
 * flash_hw.c
 *
 *  Created on: Jun 29, 2022
 *      Author: Admin
 */




#include "flash_hw.h"

#define PAGE_ADDR_BEGIN (uint32_t)0x800c000

uint8_t flash_hw_erase(){
	FLASH_EraseInitTypeDef flash_erase;
	flash_erase.PageAddress = PAGE_ADDR_BEGIN;
	flash_erase.NbPages = 5;
	flash_erase.TypeErase =  FLASH_TYPEERASE_PAGES;
	uint32_t page_error;
	if(HAL_FLASHEx_Erase(&flash_erase,&page_error) == HAL_OK){
		return 1;
	}
	return 0;
}
uint32_t flash_hw_read(uint32_t addr){
	return *(__IO uint32_t *)(addr);
}
void flash_hw_write(uint32_t addr,uint32_t data){
	HAL_FLASH_Program(FLASH_TYPEPROGRAM_WORD,addr, data);
}
void flash_hw_unlock(void){
	HAL_FLASH_Unlock();
}
void flash_hw_lock(void){
	HAL_FLASH_Lock();
}
