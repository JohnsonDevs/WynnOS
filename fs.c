// fs.c
#include "fs.h"
#include "memory.h"
#include <string.h>

typedef struct {
    char name[128];
    void *data;
    size_t size;
} file_t;

file_t files[100];
size_t file_count = 0;

void fs_init() {
    file_count = 0;
}

void fs_create(const char *name, void *data, size_t size) {
    file_t *file = &files[file_count++];
    strcpy(file->name, name);
    file->data = malloc(size);
    memcpy(file->data, data, size);
    file->size = size;
}

file_t *fs_open(const char *name) {
    for (size_t i = 0; i < file_count; i++) {
        if (strcmp(files[i].name, name) == 0) {
            return &files[i];
        }
    }
    return NULL;
}