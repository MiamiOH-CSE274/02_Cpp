Author
==========
"Griffith, David", griffid5
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

1. prime - Working. 
2. defix - Working.
3. sumSlice - Working.
4. square - Working.
5. listPrimes - Working.

Questions
=======

#### 1. In C++, the compiler compiles each .cpp file separately, without looking at the others. Explain why this leads to the need for .h files.
We need .h files because we have declarations and definitions in C++ like other languages however, they work a little different in C++. Typically the declarations will go into the .h file so that the declarations can be used by the rest of the program and not just one .cpp file. The actual implementation (definitions) go into the .cpp file that is using the declarations. 


#### 2. Explain the individual roles of the preprocessor, the compiler, and the linker. What type of inputs do they take? What kind of outputs do they produce? What is the purpose of each?
The purpose of the preprocessor is to perform intermediate operations before the compiler can turn the source code into machine code. It takes in the input of source code and outputs preprocessor directives which direct the the preprocessor on how it should process the source code. Also it outputs compiler directives which tells the compiler how it should modify internal compiler options. Overall, these two directives try to make writing source code easier and more understandable. 

The job of the "compiler" is to translates a computer language (source code) which is the input and transform that into machine language which outputs an object file which contains the transformed source files that can now be executed. 

The linker is a program that makes executable files. Overall, the linkers job is to fix references to undefined symbols by finding the objects symbol and replacing the undefined smybol with the symbol's real address. The linker takes an input of object code and outputs an executable program which is labeled with .exe.
#### 3. What is a "pointer"?
A pointer is a memory type that can hold the address of something such as an (int, char, double etc). In other words they point to another variable's memory location so that you can use them throughout your program. 

#### 4. If I have a variable declared as `int x`, how do I find out what memory address that variable is stored at?
To find out what memory address that int x has you can use the "address of operator (&)." For example, "&x", will give you the memory address of x in hexidecimal typically. 

#### 5. If I want a variable `p` that can store the address of an int, what type should I declare `p` to be?
If you want the variable p to store the address of an int then you should declare it to be type int. For example, int* p would declare p as type int in which it could store the address of an int. 

#### 6. Just like Java, C++ has a `new` command. But C++ also has a `delete` command that Java does not have. Why do we need `delete` in C++, but not in Java? What is `delete` good for?
We need delete in C++ because we need to free up the address in memory to which pointers are pointing after we are done using them so that no memory leaks occur. In Java there is an automatic garbage collection which helps to cleanup the memory after we are done using it which means we don't really need to use delete. 

#### 7. What is one question about C++ that you would like me to explain in class?
Can you clarify what the dereference operator does?