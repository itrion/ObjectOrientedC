#ifndef CLASS_H
#define CLASS_H
#include <stdarg.h>
#include <stdlib.h>

struct Class{
	size_t size;
	void* (*constructor)(const void* self, va_list* parameters);
	void* (*destructor)(const void* self);
	void (*draw)(const void* self);
};

#endif