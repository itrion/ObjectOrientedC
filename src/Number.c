#include "Number.h"
#include "Class.h"
#include <stdarg.h>

static void* Number_constructor(const void* _self, va_list* parameters);
static void* Number_destructor(const void* _self);

struct Number{
	const void* class;
	int value;
};

static const struct Class _Number = {
	sizeof(struct Number),
	Number_constructor,
	Number_destructor
};

const void* Number = &_Number;

int getValue(void* _self){
	struct Number* self = _self;
	if (self->value)
		return self->value;
	return 0;
}

static void* Number_constructor(const void* _self, va_list* parameters){
	struct Number* self = _self;
	self->value = va_arg(*parameters, int);
	return self;
}

static void* Number_destructor(const void* _self){
	return 0;
}
