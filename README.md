Author
==========
"Proctor, Patrick", proctopj
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

1. prime - According to the tester and my own independent work, this method functions perfectly.
2. defix - According to the tester and my own independent work, this method functions perfectly.
3. sumSlice - According to the tester and my own independent work, this method functions perfectly.
4. square - According to the tester and my own independent work, this method functions perfectly.
5. listPrimes - This works according to the tester, although I will admit I still have a mental disconnect as to why this works. Abstracting an array pointer and using it elsewhere to call individual
                elements is certainly not the easiest reasoning to hash out.

Questions
=======

#### 1. In C++, the compiler compiles each .cpp file separately, without looking at the others. Explain why this leads to the need for .h files.
	
The simplest explanation for the need of header files is this: C++ needs a way to link together any .cpp files which make references/calls to other.cpp files. Since
the compiler itself lacks the infrastructure to view the entire project all at once (as in Java) it uses a linker at compile time which fills in any holes at 
pre-processing. The linker uses the header files to "tell" each .cpp file that it can compile because all dependent objects/variables/methods are properly defined and
compiled.

#### 2. Explain the individual roles of the preprocessor, the compiler, and the linker. What type of inputs do they take? What kind of outputs do they produce? What is the purpose of each?

The preprocessor takes source code and outputs source code which has been modified to fill in "using 'xyz'" statements with proper variable references. Its main function
is a "code cleanup" tool, which functions much like a refined "find and replace all" function.

The compiler accepts source code and converts it to object/assembly code to be run on the machine. It checks for syntactically correct arguments as well as proper
interactions within the methods (inside and outside a particular class). Its purpose is to tell the programmer if he/she has constructed a proper program, and then if
so, it converts that program into runnable code.

The linker is used to fill in the referential holes left behind in the main stages of preprocessing and compiling. Since each class/.cpp file is compiled separately,
they don't actually "know" that their symbiotic independent elements exist. The programmer can put in a reference to one .cpp file method, which will allow his current
.cpp file to compile, but without the linker, at runtime he would not have the .cpp files interacting with one another, and a runtim error would occur. The linker uses
the header files and other information to properly string together arguments between .cpp files. If a file is missing, the linking stage will send an error to the IDE
telling the user so. The purpose of the linker is to do what smarter language IDEs do automatically in their macroscopic environments at all times, but to do it once at
compile time.

#### 3. What is a "pointer"?

A pointer is a variable which stores the memory address of another variable. Pointers are dynamic in form (i.e., one can generate a memory address for any other variable 
regardless of type.

#### 4. If I have a variable declared as `int x`, how do I find out what memory address that variable is stored at?

You use the "&" operator, i.e. "&x" and print it to the screen or otherwise store it for later use in the program using the "*" operator to cast the storage variable 
to an "int*".

#### 5. If I want a variable `p` that can store the address of an int, what type should I declare `p` to be?

int* p = &x; Would be a proper form of sample code for this purpose, where x is any int.

#### 6. Just like Java, C++ has a `new` command. But C++ also has a `delete` command that Java does not have. Why do we need `delete` in C++, but not in Java? What is `delete` good for?

Where Java has Garbage Collection which runs dynamically at all execution times of the program which prevents memory loss/leakage, C++ leaves that task to the programmer. The 'delete' 
and 'delete []' functions both clear up currently occupied memory locations, but in subtly different ways. 

#### 7. What is one question about C++ that you would like me to explain in class?

Why does C++ not have multi-parent inheritance as C# does? What is the advantage/purpose for languages like C++ and Java to not allow multi-parent inheritance?