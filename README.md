pp
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

1. prime - works
2. defix - works
3. sumSlice - works
4. square - works
5. listPrimes - works

Questions
=======

#### 1. In C++, the compiler compiles each .cpp file separately, without looking at the others. Explain why this leads to the need for .h files.

Because .cpp files are compiled seperately that leads to the need for .h files to essentially connect the files used in a program.
Headers contain mostly declarations, to declare to the compiler what is available at link time. "Header files are not compiled, but rather provided to other parts of the program through the use of #include."



#### 2. Explain the individual roles of the preprocessor, the compiler, and the linker. What type of inputs do they take? What kind of outputs do they produce? What is the purpose of each?

Preprocessor - the role is to preform intermediate operations before the compiler tries to compile the resulting source code. The input is from the original source code and internal compiler options (it modifies them). The preprocessor parses directives; Preprocessor directives direct the preprocessor on how it should process the source code, and compiler directives direct the compiler on how it should modify internal compiler options. 	

Compiler - translates the programs written in programming languages into the machines native language so they can be executed. Input of the programming language and then through lexical analysis the compiler converts the code into tokens which will actually be used.  

Linker - the linker resolves references to undefined symbols by finding out which other object defines a symbol in question, and replacing placeholders with the symbol's address, thus solving linkage problems. takes objects from a librry. imput of undefined symbols. Outputs the symbol's address.

#### 3. What is a "pointer"?

a variable that stores a memory address.

#### 4. If I have a variable declared as `int x`, how do I find out what memory address that variable is stored at?

by using the "address of" &x.

#### 5. If I want a variable `p` that can store the address of an int, what type should I declare `p` to be?
int* p.

#### 6. Just like Java, C++ has a `new` command. But C++ also has a `delete` command that Java does not have. Why do we need `delete` in C++, but not in Java? What is `delete` good for?

it is good for clearing dynamic memory. by deleting before exiting, you make the memory allocation more efficient. I believe we do not need the delete in java is because it has a garbage collector.
#### 7. What is one question about C++ that you would like me to explain in class?

The true benefit of pointers. I would like it a little easier explained to me how they can be used to make things more efficient. It's a tad difficult to completely wrap my head around their benefits.


