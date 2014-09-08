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

1. prime - TODO
2. defix - TODO
3. sumSlice - TODO
4. square - TODO
5. listPrimes - TODO

Questions
=======

#### 1. In C++, the compiler compiles each .cpp file separately, without looking at the others. Explain why this leads to the need for .h files.
			.h files are needed to link the declarations/definitions of functions and variables that have been declared/defined in another .cpp file to the .cpp file that is currently being compiled. Since the compiler has no idea what exists outside of the current .cpp file it will not be able to know what the definition of some symbol is unless it is in the .cpp file being compiled. By including .h files at the top of a .cpp file the compiler copy/pastes what is in the .h file into the spot where you have included the .h file in the .cpp file. This allows the compiler to know what any declarations/definitions are that were made outside of the current .cpp but are necessary to compile the current .cpp file. 
#### 2. Explain the individual roles of the preprocessor, the compiler, and the linker. What type of inputs do they take? What kind of outputs do they produce? What is the purpose of each?
			The compiler is a computer program that is used to translate a computer program that has been written in a particular coding language into the same program only written in machine language. The computer does not know what to do with something written in c++, it can only read things written in machine language. The output of the compiler is called an object file, which holds the lines of code (written in machine language) for the compiled file. The preprocessor is needed to include .h files. It works before the actual compilation takes place. The preprocessor runs through the directives and include statements at the top of a .cpp file and copy/pastes the contents of the .h files into the proper places. The linker is needed at the end of a compilation. It looks at the new object file provided by the compiler and determines what references the file makes to outside sources and then links all outside references with the object file.
#### 3. What is a "pointer"?
			A pointer is a bit like a pseudo variable. You declare a pointer much like other variables but there is a big difference. Upon declaration a pointer does not allocate memory for it to store data. It instead points to the location of some other allocated block of memory.
#### 4. If I have a variable declared as `int x`, how do I find out what memory address that variable is stored at?
			To find the memory address of int x you would need to create a pointer that points to the variable x. This looks like "int* pointerOfX = &x;". This line of code creates a new pointer of type int and it references int x.
#### 5. If I want a variable `p` that can store the address of an int, what type should I declare `p` to be?
			P should be declared as type int because that is what type you are going to be pointing to.
#### 6. Just like Java, C++ has a `new` command. But C++ also has a `delete` command that Java does not have. Why do we need `delete` in C++, but not in Java? What is `delete` good for?
			The delete command is needed in c++ because it allows you to deallocate memory that was previously allocated. This is not needed in Java because Java does not give the ability to allocate memory to the programmer and therefore would not need the ability to delete memory allocations either.
#### 7. What is one question about C++ that you would like me to explain in class?
			How well does c++ work for networking programs? In CSE 283 (Networking) we use java to write our simple networking applications but would c++ be just as viable of a language to use?