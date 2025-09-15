#include "heap.h"

void kernel_init() {
	heap_base = 0x100000;
}

int kalloc(int bytes) {
	unsigned int new_object_adress = heap_base;
	heap_base += bytes;
	return new_object_adress;
}
