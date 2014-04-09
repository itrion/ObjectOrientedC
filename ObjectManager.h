#ifndef OBJECT_MANAGER_H
#define OBJECT_MANAGER_H

void* new(const void* objectClass, ...);
void delete(void* object);
void draw(const void* self);

#endif