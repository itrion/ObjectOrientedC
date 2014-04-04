#include "UnitTest.h"
#include "ObjectManager.h"
#include <stdio.h>
#include <stdbool.h>

void printOkMessage();
void printErrorMessage(const void* expected, const void* actual);

void assertEquals(const void* expected, const void* actual){
	if(compare(expected, actual))
		printOkMessage();
	else
		printErrorMessage(expected, actual);
}

void printOkMessage(){
	puts("OK");
}
void printErrorMessage(const void* expected, const void* actual){
	printf("%s\n", "ERROR");
}