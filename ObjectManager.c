#include "ObjectManager.h"
#include "Class.h"
#include <stdio.h>
#include <assert.h>

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

void delete(void* object){
	const struct Class** class = object;
	if(object && *class && (*class)->destructor)
		object = (*class)->destructor(object);
	free(object);
}

void draw(const void* object){
	const struct Class** class = object;
	assert(object && *class && (*class)->draw);
	(*class)->draw(object);
}
