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

1. prime - I believe it works, should return a true or false correctly for all cases.
2. defix - I believe that this removes the prefix correctly for all cases.
3. sumSlice - I believe this works for all cases.
4. square - This should work for all test cases if not all cases.
5. listPrimes - This method does not work.

Questions
=======

#### 1. In C++, the compiler compiles each .cpp file separately, without looking at the others. Explain why this leads to the need for .h files.

The header file lets your C++ know that the .cpp files are together and not to get confused if something is implemented that is not declared within that .cpp file.

#### 2. Explain the individual roles of the preprocessor, the compiler, and the linker. What type of inputs do they take? What kind of outputs do they produce? What is the purpose of each?

The preprocessor replaces inclusions of header files with the declarations that they include. The preprocessor takes inputs of #include and produces and output of code to the .cpp file. The purpose is to allow header files to be used to store declarations and save space in .cpp files.
The linker brings the different files included in a program together to create one object for the compiler to check. The linker takes inputs of .cpp files and outputs a single file to be passed and run. the purpose is to make the compiler run faster by only having to check over one file and to build the program from its components.
The compiler checks for errors once through from top to bottom in the program. The compiler takes input of .cpp files and outputs error codes or the .cpp file to be run. The purpose is to prevent the system from crashing if errors are present in the code.

#### 3. What is a "pointer"?

A pointer is the position in memory where an object is stored, in C++, that would be as in a line of cells in the memory. I used the reference section of cplusplus.com to answer this question.

#### 4. If I have a variable declared as `int x`, how do I find out what memory address that variable is stored at?

The "&" operator before a variable will get the location in memory of the variable and can be printed to show the operator its value.

#### 5. If I want a variable `p` that can store the address of an int, what type should I declare `p` to be?

'p' should be declared as an int* to store the address of an int.

#### 6. Just like Java, C++ has a `new` command. But C++ also has a `delete` command that Java does not have. Why do we need `delete` in C++, but not in Java? What is `delete` good for?

The delete command in C++ will deallocate the memory where a pointer had previously indicated if the program requires more RAM in a situation where a variable is needed, but space is also needed during the time that the variable is not in use.

#### 7. What is one question about C++ that you would like me to explain in class?