/*
 * flash.c
 *
 *  Created on: Jun 29, 2022
 *      Author: Admin
 */




#include "flash.h"


uint8_t flash_erase(){
	return flash_hw_erase();
}
uint32_t flash_read(uint32_t addr){
	return flash_hw_read(addr);
}
void flash_write(uint32_t addr,uint32_t data){
	flash_hw_write(addr, data);
}
void flash_unlock(void){
	flash_hw_unlock();
}
void flash_lock(void){
	flash_hw_lock();
}
void jump_app(uint32_t addr){
	jump_hw_app(addr);
}
