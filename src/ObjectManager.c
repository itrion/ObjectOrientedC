#include "ObjectManager.h"
#include <stdlib.h>
#include <stdarg.h>
#include "assert.h"
#include "Class.h"

void* new(const void* objectClass, ...){
	const struct Class* class = objectClass;
	void* object = malloc(class->size);
	assert(object);
	*(const struct Class**)object = class;
	va_list ap;
	va_start(ap, objectClass);
	object = class->constructor(object, &ap);
	va_end(ap);
	return object;
}

void delete(const void* object){
	const struct Class** class = object;
	object = (*class)->destructor(object);
	free((void*) object);
}

int compare(const void* objectA, const void* objectB){
	const struct Class* const* class = objectA;
	return (*class)->compare(objectA, objectB);
}