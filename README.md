Author
==========
"Luo, Yu", luoy6
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

1. prime - It is working
2. defix - It is working
3. sumSlice - It is working
4. square - It is working
5. listPrimes - It is working

Questions
=======

#### 1. In C++, the compiler compiles each .cpp file separately, without looking at the others. Explain why this leads to the need for .h files.

Because the compiler compiles each .cpp file separately, without looking at the others. If one .cpp file contains reference of methods from another .cpp file, then without the . h files (declaration files), the compiler will not be able to know where are the methods. We need to use .h files (declaration files) to reference two of more .cpp files. 

#### 2. Explain the individual roles of the preprocessor, the compiler, and the linker. What type of inputs do they take? What kind of outputs do they produce? What is the purpose of each?

The preprocessor performs intermediate operations that modify the original source code and internal compiler options before the compiler tries to compile the resulting source code. The preprocessor takes original source code as the inputs, and once it modified the original source code, the compiler takes that modified source code as its inputs.  The compiler then translates the source code (modified by the preprocessor) into machine language. The compiler output object files.  The linker links all the object files together and makes an executable file. The linker resolves linkage issues. The linker takes the object files produced by a compiler and the libraries as the inputs, and it produces an executable file. 
#### 3. What is a "pointer"?

A pointer is a variable that contains the address of another variable. A pointer may be used to indicate a variable without actually creating a variable of that type. Pointers variables only store memory addresses, usually the addresses of other variables. Essentially, they point to another variable memory location. 
#### 4. If I have a variable declared as `int x`, how do I find out what memory address that variable is stored at?

To find out the memory address of the variable x, we could use the address-of operator &. The address-of operator returns the address of a variable. 
#### 5. If I want a variable `p` that can store the address of an int, what type should I declare `p` to be?

We should declare p to be a pointer. A pointer variable only stores memory addresses. 
#### 6. Just like Java, C++ has a `new` command. But C++ also has a `delete` command that Java does not have. Why do we need `delete` in C++, but not in Java? What is `delete` good for?

One of the differences between c++ and Java is that C++ lacks language level support for garbage collection while Java has built-in garbage collection to handle memory deallocation. In C++, we use the delete keyword to release memory after we no longer need it. This frees up memory to be used by the rest of the program or by other processes. 
#### 7. What is one question about C++ that you would like me to explain in class?

I had such a hard time trying to debug a single .cpp file on Visual Studio. I ran into a great deal of problems. I had to use CodeBlocks to debug my code. It would be great if you could explain the visual studio environment a little bit.