#ifndef MEMORY_MANAGER_H
#define MEMORY_MANAGER_H
#include <stdbool.h>

void* new(const void* descriptor, ...);
bool equals(const void* objectA, const void* objectB);

#endif