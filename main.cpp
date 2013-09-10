
#include <iostream>
using std::string;
using std::endl;
using std::cout;

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


/* For this method I realized the hint given was in fact incorrect. There is no need to test
the modulus operator beyond (n/2) -1 because if %2 fails, then there is no reason a number (n/2)
or above should succeed. The mathematical proof of this is difficult, but it can be demonstrated
and should be intuitive. Also, according to my MTH 231 textbook from the Spring 2013 Semester, 
negative numbers can be considered prime. While I will work within the given constraints 
above, this logical disjointment could lead to future misinterpretations of other projects.
*/
bool prime(int x){
	if(x<2)
		return false;
	if(x==2) //always triple check your operators in arguments... damn double vs. single equals... Why does single equals even compile here???!!!
		return true;
	int limit = sqrt(x);  //I am not entirely sure how the control argument within a for loop works. The square root limit can be proven through some nasty induction. there is no need to test beyond this value.
	for(int i=2; i<=limit; i++){  //noting the inherrent inaccuracy of integer division, using the <= operator negates any possible missing values
		if(x % i == 0)
			return false;
	}
	return true;  //method should only arrive here if all tested values fail to produce x%i == 0.
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

/*For this method I chose a simple 1-line implementation of basic std::string functions to return strings
without the first prefix (denoted as "abcd-") by way of exploiting the int return types of string::find
and string::length to fulfill the necessary argument types for string::substr, as well as substr's built-in
function which clips the returned substring if the length argument exceeds the number of available characters.
*/
string defix(string s){
	return s.substr(s.find("-")+1, s.length()); // This one-line implementation is deceptively correct. 

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

/*The description for this problem was slightly confusing at first, but I 
believe that is rooted mainly in the variable name "len." For our purposes,
"count" would be more appropriate given its actual purpose in the arguments.
*/
int sumSlice(int nums[], int s, int len){
	int sum=0;
	for(int i=s; i<(s+len); i++)
		sum+=nums[i];
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

/*To start, I hate problems like this. They are my achilles heel. I went through
five total solutions before I arrived at the one below, which I believe is the
most efficient of my solutions in terms of both space and running time. I'm 99%
sure a better solution exists given I broke the 10-line rule, and I'll be happy
to examine it.
*/
void square(int n){
	if(n<1)
		return;

	string *lines = new string[n];
	string TB ("+"), inner ("|");//An initial or base-case version of the top/bottom string and a base case of the inner strings.

	if(n>1){
		for(int i=0; i<n-2; i++){//Note: only adds symbols when n>2. 
			TB += "-";
			inner += "o";
		}//end concatenation loop

		TB += "+"; //These cap each string with the proper final symbol.
		inner += "|";

		for(int i=1; i<n-1; i++){//Incrementally adds the properly formatted inner lines to the "lines" array. If n=2, no inner lines are added, as desired.
			lines[i] = inner;
		}//end array building loop.

		lines[n-1] = TB; //This line caps the end of the array with the complete Top/Bottom String.
	}//end if n>1

	for(int i=0; i<n; i++)
		cout << lines[i].c_str() << endl;

	delete[] lines;
//In C++, should I put a return statement here, or is that extraneous? 
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

/*Okay, the instructions for this method were entirely confusing. You want the return type to be an address of an int, but then
your example return is an array. I'm sure I'll get reamed for this, but I'm out of time due to piled up homework. I do see you 
want the address given the tester method, but man, confusing...

*/
int* listPrimes(int n){
	int *primes = new int[n];
	int currentNum=2; //this is the variable which will be incremented and sent to the "prime" method to check. Using definitions from said method, there is no reason to start with a number less than 0.
	int *my_pointer = primes;
	for(int i=0; i<n; i++){//Yeah yeah, going against advice. I like for loops...
		while(prime(currentNum) != true)
			currentNum += 1;

		primes[i] = currentNum;
		currentNum += 1; //This prevents an infinite loop of the same prime entering the array.
	}//end for

	return my_pointer;
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
