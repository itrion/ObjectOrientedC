#include "Point.h"
#include "classes/PointClass.h"
#include "../Class.h"
#include <stdio.h>
#include <stdarg.h>

static void* Point_constructor(void* _self, va_list* parameters);
static void* Point_destructor(void* _self);
void Point_draw(void* _self);

static const struct Class _Point = {
	sizeof(struct Point),
	Point_constructor,
	Point_destructor,
	Point_draw
};

const void* Point = &_Point;

static void* Point_constructor(void* _self, va_list* parameters){
	struct Point* self = _self;
	self->x = va_arg(*parameters, int);
	self->y = va_arg(*parameters, int);
	return self;
}

static void* Point_destructor(void* _self){
	return _self;
}

void Point_draw(void* _self){
	struct Point* self = _self;
	printf("\".\" at %d, %d\n", self->x, self->y);
}

void move(void* _self, int dX, int dY){
	struct Point* self = _self;
	self->x += dX;
	self->y += dY;
}