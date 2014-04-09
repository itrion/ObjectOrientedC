#include "Circle.h"
#include "Point.h"
#include "classes/CircleClass.h"
#include "../Class.h"
#include <stdio.h>

static void* Circle_constructor(void* _self, va_list* parameters);
static void* Circle_destructor(void* _self);
static void Circle_draw(const void* _self);

static const struct Class _Circle = {
	sizeof(struct Circle),
	Circle_constructor,
	Circle_destructor,
	Circle_draw
};

const void* Circle = &_Circle;

static void* Circle_constructor(void* _self, va_list* parameters){
	struct Circle* self = _self;
	((const struct Class*)Point)->constructor(_self, parameters);
	self->radius = va_arg(*parameters, int);
	return self;
}

static void* Circle_destructor(void* _self){
	return _self;
}


static void Circle_draw(const void* _self){
	const struct Circle* self = _self;
	printf("circle at %d,%d radius %d\n", self->_.x, self->_.y, self->radius);
}
