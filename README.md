02_Cpp
======

Intro to C++, learning to do things you can already do in Java

Reading
=======

**C++ Programming** at WikiBooks.

All of the readings are free online, though note that the book is under constant revision. If something looks crazy, ask me about it.

I will lecture about this material in class. These readings are meant to be used in reviewing/studying.

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
3. Fill in the blanks in the main.cpp with code that produces the correct result. Read the comments to find out what they ought to do.
4. Be sure to `git commit` and `git push` often
5. Update this file with your documentation and the answers to questions.
6. When you are ready to turn in your homework, submit a pull request from your repo to mine.
7. Be sure to check the pull requests for my repo on github to make sure it worked, and that your work has been submitted.

Documentation
=========

For each of the following functions in main.cpp, tell me whether or not you think it is working in your submission.

1. prime - working
2. defix - working
3. sumSlice - working
4. square - working
5. listPrimes - working

Questions
=======

#### 1. In C++, the compiler compiles each .cpp file separately, without looking at the others. Explain why this leads to the need for .h files.
.h files are used to provide the outline of a program and will show what the program will do. The .cpp files will show more of how the program will perform each action. This means that the .h files need to be referenced in the .cpp files so that the .h file can be the thing that connects each .cpp file.

#### 2. Explain the individual roles of the preprocessor, the compiler, and the linker. What type of inputs do they take? What kind of outputs do they produce? What is the purpose of each?
The preprocessor reads the inclusion statements at the top of the file and processes that information before the compilation starts. The input is all statements beginning with # at the beginning of the file. The purpose of this is to make sense of what the program needs to include to run the way it is supposed to.
The compiler puts the program together using the output file from the preprocessor as input. It then generates an output called an object file that is the same as the input but does not include the statements that start with #. The purpose of this is to make sure that the code is readable to the computer.
The linker puts together all of the object files created by the compiler and makes the code executable. This is important to be able to successfully run the code.

#### 3. What is a "pointer"?
A pointer is a data type that stores the memory address of a variable without creating a variable of that type.

#### 4. If I have a variable declared as `int x`, how do I find out what memory address that variable is stored at?
std::cout << *x

#### 5. If I want a variable `p` that can store the address of an int, what type should I declare `p` to be?
int*

#### 6. Just like Java, C++ has a `new` command. But C++ also has a `delete` command that Java does not have. Why do we need `delete` in C++, but not in Java? What is `delete` good for?
Delete deallocates the memory in a specific position so that it can be used for somethng else. Once a piece of memory isn't needed anymore, then Java automatically deletes it, but C++ doesn't automatically do that. This means that C++ has to be told to delete something to free up the memory.

#### 7. What is one question about C++ that you would like me to explain in class?
Would graphics in C++ also be similar to java syntax or is it a lot easier or more complicated?
