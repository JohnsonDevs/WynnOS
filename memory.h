#ifndef MEMORY_H
#define MEMORY_H

#include <stddef.h>  // For size_t

// Function to allocate memory
void* malloc(size_t size);

// Function to free memory (not implemented in the simple allocator)
void free(void* ptr);

#endif // MEMORY_H