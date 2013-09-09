Author
==========
"Bickley, Daniel", bickledb
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

1. prime - This should work. It was fairly straight forward and there was not a real issue when coding.
2. defix - This should work, as long as nothing goes strange with #include<string>.
3. sumSlice - This should work.
4. square - This should work.
5. listPrimes - This should work.

Questions
=======

#### 1. In C++, the compiler compiles each .cpp file separately, without looking at the others. Explain why this leads to the need for .h files.
The compiler needs the .h files to know if certain classes or methods have been defined. Because it looks at .cpp files individually, the compiler does not know if a specific method or class is defined in a different file. The .h files can be used to check if a class or function has been created and defined in a different file.
#### 2. Explain the individual roles of the preprocessor, the compiler, and the linker. What type of inputs do they take? What kind of outputs do they produce? What is the purpose of each?
The compiler looks at .cpp and .h files and examines the code for different tiypes of errors. The compiler first simplifies code into a step by step list of tasks, and then combs through the syntax of the code to make sure nothing has gone wrong. After the compiler does it's job, a new Object file is created, ready for a machine to read.
The prepossor works before a file is compiled, and looks for various errors that can cause the compiler to crash. It looks through .cpp and .h files and prepares them for compilation.
The linker combines all of the files required for a program, and makes them work together. The linker can take .cpp, .h, .asm, and .pas files and links them to .o, or Object files. Then, the program can refer to functions and other objects that are in other files, and even interact with different file formats.
#### 3. What is a "pointer"?
A pointer is a piece of data that associates a variable with the actual data. The pointer can be thought of a path to a specific part of memory. Pointers do not make up and integer's data or a String's data, but instead lead from a variable name directly to a piece of information that has been assigned to that specific variable name.
#### 4. If I have a variable declared as `int x`, how do I find out what memory address that variable is stored at?
You can use the '&' operator, which returns the address of the variable created by a pointer.
#### 5. If I want a variable `p` that can store the address of an int, what type should I declare `p` to be?
You should declare p to be an int*. The '*' operator denotes that the variable stores the address of an int. If 'p' is declared as a regular int, it will not store the address fr the int.
#### 6. Just like Java, C++ has a `new` command. But C++ also has a `delete` command that Java does not have. Why do we need `delete` in C++, but not in Java? What is `delete` good for?
We need 'delete' in C++ to manage data and allow programs to be more efficient. If you do not delete variables or pointers when they are no longer needed the program will slow down and be less efficient. In Java, there was "Garbage Collection" where unused data is disposed of when the program no longer needs it. In C++, it is the programmer's job to manage data leakage and overall efficiency, which could not be done with out 'delete'.
#### 7. What is one question about C++ that you would like me to explain in class?
The difference between #include in C++ and import in Java. At one point when coding I was completely stumped why != and << would not work to compare or print a string variable. I eventually figured out that I needed to use #include<string> instead of just using std::string to use Strings.