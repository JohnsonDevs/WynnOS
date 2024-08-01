#include "memory.h"

static unsigned char *heap = (unsigned char*)0x1000000;
static unsigned char *heap_end = heap;

void *malloc(size_t size) {
    void *ptr = heap_end;
    heap_end += size;
    return ptr;
}

void free(void *ptr) {
    // No-op for now
}