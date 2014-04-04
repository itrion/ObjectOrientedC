#include "ObjectManager.h"
#include "Number.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
	void* one = new(Number, 1);
	void* two = new(Number, 2);
	if(!(1 == getValue(one)))
		printf("ERROR 1 != %d\n", getValue(one));
	if(!(2 == getValue(two)))
		printf("ERROR 2 != %d\n", getValue(two));
	printf("%s\n", "Done");
	delete(one);
	delete(two);
	return 0;
}