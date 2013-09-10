02_Cpp
======

Intro to C++, learning to do things you can already do in Java

Reading
=======

**C++ Programming** at WikiBooks.

All of the readings are free online, though note that the book is under constant revision. If something looks crazy, ask me about it.

1. Why our code is split into .h files and .cpp files: https://en.wikibooks.org/wiki/C%2B%2B_Programming/Programming_Languages/C%2B%2B/Code/File_Organization (6p)
2. What is the :: operator for? https://en.wikibooks.org/wiki/C%2B%2B_Programming/Programming_Languages/C%2B%2B/Code/Statements/Scope Stop at "unnamed namespace"
3. What does the compiler do? What does it NOT do? What does the pre-processor do? What does the linker do? https://en.wikibooks.org/wiki/C%2B%2B_Programming/Programming_Languages/C%2B%2B/Code/Compiler Stop at "Compile speed" (4p) https://en.wikibooks.org/wiki/C%2B%2B_Programming/Programming_Languages/C%2B%2B/Code/Compiler/Preprocessor (13p) https://en.wikibooks.org/wiki/C%2B%2B_Programming/Programming_Languages/C%2B%2B/Code/Compiler/Linker (4p)
4. Bitwise operators. https://en.wikibooks.org/wiki/C%2B%2B_Programming/Programming_Languages/C%2B%2B/Code/Statements/Variables/Operators#Bitwise_operators (2p)
5. Arrays, and the subscript operator. https://en.wikibooks.org/wiki/C%2B%2B_Programming/Programming_Languages/C%2B%2B/Code/Statements/Variables/Operators#Subscript_operator_.5B_.5D (5p)
6. Pointers. https://en.wikibooks.org/wiki/C%2B%2B_Programming/Programming_Languages/C%2B%2B/Code/Statements/Variables/Operators#address-of_operator_.26 and https://en.wikibooks.org/wiki/C%2B%2B_Programming/Programming_Languages/C%2B%2B/Code/Statements/Variables/Operators#Pointers.2C_Operator_.2A (9p) Skip the part about multi-dimensional arrays, and the part about pointers to functions.
7. Dynamic memory allocation. https://en.wikibooks.org/wiki/C%2B%2B_Programming/Programming_Languages/C%2B%2B/Code/Statements/Variables/Operators#Dynamic_memory_allocation (4p)

Homework
========

1. Fork this repo
2. Use `git checkout` to check out your branch of the project (which is your unique id)
3. Fill in the blanks in the main.cpp with code that produces the correct result. Read the comments to find out what they ought to do.
4. Be sure to `git commit` and `git push` often
5. Update this file with your documentation and the answers to questions.
6. When you are ready to turn in your homework, submit a pull request from your branch in your repo, to your branch in MY repo.
7. Be sure to check the pull requests for my repo on github to make sure it worked, and that your work has been submitted.

Documentation
=========

For each of the following functions in main.cpp, tell me whether or not you think it is working in your submission.

1. prime - The prime function appears to be working
2. defix - Defix appears to be working
3. sumSlice - sumslice appears to be working
4. square - Square passed all the tests I ran it through
5. listPrimes - I cannot figure out why listPrimes is not working.  I'm not getting any feedback from testListPrimes when I run the program, but the code I wrote looks like it should work.

Questions
=======

#### 1. In C++, the compiler compiles each .cpp file separately, without looking at the others. Explain why this leads to the need for .h files.
-This creates the need for header files so that the compiler knows how the files relate.  Otherwise, there are loose ends in the code of one file, and the compiler doesn't know where data will be coming from when the program is run.

#### 2. Explain the individual roles of the preprocessor, the compiler, and the linker. What type of inputs do they take? What kind of outputs do they produce? What is the purpose of each?
-The preprocessor reads instructions (directives) on how to read the source code and how to modify the compiler options.
-The compiler translates source code into machine code, and creates object files to be used when running the program.
-The linker resolves references in the code and replaces them with the actual address of the data/code that needs to be accessed for the program to run.

#### 3. What is a "pointer"?
-A pointer is a variable that can hold an address, the location of the first piece of storage for a variable.

#### 4. If I have a variable declared as `int x`, how do I find out what memory address that variable is stored at?
-To find the address for int x, you would use the command "&x".

#### 5. If I want a variable `p` that can store the address of an int, what type should I declare `p` to be?
-To store the address of an int (lets say x), you would declare like so…
int* p_i = &x;
#### 6. Just like Java, C++ has a `new` command. But C++ also has a `delete` command that Java does not have. Why do we need `delete` in C++, but not in Java? What is `delete` good for?
-Delete can be used to free up memory for a program to use, and used to deallocate memory use to prevent leaks from happening when a program runs.

#### 7. What is one question about C++ that you would like me to explain in class?
-I would like to go over some syntax of basic operations that are different from Java.  I found that my biggest problem in the assignment was using Git (I'll need to get a grasp on that), and looking up the API and syntax for operations that I thought would be the same.