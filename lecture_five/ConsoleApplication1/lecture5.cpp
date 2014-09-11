#include <iostream>

int main(void) {


	// This array is allocated on the STACK
	int intArray_size = 2;
	int intArray[2];
	// This array is allocated on the HEAP
	int doubleArray_size = 3;
	double* doubleArray = new double[3];

	intArray[0] = 3;
	intArray[1] = 49;
	doubleArray[0] = 3.14;
	doubleArray[1] = -9.8;
	doubleArray[2] = 1.21;


	for (int i=0; i<=intArray_size-1; i++) {
		std::cout << intArray[i] << ", " << &intArray[i] << std::endl;
	}
	for (int i=0; i<=doubleArray_size-1; i++) {
		std::cout << doubleArray[i] << ", " << &doubleArray[i] << std::endl;
	}



	char* myString = "Hello, world!"; // Fun fact: this string has SEVEN characters and a length of SEVEN.
							   // This is bc there is a \0 that signifies the end of the string.
	                           // that's apparently how we do in C++


	int i=-1;
	while (myString[++i] != '\0') { // ++i is "increase then return" whereas i++ is "return then increase"
	                                // that's why I started at int i=-1;
		std::cout << myString[i] << ", " << (int)myString[i] << std::endl;
	}


	// Here's a terrible thing you can do.

	for (int i=0; i<10; i++) {
		std::cout << ((int*)(myString+1)) << std::endl;

	}



	return 0;
}

