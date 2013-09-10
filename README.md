Author
==========
"Bailey, Sam", baileys2
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

1. prime - Should work
2. defix - Should work
3. sumSlice - Should work
4. square - Should work
5. listPrimes - Should work

Questions
=======

#### 1. In C++, the compiler compiles each .cpp file separately, without looking at the others. Explain why this leads to the need for .h files.

.h files, or header files, help to keep track of all of the .cpp files used in one specific program.  They link all of the necessary external .cpp files used by a program to the program, ensuring that the compiler will know that they exist and not throw unnecessary errors.

#### 2. Explain the individual roles of the preprocessor, the compiler, and the linker. What type of inputs do they take? What kind of outputs do they produce? What is the purpose of each?

Preprocessor: The preprocessor does all of its work before the code is sent to the compiler to be translated.  It prepares the code for the compiler by checking for various errors that would cause the compiler to crash.
Compiler: The compiler is basically a programmer-to-computer translator, as it takes the code that people have written and can understand and converts it into a language that the computer can interpret and use to execute the desired functions and commands.
Linker: The linker takes the code after the compiler is done with it and connects it to all of the needed external resources.  This includes any necessary libraries and any other programs or pieces of code that the main program call on or references.

#### 3. What is a "pointer"?

A pointer is a type of variable (although not necessarily a 'true' variable) that simply contains that memory address of another variable that contains actual, viable data.

#### 4. If I have a variable declared as `int x`, how do I find out what memory address that variable is stored at?

Simply using the & operand to return the variable 'x' memory address would work. Just put the '&' right before the variable name.

#### 5. If I want a variable `p` that can store the address of an int, what type should I declare `p` to be?

the variable 'p' should be declared as a pointer variable, or  type int*.  This would allow that variable to hold the memory address of an int variable rather than hold actual data.

#### 6. Just like Java, C++ has a `new` command. But C++ also has a `delete` command that Java does not have. Why do we need `delete` in C++, but not in Java? What is `delete` good for?

The 'delete' command in C++ is used mainly to free up memory space and ensure that the program can run as effieciently as possible without any memory leaks or other problems occurring.  Java does not need this command because it has things like a garbage collector taht take caring of deleting unnecessary data for users, while in C++ (a low-level programming language) users are much more responsible for overseeing memory maintenance themselves.

#### 7. What is one question about C++ that you would like me to explain in class?

Really the thing that I want explained the most in class (or at least somewhere in the homework descriptions) is how to efficiently use the new programs we have to download and use for this class (such as github and Visual C++).  I felt like it's just expected that we should instantly know how to use these things, and I end up spending a majority of my time figuring out how to work those programs correctly rather than actually doing the homework and learning the actual material. It's not a big thing to go over, but it would save me a lot of time and be greatly appreciated.