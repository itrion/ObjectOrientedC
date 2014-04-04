#ifndef OBJECT_MANAGER_H
#define OBJECT_MANAGER_H

void* new(const void* objectClass, ...);
void delete(const void* object);

#endif