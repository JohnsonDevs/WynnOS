#include "program.h"
#include <stdarg.h>

void syscall(int num, ...) {
    va_list args;
    va_start(args, num);

    switch (num) {
        case SYS_PRINT: {
            const char *str = va_arg(args, const char*);
            // Implement the print system call
            // For now, assume it's a simple direct write to video memory
            char *vidptr = (char*)0xb8000;
            unsigned int i = 0;
            while (*str != '\0') {
                vidptr[i++] = *str++;
                vidptr[i++] = 0x07; // light grey on black
            }
            break;
        }
        // Add other cases for different system calls
        default:
            // Unknown system call
            break;
    }

    va_end(args);
}

void print(const char *str) {
    syscall(SYS_PRINT, str);
}