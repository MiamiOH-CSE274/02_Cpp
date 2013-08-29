Author
==========
"Emrick, Garrett", emrickgj
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

1. prime - I believe it is working, I tested extreme cases and it passed my tests.
2. defix - Yes, I believe it is working as specified by the examples. 
3. sumSlice - Yes, I do believe this works.
4. square - Yes, and I did my best to get it working as fast as possible. Currently just prints out without storing allocating any extra memory.
5. listPrimes - Yes I do, although this is the one I would think would be the most likely to have bugs. As far as I tested, it seems to work as desired.

Questions
=======

#### 1. In C++, the compiler compiles each .cpp file separately, without looking at the others. Explain why this leads to the need for .h files.

It's important because without the header files, if you tried to use another class or file and it didn't compile first, it would crash. Using .h files
allows you to define external classes, functions, and variables, before compiling the cpp files. Similar to why you need to define functions in a cpp file
before you use them, as I did in my project (void printEdge(int n);)

#### 2. Explain the individual roles of the preprocessor, the compiler, and the linker. What type of inputs do they take? What kind of outputs do they produce? What is the purpose of each?

The compiler takes the source code and compiles it to machine code. The preprocessor can be included in the compiler, but basically makes last minute changes
to the code before the compiler gets ahold of it. The Linker takes references to unknown objects in the code, and assigns them the correct placeholder.
The PreProcessor itself takes PreProcessor directives that tell it how to process the source code, and can also take compiler directives to tell the compiler 
how to modify internal compiler options. Once the compiler compiles the code, creating .o file, the Linkage then connects all of these .o files together, thus 
creating a .exe or executable file that can be run on the computer.

#### 3. What is a "pointer"?

A Pointer points to another variables reference in memory. Pointers can be reassigned, and treated like a normal variable, although it has some
slightly different functionality. 

#### 4. If I have a variable declared as `int x`, how do I find out what memory address that variable is stored at?

You could use it's reference, &x.

#### 5. If I want a variable `p` that can store the address of an int, what type should I declare `p` to be?

You could declare it as a reference, or a pointer. If you plan on reallocating it, then perhaps it would be best to use a pointer, or *p.

#### 6. Just like Java, C++ has a `new` command. But C++ also has a `delete` command that Java does not have. Why do we need `delete` in C++, but not in Java? What is `delete` good for?

Java has automatic garbage collection, while C++ does not. When using the "New" keyword, you would want to also use the "Delete" key before exiting to unallocate the memory.
Failure to do so results in memory leaks and can cause a program to run inefficiently.

#### 7. What is one question about C++ that you would like me to explain in class?
I'm doing this way ahead of time, but I assume you will be spending some time on Pointers, but an explanation of them in better detail would be nice.
Perhaps a list or going over of really common libraries to use in C++, such as the Vectors library that we could use. I feel like getting used to all the libraries will 
be the hardest part in getting used to the language, or at least for me.