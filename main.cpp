/**
 * prime(n), defix, sumSlice, and square methods written by Sam Bowdler
 * 2 September 2014
 * Tester methods written by Dr. Bo Brinkman
 */

#include <iostream>

/** This boolean method prime(int a) tests to see if a is prime.
  *
  * First, the method checks if n is 2 or 5, returning true if so. This is to avoid confusion in the loop.
  *
  * Next, the method checks to see if n is even, negative, or 1. If so, it is not prime and the method returns false.
  *
  * Finally, a for loop iterates int i from 2 to one less than half of n by two to see if n is divisible by any number.
  * The reason for this range is that we already know it's not even, so any even number is not included (hence
  * starting with 3 and stepping by two), and once we get to n/2, we know n is not divisible by n/2 as it is odd, and
  * dividing n by any value more than n/2 would yield a quotient of between 1 and 2.
  *
  * So now that we know it's not 0 or 1, not even, and not wholly divisible by any number, it must be prime so we return true.
**/
bool prime(int n){
	if (n == 2 || n == 5)
		return true;
	if (n % 2 == 0 || n < 2 || n == 1)
		return false;
	for (int i = 3; i < (n / 2); i += 2)
		if (n % i == 0)
			return false;
	return true;
}
void testPrime(){
	int nums[] = {-5, -1, 0, 1, 2 ,3, 4, 5, 6};
	bool results[] = {false, false, false, false, true, true, false, true, false};
	for(int i = 0; i < 9; i++){
		if(prime(nums[i]) != results[i]){
			std::string res = prime(nums[i]) ? "true" : "false";
			std::cout << "testPrime: ERROR: On " << nums[i] << " you returned " << res.c_str() << std::endl;
			return;
		}
	}

	std::cout << "testPrime: SUCCESS" << std::endl;
}

/**
  * This defix(std::string txt) method takes in string object txt and returns a string object without any prefix.
  *
  * This process is done by finding the location of any dash ('-') in txt and then returning the same string without the
  * dash and any characters before it (which would be the prefix).
**/
std::string defix(std::string txt) {
	std::size_t loc = txt.find('-', 0);
	return txt.substr(loc + 1, txt.size() - loc);
}
void testDefix(){
	std::string inputs[] = {"re-run","pre--text","-ooh","moo","no-no-no", "foo-"};
	std::string outputs[] = {"run","-text","ooh","moo","no-no", ""};

	for(int i=0;i<5;i++){
		if(outputs[i].compare(defix(inputs[i])) != 0){
			std::cout << "testDefix: ERROR: Expected " << outputs[i].c_str() << " but got " << defix(inputs[i]).c_str() << std::endl;
			return;
		}
	}

	std::cout << "testDefix: SUCCESS" << std::endl;
}

/**
  * This sumSlice method takes in an int array and two ints, named ray, s, and len, respectively.
  *
  * This method outputs the sum of len ints in ray starting at index s. So it starts at index s and adds all ints from
  * ray[s] to ray[s+len-1] (inclusive).
  *
  * If s or len are 0, sumSlice returns 0. If not, return int sum, which is made to sum up all requested ints.
**/
int sumSlice(int ray[], int s, int len){
	if (s == 0 || len == 0)
		return 0;
	int sum = 0;
	for (int i = s; i < s + len; i++)
		sum += ray[i];
	return sum;
}
void testSumSlice(){
	int arrays[5][4] = {{1,  2, 3,  4},
	{1,  2, 3,  4},
	{1, -1, 1, -1},
	{1,  2, 3,  4},
	{1, -1, 1, -1}};
	int s[] = {1, 1, 0, 1, 1};
	int len[] = {1, 3, 4, 0, 3};
	int outputs[] = {2, 9, 0, 0, -1};

	for(int i=0; i<5; i++){
		if(sumSlice(arrays[i],s[i],len[i]) != outputs[i]){
			std::cout << "testSumSlice: ERROR: on index i=" << i << " expected " << outputs[i] << " but got " << sumSlice(arrays[i],s[i],len[i]) << std::endl;
			return;
		}
	}
	std::cout << "testSumSlice: SUCCESS" << std::endl;
}

/**
  * The square method receives int n and draws a neat little picture with it.
  *
  * If n is 0 or negative, do nothing and return.
  * If n is 1, print one '+'.
  * If n is 2, print a two-by-two square of '+' signs.
  *
  * If n is 3 or greater, this method prints out a square consisting of '+', '-', 'o' and '|' in
  * the following format: the first and last rows start and end with a '+', with n-2 '-' in between
  * each '+'. Rows in between first and last begin and end with a '|', with n-2 'o' in between.
  * Examples: square(1)   square(2)   square(3)   square(4)   square(5)    square(6)
  *				 +			 ++			+-+			+--+		+---+		+----+
  *							 ++			|o|			|oo|		|ooo|		|oooo|
  *										+-+			|oo|		|ooo|		|oooo|
  *													+--+		|ooo|		|oooo|
  *																+---+		|oooo|
  *																			+----+
**/
void square(int n){
	if (n <= 0)
		return;
	switch(n){
	case 1:
		std::cout << "+" << std::endl;
		return;
	case 2:
		std::cout << "++" << std::endl << "++" << std::endl;
		return;
	case 3:
	default:
		std::cout << "+";
		for(int a = 0; a < n - 2; a++)
			std::cout << "-";
		std::cout << "+" << std::endl;

		for(int b = 0; b < n - 2; b++) {
			std::cout << "|";
			for(int c = 0; c < n - 2; c++)
				std::cout << "o";
			std::cout << "|" << std::endl;
		}

		std::cout << "+";
		for(int a = 0; a < n - 2; a++)
			std::cout << "-";
		std::cout << "+" << std::endl;
		return;
	}
}

/**
  * This method builds on prime() in a way, or at least it utilizes it. The listPrimes method takes
  * in an int n, which determines how many prime numbers we will be returning in the list. A while
  * loop gathers all prime numbers by calling prime() on each number starting at 2 to check if that
  * number is prime. If it is, add it to the list. Once the array contains n prime numbers, return it.
**/
int* listPrimes(int n){
	int* ray = new int[n];
	int i = 2;
	int indx = 0;
	while(indx < n - 1){
		if(prime(i)){
			ray[indx] = i;
			indx++;
		}
		i++;
	}
	return ray;
}
void testListPrimes(){
	int some_primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
	for(int i=1;i<10;i++){
		int* ret = listPrimes(i);
		for(int j=1;j<i;j++){
			if(ret[j] != some_primes[j]){
				std::cout << "testListPrimes: ERROR: Expected " << some_primes[j] << 
					" but got " << ret[j] << std::endl;
				delete[] ret;
				return;
			}
		}
		delete[] ret;
	}

	std::cout << "testListPrimes: SUCCESS" << std::endl;
}

int main(){
	testPrime();
	testDefix();
	testSumSlice();
	testListPrimes();

	return 0;
}