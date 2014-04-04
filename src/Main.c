#include "Calculator.h"
#include "UnitTest.h"
#include "ObjectManager.h"
#include "Number.h"

int main(int argc, char const *argv[]){
	void* expectedNumber = new(Number, 3);
	void* resultNumber = sum(1, 1);
	assertEquals(expectedNumber, resultNumber);
	delete(expectedNumber);
	delete(resultNumber);
	return 0;
}