Author
==========
"Stilgenbauer, Kendall", stilgeki
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

1. prime - prime is functioning properly
2. defix - defix is functioning properly
3. sumSlice - sumSlice is functioning properly
4. square - square partially complete; n > 2 doesn't work in this version
5. listPrimes - listPrimes is functioning properly

Questions
=======

#### 1. In C++, the compiler compiles each .cpp file separately, without looking at the others. Explain why this leads to the need for .h files.

Since something must be declared before being used in C++, if two files in a project both require a function or variable, it must be declared in both of them separately.  This isn't a problem at that level (two files), but if there are dozens of files that all need the same functions or variables, it becomes problematic.  They can't reference each other for the answer, so instead a .h is created that declares the function for all of them.  They then #include the .h file and all have their own declaration without having to write or copy-paste it many times.

#### 2. Explain the individual roles of the preprocessor, the compiler, and the linker. What type of inputs do they take? What kind of outputs do they produce? What is the purpose of each?

The preprocessor takes source code and performs some preliminary processing on it (hence the name).  The primary duty of the preprocessor is to include .h files.  It outputs preprocessed source code to the compiler.  The compiler then converts this to object code, which is machine code that the computer can understand.  These object files are then sent to the linker, which connects all the .o files together into a single executable program.

#### 3. What is a "pointer"?

A pointer is a variable that holds the address of something.  Each type has its own pointer type, denoted by adding an asterisk to the end of the type name (ex: int*, char*).  A pointer can be dereferenced with the * operator to access the original value.

#### 4. If I have a variable declared as `int x`, how do I find out what memory address that variable is stored at?

You use the address-of operator: &x.

#### 5. If I want a variable `p` that can store the address of an int, what type should I declare `p` to be?

The variable p should be type int*, a pointer that stores the address of an int.

#### 6. Just like Java, C++ has a `new` command. But C++ also has a `delete` command that Java does not have. Why do we need `delete` in C++, but not in Java? What is `delete` good for?

Java was nice enough to handle memory management for us.  It had "garbage collecting" to remove unnecessary things that could no longer be accessed anyway.  C++ does not do this, so the programmer must do it him- or herself to prevent memory leaks.

#### 7. What is one question about C++ that you would like me to explain in class?

Why do we use "<<" when doing console output?  What does that mean?