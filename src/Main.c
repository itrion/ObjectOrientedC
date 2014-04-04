#include "ObjectManager.h"
#include "Number.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
	void* one = new(Number, 1);
	void* two = new(Number, 2);

	assertEquals(1, getValue(one));
	assertEquals(2, getValue(two));

	printf("%s\n", "Done");
	delete(one);
	delete(two);
	return 0;
}