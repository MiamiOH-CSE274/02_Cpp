/**
 *	Originality: All code in this program is original, with small amounts of collaboration with Sam Bowdler,
 *	and using Stack Overflow to	learn proper syntax on declaring, initializing, and using arrays in c++.
 *	-Kyle Richardson
 */

#include <iostream>
#include <string>

/*
*	Very basic primality test, takes an integer n and runs through every single value from 2 to n-1 to see if it
*	has a remainder of 0 (is divisible by that number), and if it does, return false. If it runs through every value 
*	to n-1 and is not divisible by any of them it is prime, and returns true.
*/
bool prime(int n) {
	if (n < 2)
	{
		return false;
	}

	for (int i = 2; i < n; i++) {
		if ((n % i) == 0)
			return false;
	}

	return true;
}

//This is a basic tester for the "prime" function
void testPrime(){
  int nums[] = {-5, -1, 0, 1, 2 ,3, 4, 5, 6 };
  bool results[] = {false, false, false, false, true, true, false, true, false};
  for(int i=0; i<9;i++){
    if(prime(nums[i]) != results[i]){
      std::string res = prime(nums[i]) ? "true" : "false";
      std::cout << "testPrime: ERROR: On " << nums[i] << " you returned " << res.c_str() << std::endl;
      return;
    }
  }
  
  std::cout << "testPrime: SUCCESS" << std::endl;
}

/*
*	Takes a string and finds the first occurence of the character '-', and returns a string that consists of whatever follows the '-'.
*	If there is no '-' it returns the entire string.
*/

std::string defix(std::string s) {
	return s.substr(s.find_first_of('-') + 1);

}
//This is a basic tester for "defix"

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

/* 
*	Function takes an array, and returns the sum of the amount of numbers specified by len, starting at element s in the array.
*	If s or len is less than 0 the function returns 0.
*/

int sumSlice(int r[], int s, int len) {
	if (s < 0 || len < 0)
		return 0;
	int sum = 0;
	for (int i = s; i < s + len ; i++) {
		sum += r[i];
	}
	return sum;
}
//This is a basic tester for "sumSlice"

void testSumSlice(){
  int arrays[5][4] = { {1, 2, 3, 4},
		      {1, 2, 3, 4},
		      {1, -1, 1, -1},
		      {1, 2, 3, 4},
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

//4. Create a function called "square" which takes an int, n, as input,
//   but returns no output (so return type will be "void")
//   The function should use the std::cout object to print a square to the
//   screen that is n-by-n, with a border made of -, + and |, and the inside
//   filled with o
//   If n is <= 0, do nothing.
//
//Examples:
// square(5) should print:
// +---+
// |ooo|
// |ooo|
// |ooo|
// +---+
// square(2) should print:
// ++
// ++
// square(1) should print:
// +
// square(3) should print:
// +-+
// |o|
// +-+
//
//Note/warning: I did not write an automated tester for this one. Please
// test it however you can, to try to make sure it does the right thing for
// all possible inputs.

//TODO: Declare and implement "square" function here

/*
*	Function that takes a number n and tests every number up until n for primality, returning an array 
*	consisting of all of the prime numbers up to the number n.
*/

int* listPrimes(int n) {
	int* primeArray = new int[n];
	int i = 2,j = 0;
	while(j < n) {
		if (prime(i)) {
			primeArray[j] = i;
			j++;
		}
		i++;
	}
	return primeArray;
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
  system("pause");
  
   return 0;
}
