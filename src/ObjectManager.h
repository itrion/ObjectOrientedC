#ifndef MEMORY_MANAGER_H
#define MEMORY_MANAGER_H

void* new(const void* clazz, ...);
void delete(const void* object);
int compare(const void* objectA, const void* objectB);

#endif