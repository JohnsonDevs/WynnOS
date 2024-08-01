#ifndef PROGRAM_H
#define PROGRAM_H

// Define system call numbers
enum syscall_number {
    SYS_PRINT = 0,
    // Add other system calls here
};

// Prototype for system call function
void syscall(int num, ...);

// Function to print a string (example system call)
void print(const char *str);

#endif