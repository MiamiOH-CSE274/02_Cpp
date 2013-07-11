Author
==========
Andy Shear, shearar
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

1. prime - Success
2. defix - Success
3. sumSlice - Success
4. square - Prints the correct square to the console for inputs 1-5
5. listPrimes - Success

Questions
=======

#### 1. In C++, the compiler compiles each .cpp file separately, without looking at the others. Explain why this leads to the need for .h files.

Header files allow for the re-usability of code.  Each separate .cpp file may make use of the same declarations, therefore it makes sense to re-use this information instead of adding it to each .cpp file.  The header file contains the necessary libraries and declarations, acting as a framework for a class.   Each individual .cpp file can #include the singular header file, and the compiler will reference that header when it compiles the .cpp file.  Java has a two stage compiler that looks at all classes and interfaces during its first phase, then performs a second compilation knowing exactly what it needs to include.  C++ only goes through compilation once; so by #including a header file with each .cpp file, the compiler will know exactly what to do with only one pass through the code.

#### 2. Explain the individual roles of the preprocessor, the compiler, and the linker. What type of inputs do they take? What kind of outputs do they produce? What is the purpose of each?

Preprocessor: Makes modifications to the source code and internal compiler options for the compiler to read.  It parses two directives, the preprocessor directives and compiler directives.  The preprocessor directives tell the preprocessor how to modify the source code, and the compiler directives tell the compiler what internal compiler options to modify.  These directives are the statements starting with a # at the top of source code.  The preprocessor handels our #include statements.

Compiler: Takes the information added to the source code by the preprocessor and generates an object file.  It performs a Lexical Analysis, which converts the source code into tokens.  This process involves removing all whitespace and incompatible characters, making the data types, identifiers, values, and keywords into a sequence of tokens for the program to use.  Next, the code goes through a Syntax Analysis, which involves examining the validity of the tokens created by the Lexical Analysis and arranging them into an executable program.

Linker:  The Linker combines the object files and necessary libraries into an executable program.  Functions have either internal or external linkage.  The compiler deals with all internal functions, writing them out in memory and saving an address at the appropriate spot, the linker does not touch these.  The compiler leaves a placeholder for externaly linked functions, and writes the machine code and leaves an address in the objet file for the linker to find.  The linker finds these external declarations and uses an 'extern' variable to point to its location in memory.

#### 3. What is a "pointer"?

A pointer is a variable that stores a reference to another variable.  They 'point to' a variable whose address in memory it stores.

#### 4. If I have a variable declared as `int x`, how do I find out what memory address that variable is stored at?

Use the address of operator, int y = &x; where y now holds the address in memory of where x exists.

#### 5. If I want a variable `p` that can store the address of an int, what type should I declare `p` to be?

Declare it as a pointer, int* p;

#### 6. Just like Java, C++ has a `new` command. But C++ also has a `delete` command that Java does not have. Why do we need `delete` in C++, but not in Java? What is `delete` good for?

Java handles its own memory, while C++ does not.  Objects created in Java are deleted when they are done being used, C++ requires the programmer to delete them once they fall out of scope.  If the programmer does not properly delete dynamically created objects, then they are left sitting on the heap after they fall out of scope, with no way to reclaim them.  These objects take up memory the program could be using to execute faster, this is called a memory leak.  Using the delete or delete[] operation properly to de-allocate memory after it has been dynamically allocated prevents a program from experiencing one of these memory leaks.

#### 7. What is one question about C++ that you would like me to explain in class?

Can you explain member dereferencing operators (.*) and member indirection operators (->*) and give examples of how these work, and the difference between the two?