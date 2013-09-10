Author
==========
"Mullins, Harrison", mullingh
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

1. prime - Working
2. defix - Working
3. sumSlice - Working
4. square - Working
5. listPrimes - Working

Questions
=======

#### 1. In C++, the compiler compiles each .cpp file separately, without looking at the others. Explain why this leads to the need for .h files.
Considering that the compiler reads .cpp files separately, if there were no .h files there would be no way of connecting the declarations from separate .cpp files.  The book describes it as the .cpp file is what includes definitions, whereas the .h file includes declarations.  The difference being that .h files are provided through the use of #include to build a skeleton of a class, while the .cpp contains the actual implementation.
#### 2. Explain the individual roles of the preprocessor, the compiler, and the linker. What type of inputs do they take? What kind of outputs do they produce? What is the purpose of each?
The preprocessor parses "directives" and these tell the preprocessor how it should process and modify the source code.  It must take these steps before the compiler tries to compile the source code so that things such as # operators are taken into consideration before compiling.  The compiler is a program that converts source code(whatever language that may be) into assembly language or machine language.  This process involves many steps called compilation.  First the source files are translated into object files, then the compiler performs some various operations including; lexical analysis, syntax analysis, and semantic analysis.  The linker is a program that makes executable files.  The linker resolves issues involving undefined references, and connects or combines object files produced by the compiler.
#### 3. What is a "pointer"?
A pointer is a variable type that "points" to a space of allocated memory and holds the address location of that space.
#### 4. If I have a variable declared as `int x`, how do I find out what memory address that variable is stored at?
Through use of the address of operator &.  You simply place it in front of the x like &x to find the memory address of x.
#### 5. If I want a variable `p` that can store the address of an int, what type should I declare `p` to be?
int* p.
#### 6. Just like Java, C++ has a `new` command. But C++ also has a `delete` command that Java does not have. Why do we need `delete` in C++, but not in Java? What is `delete` good for?
We need delete because unlike Java C++ will not de-allocate things that we allocate automatically in programs.  Meaning a lot of "junk" can still be present if we have declared 'new' instances and have not deleted them.  This can substantially slow down our programs if we do not de-allocate memory we have allocated through the use of the delete command.
#### 7. What is one question about C++ that you would like me to explain in class?
Differences between using 'new' command and 'delete' command on 'arrays' verses standard variables such as int, char, etc.