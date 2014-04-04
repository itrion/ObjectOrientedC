#include "UnitTest.h"
#include <stdio.h>

void printOkMessage();
void printErrorMessage(int expected, int actual);

void assertEquals(int expected, int actual){
	if(expected == actual)
		printOkMessage();
	else
		printErrorMessage(expected, actual);
}

void printOkMessage(){
	puts("OK");
}
void printErrorMessage(int expected, int actual){
	printf("%s\n", "ERROR:");
	printf("%s\n", "Expected: ");
	printf("%d\n", expected);
	printf("%s\n", "Actual:");
	printf("%d\n", actual);
}
