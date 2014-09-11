/**
 * I worked on my own for this assignment.  I used www.cplusplus.com
 * as a reference and looked at some of their example code to understand
 * how to declare arrays and use functions in the standard template library.
 * I also looked at StackOverflow for help with strings but did not use any code.
 * Brandon Wilson tried to help me figure out how to stop the project from
 * crashing (without looking at my code) but we could not figure it out. 
 *
 * Caroline Danzi
 * Assignment 2
 * September 9, 2014
 */

#include <iostream>
#include <string>

//1. Create a function, named "prime", which tests an
// integer, n, to see if it is prime. It should return a bool. 
// 
// You don't have to do
// anything tricky. Just try modding (%) it by every number
// between 2 and n-1. If it never gives 0, then it is prime.
// Special case: Only numbers 2 or greater can be prime.
// Example inputs:
// prime(1) --> false
// prime(-7) --> false
// prime(2) --> true
// prime(4) --> false
//
//Hints: This exercise uses for loops, if statements,
// and the % operator.

// The prime function - returns true if a number is prime, false otherwise
bool prime(int n){
	// Numbers less than two are not prime
	if (n < 2){
		return false;
	}
	// If a number mod another number gives zero,
	// then it is divisible by that number and 
	// is therefore not prime
	for (int i = 2; i < n; i++){
		if (n % i == 0){
			return false;
		}
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

//2. Create a function, name "defix", which takes in a string and
//   returns a string. If the string starts with a pre-fix attached
//   by a dash, strip off the prefix and the dash. Otherwise, return
//   the string unchanged. If there is more than one prefix, remove only
//   the first one. Note that the input and output should both be type 
//   std::string
//
//Example inputs:
// defix("re-run") --> "run"
// defix("pre--text") --> "-text"
// defix("-ooh") --> "ooh"
// defix("moo") --> "moo"
//
//Hints: Check out the string API documentation at http://www.cplusplus.com/reference/string/string/
// The find functions and substr function will be easiest.

std::string defix(std::string word){
	// Find where the first dash is in the string
	int dashLocation = word.find("-", 0);
	// std::string::npos is a constant in the string class that is returned
	// when the find function does not locate the character
	// of interest.  (std::string::npos equals -1)
	// If there is a dash, only return the part of the string
	// that comes after the dash.
	if (dashLocation != std::string::npos){
		return word.substr(dashLocation + 1, word.length() - 1);
	}
	else{
		return word;
	}
	
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

//3. Create a function called "sumSlice" that takes 3 inputs. The first is
//   an array of integers, the second is an integer "s" that represents the
//   starting index, and the 3rd is an int "len" that represents the length. 
//   Sum up all entries in the array, starting with item "s" and ending with
//   s+len-1, and return the sum. s and len must both be >= 0. If not, return 0
//   Note: You may assume that the array is at least s+len items long. If not,
//   it is okay to crash or return unexpected results.
//
//Example inputs:
//sumSlice({1,2,3,4},1,1) --> 2
//sumSlice({1,2,3,4},1,3) --> 9
//sumSlice({1,-1,1,-1},0,4) --> 0
//sumSlice({1,2,3,4},1,0) --> 0
//
//Hints: Your answer is going to be very similar to what you would do in Java

int sumSlice(int nums[], int s, int len){
	if (s < 0 || len < 0){
		return 0;
	}

	int sum = 0;
	for (int i = s; i <= s + len - 1; i++){
		sum = sum + nums[i];
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

void square(int n){
	if (n <= 0){
		return;
	}

	if (n == 1){
		std::cout << "+" << std::endl;
		return;
	}

	// Create the line that serves as the top and bottom row
	std::string plusLine = "+";
	for (int i = 0; i < n - 2; i++){
		plusLine = plusLine + ("-");
	}
	plusLine = plusLine + ("+");
	
	// Print the top line
	std::cout << plusLine << std::endl;

	// Print the middle lines of the square
	for (int i = 0; i < n - 2; i++){
		std::cout << "|";
		for (int x = 0; x < n - 2; x++){
			std::cout << "o";
		}
		std::cout << "|" << std::endl;
	}

	// Print the bottom line
	std::cout << plusLine << std::endl;
}

//5. Create a function called listPrimes which takes an int, n, as input.
//   It should use "new" to allocate an array of length n, and then put
//   the first n prime numbers into it, in order. You should re-use your
//   prime method here.
//   Note: The return type of the method should be int*, 
//
//Example outputs:
// listPrimes(5) should return an array containing {2, 3, 5, 7, 11}
//
//Hint: While loops work better than for loops for this one.

int* listPrimes(int n){
	int* primes = new int[n];
	int index = 0;
	int numToTest = 2;

	while(index < n){
		// If the number we are testing is prime,
		// add it to the array.
		if(prime(numToTest)){
		primes[index] = numToTest;
		index++;
		}
		// Regardless of whether or not the number we tested
		// was prime, increase it by one to test the next integer
		numToTest++;
	}

	return primes;
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

  std::cout << "square size zero: " << std::endl;
  square(0);
  std::cout << "square size one: " << std::endl;
  square(1);
  std::cout << "square size two: " << std::endl;
  square(2);
  std::cout << "square size three: " << std::endl;
  square(3);
  std::cout << "square size six: " << std::endl;
  square(6);

  testListPrimes();

  return 0;
}
