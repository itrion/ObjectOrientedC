#include "ObjectManager.h"
#include <stdio.h>
#include <assert.h>
#include "Class.h"

void* new(const void* objectClass, ...){
	const struct Class* class = objectClass;
	void* object = malloc(class->size);
	assert(object);
	*(const struct Class**)object = class;
	if(class->constructor){
		va_list parameters;
		va_start(parameters, objectClass);
		object = class->constructor(object, &parameters);
		va_end(parameters);
	}
	return object;
}

void delete(const void* object){
	const struct Class** class = object;
	if(object && *class && (*class)->destructor)
		object = (*class)->destructor(object);
	free(object);
}
