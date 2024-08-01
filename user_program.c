#include "syscall.h"

int main() {
    syscall(SYS_PRINT, "Hello from user program!\n");
    return 0;
}