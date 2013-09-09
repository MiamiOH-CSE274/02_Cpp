#include <iostream>

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

//TODO: Declare and implement "prime" function here


//This is a basic tester for the "prime" function


//I am going to include a header file cmath in order to use sqrt in my algorithm

bool prime(int a) {

    if( a < 2 )
    {

     return false;  //If the number is smaller than 2.

    }

    if( a == 2 )
    {

     return true;   //If the number is 2 so it is prime.

    }

    bool flag = true; //set a bool variable as true.

    for(int i = 2;i<a;i++) {

          if(a % i == 0)
	      {
	         flag = false;
	      }

       }

          return flag;
    }

  

void testPrime(){
  int nums[] = {-5, -1, 0, 1, 2 ,3, 4, 5, 6 };
  bool results[] = {false, false, false, false, true, true, false, true, false};
  for(int i=0; i<9;i++){
    if(prime(nums[i]) != results[i]){
      std::string res = prime(nums[i]) ? "true" : "false";
      std::cout << "testPrime: ERROR: On " << nums[i] << " you returned " << res << std::endl;
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

//TODO: declare and implement "defix" function here

//This is a basic tester for "defix"

<<<<<<< HEAD
#include <string>

std :: string defix(std :: string s) {

     int pos = s.find("-");

     if(pos == -1)  //If there is no dash in the string.
     {

       return s;

     }


     unsigned found = s.find_last_of("-");

     std :: string newString = s.substr(found);

     return newString;


=======

#include <string>

std :: string defix(std :: string s){

	  int pos = s.find("-");  //If there is no dash in the string.

	  if(pos == -1){

		  return s;
	  }
	  
	    else

	  {
		  s = s.substr(pos+1);
		  return s;

	  }


	  unsigned found = s.find_last_of("-");

	  std :: string newString = s.substr(found);


	  return newString;
 }
>>>>>>> 918c2e249de463f24ecd27a772ed2551baf7124b


void testDefix(){
  std::string inputs[] = {"re-run","pre--text","-ooh","moo","no-no-no", "foo-"};
  std::string outputs[] = {"run","-text","ooh","moo","no-no", ""};

  for(int i=0;i<5;i++){
    if(outputs[i] != defix(inputs[i])){
      std::cout << "testDefix: ERROR: Expected " << outputs[i] << " but got " << defix(inputs[i]) << std::endl;
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

//TODO: Declare and implement sumSlice here

//This is a basic tester for "sumSlice"


int sumSlice(int* a, int s, int l){

	  int sum = 0;

	  //If starting index is less than 0.
      if(s < 0)
      {

    	return 0;

      }

      //if l is less or equal than 0.
      if(l <= 0)
      {

    	return 0;

      }

      for(int i= s ;i < s + l;i++)
      {
    	  sum = sum + a[i];

      }

         return sum;
}





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



void square(int n){
	
	//special case when n equals 1.

	if(n == 1){

		std :: cout << "+";
	}

	else{


	std :: cout << "+";

	for(int i = 0;i<n-2;i++)

	{

       std :: cout << "-";
	}

	std :: cout << "+";
	std :: cout << "\n";



	for(int i = 0;i<n-2 ;i++){

		std :: cout << "|";


		for(int j = 0;j<n-2;j++)

		{


			std :: cout << "o";

		}
		std :: cout << "|";

		std :: cout << "\n";
	    }


	std :: cout << "+";

		for(int i = 0;i<n-2;i++)

		{

	       std :: cout << "-";
		}

		std :: cout << "+";
	}
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

//TODO: Declare and implement listPrimes here


int* listPrimes(int n)

    {

	int* ret = new int[n]; //allocate memory.

   	int num = 0;  //The number to test if it is prime.

	int count = 0; //The counter to count if it reaches the size of the array.

    while(count < n) 

    {
    	if(prime(num) == true)

    	{
    		ret[count] = num;
    		
    		//Increase the counter.
    		count++;
    		//Increase the number.
    		num++;
    	}

    	else
    	{
    		//If it is not prime,only increase the number.
    		num++;

    	}
    }

     return ret;
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
