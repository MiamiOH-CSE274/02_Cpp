#include <iostream>

int pain(void) {

	int x = 15; // 0000000000001111
	std::cout << x%10 << std::endl;

    std::cout << (x>>1) << std::endl;
	// >>1 = the right shift operator, moves everything a bit to the right.  ie:  3rd bit becomes the 4th bit.
	std::cout << (x<<1) << std::endl; // yeah same but left, notice how we use the same operator for 2 different things? Fuckin C 
	                                  // SO DON'T FORGET THOSE PARENTHESES, NERD

	// idk why this isn't building but I'm gonna take the notes anyways

	int z = 1;
	int y = x & z; // 1111 & 0001
	int q = x | z;
	int r = ~x;







	return 0;
}