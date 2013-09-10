Author
==========
"Monnin, Sebastian", monninse
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
2. defix - working
3. sumSlice - working
4. square - I think it is working
5. listPrimes - working

Questions
=======

#### 1. In C++, the compiler compiles each .cpp file separately, without looking at the others. Explain why this leads to the need for .h files.
        The header declares "what" a class (or whatever is being implemented) will do.This reduces dependencies so that code that uses the header doesn't necessarily need to know all the details
        of the implementation and any other classes/headers needed only for that. This will reduce compilation times and also the amount of recompilation needed when something in the implementation changes.
#### 2. Explain the individual roles of the preprocessor, the compiler, and the linker. What type of inputs do they take? What kind of outputs do they produce? What is the purpose of each?
        A processor is the central unit in a computer the that interprets instructions and carries out the data processing.Its purpose is to pretty much do the thinking for the computer. Its input is instructions and its output is commands to complete those instructions.
        A compiler is a program or software that changes source code to Object code.
        Its purpose is to make the code execuatble on the computer. Its input is source code and its output is object code.
        The Linker takes all of the object files after compilation and connects them all into one file. Its purpose is to put all of the files together so they are runable. Its inputs are .o files. its outputs are one big .o file.
#### 3. What is a "pointer"?
        Pointer is a variable that stores a memory address. 
#### 4. If I have a variable declared as `int x`, how do I find out what memory address that variable is stored at?
        Put the & sign before it.
#### 5. If I want a variable `p` that can store the address of an int, what type should I declare `p` to be?
        int*
#### 6. Just like Java, C++ has a `new` command. But C++ also has a `delete` command that Java does not have. Why do we need `delete` in C++, but not in Java? What is `delete` good for?
        Java doesn't need a delete command because it has garbage collection where C++ does not
#### 7. What is one question about C++ that you would like me to explain in class?
        Why does Miami teach Java to new students and not C++
