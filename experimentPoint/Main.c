#include "Point.h"
#include "Circle.h"
#include "../ObjectManager.h"
#define MAX_POINTS 3

void testPoint();
void testCircle();

int main(int argc, char const *argv[])
{
	testPoint();
	testCircle();
	return 0;
}

void testPoint(){
	void* point = new(Point, 1, 2);
	draw(point);
	move(point, 10, 20);
	draw(point);
	delete(point);
}

void testCircle(){
	void* cicle = new(Circle, 1, 2, 10);
	draw(cicle);
	move(cicle, 10, 20);
	draw(cicle);
	delete(cicle);
}