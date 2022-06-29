/*
 * ringbuffer.c
 *
 *  Created on: Jun 13, 2022
 *      Author: Admin
 */

#include "ringbuffer.h"

void ring_init(Ring_Buffer_t *ringbuf, unsigned int size) {
	ringbuf->count = 0;
	ringbuf->head = 0;
	ringbuf->tail = 0;
	ringbuf->size = size;
}

void ring_deinit(Ring_Buffer_t *ringbuff) {
	ringbuff->head = ringbuff->tail = ringbuff->count = ringbuff->size = 0;
}
bool ring_push_head(Ring_Buffer_t *ring, uint8_t c) {
	unsigned int next = (unsigned int) (ring->head + 1) % ring->size;
	if (next != ring->tail) {
		ring->buff[ring->head] = c;
		ring->head = next;
		ring->count += 1;
		return true;
	}
	return false;
}

bool ring_pop_tail(Ring_Buffer_t *ring, uint8_t* data) {
	if (ring->head == ring->tail) {
		ring->count = 0;
		return false;        // quit with an error
	} else {
		data[0] = ring->buff[ring->tail];
		ring->tail = (unsigned int) (ring->tail + 1) % ring->size;
		ring->count -= 1;
		return true;
	}
	return false;
}
