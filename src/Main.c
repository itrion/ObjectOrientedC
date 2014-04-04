#include "Calculator.h"
#include "UnitTest.h"

int main(int argc, char const *argv[]){
	assertEquals(2, sum(1, 1));
	assertEquals(0.2, sum(0.1, 0.1));
	return 0;
}