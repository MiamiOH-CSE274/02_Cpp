#include <iostream>
using namespace std; // so I don't have to keep typing out std::


/*
 *@author: Garrett Emrick
 * 
 * Instructor: Dr. Brinkman
 * Class: CSE 274
 *   - Monday/Wednesday 8:30-9:50
 *
 * Homework 2
 * Date of Completion: 8/28/2013
 *
 * Hardest Problem? 5
 *
 * ^ Just not used to pointers, so I had a little trouble at first,
 * Granted I did try to do this way ahead of time!
 *
 * 
 *
 */

bool prime(int num){
	if(num < 2) return false;

	if(num == 2 || num == -2) return true;

	for(int i = 2; i < num; i++)
		if(num%i == 0)return false;

	return true;
}

//This is a basic tester for the "prime" function
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




//TODO: declare and implement "defix" function here
string defix(string input){

	int prefixStart =  input.find_first_of('-');

	if(prefixStart != -1){
		return input.substr(++prefixStart);
	}

	return input;
}


//This is a basic tester for "defix"
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



//TODO: Declare and implement sumSlice here
int sumSlice(int arrayToSum[], int startingIndex, int endingIndex){

	if(startingIndex < 0) return 0;
	if(endingIndex < 0) return 0;

	//Wanted to mess around with pointers, haven't had too much experience with them.
	int* arrayPtr = arrayToSum;
	arrayPtr += startingIndex;

	//The sum to return after adding all the values
	int sum = 0;

	for(int i = startingIndex; i < startingIndex+endingIndex; i++){
		sum += *arrayPtr; //Add the value of the pointers position in the array to the sum
		arrayPtr++; //Push the pointer one index further in the array
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



//Need to declare/initialize the function so I don't get errors.
void printEdge(int n);

void square(int n){
	if(n <= 0) return;

	if(n == 1){ cout << "+" << endl; return;}
	if(n == 2){ cout << "++\n++" << endl; return;}

	//If I assigned the values, and then printed them, it would go slower.
	//If I simply print the values without saving. . . I assume it would be faster..

	//First loop to print the top frame...
	printEdge(n);

	//Loop to print out the rows between the top and bottom edges...
	for(int i = 1; i < n-1; i++){
		cout << "|";

		for(int j = 1; j < n-1; j++)
			cout << "o";

		cout << "|" << endl;
	}

	//Print the bottom Edge
	printEdge(n);

	return;
}

/**
 * The point of this is avoid repeating code, prints out an edge. Can be used for
 * both the top and bottom edges of the square.
 *
 * @param n The number passed to the past function, how many rows and columns to pass
 * returns void
 *
 */
void printEdge(int n){
	cout << "+";

	for(int i = 1; i < n-1; i++)
		cout << "-";

	cout << "+" << endl;
}




int* listPrimes(int n){

	int* primeArray = new int[n];
	int currentSize = 0; // Not going to use a Vector, so need to keep track of the current size
	int iterator = 2; // Start with the first prime number, this is used to iterate through the numbers later

	//Loop to find the lowest primes and add them to the array
	while(currentSize < n){
		if(prime(iterator)){
			primeArray[currentSize] = iterator;
			currentSize++;
			
		}
		if(currentSize >= n) //Just in case something weird happens
			break;
		
		//Increment the iterator
		iterator++;
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

//The main, plus some of my own created test cases
int main(){
  testPrime();
  testDefix();
  testSumSlice();
  square(1);
  square(2);
  square(-1);
  square(-10000);
  square(15);
  testListPrimes();
	
  return 0;
}
