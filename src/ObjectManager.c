#include "ObjectManager.h"
#include "stdlib.h"

void* new(const void* type, ...){
	return malloc((const size_t) type);
}

bool equals(const void* objectA, const void* objectB){
	return false;
}