#include "Number.h"
#include "Class.h"

struct Number{
	const void* class;
	int value;
};

static const struct Class _Number = {
	sizeof(struct Number),
	String_constructor,
	String_destructor,
	String_compare
}

const void* Number = &_Number;

static void* Number_constructor(void* _self, va_list* app){
	struct Number* self = _self;
	self->value = va_arg(*app, int);
	return self;
}

static void* Number_destructor(void* _self){
	struct Number* self = _self;
	self->value = 0;
	return self;
}

static int Number_compare(const void* _self, const void* object){
	struct Number* self = _self;
	struct Number* otherObject = object;
	if(! self || otherObject->class != Number) return 1;
	if(self->value == otherObject->value) return 0;
	if(self->value > otherObject->value) return 1;
	else return -1;
}