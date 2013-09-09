Author
==========
"Zhong, Mingwei", zhongm2
02_Cpp
======

Intro to C++, learning to do things you can already do in Java

Reading
=======

**C++ Programming** at WikiBooks.

All of the readings are free online, though note that the book is under constant revision. If something looks crazy, ask me about it.

1. Why our code is split into .h files and .cpp files: https://en.wikibooks.org/wiki/C%2B%2B_Programming/Programming_Languages/C%2B%2B/Code/File_Organization (6p)
.cpp is an implementation file, and .h is a declaration file.
1.Increase organization and better code structure.
2.Promote code reuse, on the same project and across projects.
3.Facilitate multiple and often simultaneous edits.
4.Improve compilation speed.


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

1. prime - Working Good.
2. defix - Working Good.
3. sumSlice - Working Good.
4. square - Working Good.
5. listPrimes - Working Good.


Questions
=======

#### 1. In C++, the compiler compiles each .cpp file separately, without looking at the others. Explain why this leads to the need for .h files.

The need of using header files is to separate the interface from the implementation. So in this way, the header files don't need to know what is the detail in
.cpp file which is this implementation. It will reduce compilation time and 
recompilation time. Additionally, the C++ compiler can not search for symbol 
declarations alone, which means we need to help it by including those declarations by using header file. Thus, the header file is still necessary.


#### 2. Explain the individual roles of the preprocessor, the compiler, and the linker. What type of inputs do they take? What kind of outputs do they produce? What is the purpose of each?

1.A compiler is a program that translates the source code into the computer's
native machine language. The input of the compiler is source files and the 
output is object files.
2.The linker comes into play after the compiler converts source files into
object files. The linker can link the object files to a standard library, link your object files with other object files, or create other object files that have function can be called by another object file. The linke input all of the
necessary functions in your program references and creates a single executable.
3.The preprocessors gives instruction to the compiler to preprocess the 
information before compilation starts. The preprocessor directives begin with #,it can input an expression, a statement, a block or simply anything.


#### 3. What is a "pointer"?

A pointer is a variable whose value is the address of another variable. Like 
any variable or constant, you must declare a pointer before you can work with
it.

#### 4. If I have a variable declared as `int x`, how do I find out what memory address that variable is stored at?

First initialize a null pointer by doing int * np, and then do np = &x, now np
is set to be the address of the variable x. Finally print it out.

#### 5. If I want a variable `p` that can store the address of an int, what type should I declare `p` to be?

int * p.

#### 6. Just like Java, C++ has a `new` command. But C++ also has a `delete` command that Java does not have. Why do we need `delete` in C++, but not in Java? What is `delete` good for?

Java uses managed memory, programmers can allocate memory by using new operator,and deallocate memory by relying on the garbage collector. Anyway, Java takes
care of memory management for programmers, so it doesn't need to have delete()
method. However, C++ doesn't handle its own memory, the delete() method in 
C++ is to call the destructor of given argument, and returns memory allocated by new back to heap in order to avoid memory leak. 


#### 7. What is one question about C++ that you would like me to explain in class?

What is the best way to learn in order to be proficient on using POINTER in C++?



