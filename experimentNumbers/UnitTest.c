#include "UnitTest.h"
#include <stdio.h>
void printOk();
void printError();

void assertEquals(const void* expected, const void* actual){
	if(expected == actual)
		printOk();
	else
		printError();
}

void printOk(){
	printf("OK\n");
}
void printError(){
	printf("ERROR\n");
}
