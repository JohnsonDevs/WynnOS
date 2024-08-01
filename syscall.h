#ifndef SYSCALL_H
#define SYSCALL_H

enum syscall_number {
    SYS_PRINT = 0,
};

void syscall(int num, ...);

#endif