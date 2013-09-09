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
3. sumSlice - Not working
4. square - Not working
5. listPrimes - Not working

Questions
=======

#### 1. In C++, the compiler compiles each .cpp file separately, without looking at the others. Explain why this leads to the need for .h files.
Because .cpp files access declarations from .h files through #include statements.

#### 2. Explain the individual roles of the preprocessor, the compiler, and the linker. What type of inputs do they take? What kind of outputs do they produce? What is the purpose of each?
A compiler is a program that translates a computer program written in one computer language into an equivalent program written in the computer's native machine language. The compiler takes source code as input, and it outputs binary code. The purpose of compiling is to translate human readable code into machine code, so that linkers can make executable programs. 
A preprocessor is either a separate program invoked by the compiler or part of the compiler itself. The purpose of having a preprocessor is to perform intermediate operations that modify the original source code and internal compiler options before the compiler tries to compile the resulting source code.  
A linker is a program that makes executable files. The linker takes object files as input, and it outputs executable programs. The purpose of having a linker is to to resolve references to undefined symbols by finding out which other object defines a symbol in question, and replacing placeholders with the symbol's address.  

#### 3. What is a "pointer"?
A pointer is a variable whose value is the address of another variable.

#### 4. If I have a variable declared as `int x`, how do I find out what memory address that variable is stored at?
std::cout << &x << std::endl; it would show a bunch of code on screen, and that's the address of the variable.

#### 5. If I want a variable `p` that can store the address of an int, what type should I declare `p` to be?
A pointer. I should declare like this: int* p;

#### 6. Just like Java, C++ has a `new` command. But C++ also has a `delete` command that Java does not have. Why do we need `delete` in C++, but not in Java? What is `delete` good for?
Because we have garbage collector in Java, so it deallocate unused memory for us. However, we do not have it in C++, so we have to deallocate unused memory by ourself. When we use "delete" in C++, the memory that store new operator objects get freed up.Any allocation of memory needs to be properly deallocated or a leak will occur and our programs won't run efficiently.  

#### 7. What is one question about C++ that you would like me to explain in class?
Can you explain the use of pointers? I'm still confused after I read the material.