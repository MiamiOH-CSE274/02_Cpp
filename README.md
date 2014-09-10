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

1. prime - Working as specified.
2. defix - Working as specified.
3. sumSlice - Working as specified.
4. square - Working as specified.
5. listPrimes - Working as specified.

Questions
=======

#### 1. In C++, the compiler compiles each .cpp file separately, without looking at the others. Explain why this leads to the need for .h files.

The use of .h files provides declarations for functions and libraries that can be used in multiple locations.  Including a .h file allows the compiler to access this data without having to include a separate declaration in every .cpp file.

#### 2. Explain the individual roles of the preprocessor, the compiler, and the linker. What type of inputs do they take? What kind of outputs do they produce? What is the purpose of each?

The preprocessor performs operations that modify the source code, such as including a .h file, before the main function is compiled.  The preprocessor receives directives that make the source code easier to write and understand and makes changes to the source code before it is compiled.  

The compiler acts as a translator between the C++ source code written by the programmer and the machine code understandable to the computer.  It receives C++ source code as its input and returns machine code to the processor.

The linker acts as a way to combine all necessary files to run a program into a single executable file.  It works by finding placeholder names of other files within code and replacing the placeholders with refrences to the actual code.  The linker receives files from a project as input and returns executable files as output.   

#### 3. What is a "pointer"?

A pointer is a variable that stores a refrence to the memory address of another variable.  

#### 4. If I have a variable declared as `int x`, how do I find out what memory address that variable is stored at?

To find the memory address, use &, the address of operator.  An example would be std::cout << &x << std::endl;

#### 5. If I want a variable `p` that can store the address of an int, what type should I declare `p` to be?

p should be declared as a pointer.  int* p.

#### 6. Just like Java, C++ has a `new` command. But C++ also has a `delete` command that Java does not have. Why do we need `delete` in C++, but not in Java? What is `delete` good for?

The delete operator is necessary in C++ because a programmer can directly allocate space on RAM for a variable which is not possible to do in Java.  The purpose of using delete is to free memory after a variable has served its purpose to the program, and keep the program running efficently.  

#### 7. What is one question about C++ that you would like me to explain in class?

I am still unsure about using the delete keyword, that is a topic I would like to see explained in class.