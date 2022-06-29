/*
 * ringbuffer.h
 *
 *  Created on: Jun 13, 2022
 *      Author: Admin
 */

#ifndef UTIL_RINGBUFFER_RINGBUFFER_H_
#define UTIL_RINGBUFFER_RINGBUFFER_H_

typedef struct RingBuffer_t Ringbuffer;

#include <stddef.h>
#include <stdbool.h>
#define MAX_RING_BUFFER 512
typedef struct {
	uint8_t buff[MAX_RING_BUFFER];
	unsigned int size;
	volatile unsigned int tail;
	volatile unsigned int head;
	volatile unsigned int count;
} Ring_Buffer_t;

void ring_init(Ring_Buffer_t *ringbuf, unsigned int size);
void ring_deinit(Ring_Buffer_t *ringbuff);
bool ring_push_head(Ring_Buffer_t *ring, uint8_t c);
bool ring_pop_tail(Ring_Buffer_t *ring, uint8_t* data);

#endif /* UTIL_RINGBUFFER_RINGBUFFER_H_ */
