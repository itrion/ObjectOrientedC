#ifndef CLASS_H
#define CLASS_H
#include <stdlib.h>
#include <stdarg.h>

struct Class{
	size_t size;
	void* (*constructor)(void* self, va_list* app);
	void* (*destructor)(void* self);
	int (*compare)(const void* self, const void* object);
};
void* clone(const void* self);
int compare(const void* self, const void* object);
#endif