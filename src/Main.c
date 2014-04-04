#include "Calculator.h"
#include "UnitTest.h"
#include "ObjectManager.h"
#include "Number.h"

const void* Number;

int main(int argc, char const *argv[]){
	void* number = new(Number, 3);
	assertEquals(number, sum(1, 1));
	return 0;
}