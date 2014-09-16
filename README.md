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

1. prime - Yes, it's working. My loop is a bit odd, but it works efficiently, I guarantee it. The for-loop in this method starts at 3, stops at n/2, and steps by two. I explained why this is in a comment section above the method. The only problem I have with my own code is that I had to check 1, 2, and 5, which I wish I didn't have to do, but these checks are necessary for my... let's say unique for-loop.
2. defix - This method was simple, I completed it in two lines. It works fine.
3. sumSlice - Yes, it works just as it is supposed to.
4. square - I like this one, the little ASCII-type drawings are neat. Mine works.
5. listPrimes - Working fine, sir

Questions
=======

#### 1. In C++, the compiler compiles each .cpp file separately, without looking at the others. Explain why this leads to the need for .h files.
We can easily #include any header file and allude to it in our .cpp files. Header files are for storing little methods or declarations to save space in .cpp files, so we can just reference the relevant .h file when needed.

#### 2. Explain the individual roles of the preprocessor, the compiler, and the linker. What type of inputs do they take? What kind of outputs do they produce? What is the purpose of each?
The preprocessor directs the compiler on how to process the source code. The compiler can also hold directives to header files and C++ Standard Library (classes, etc.) using the preprocessor (example: #include uses preprocessor directives).
The compiler translates source code from programming language (source code) to the computer's native language. It translates our code to something the computer can read.
The linker makes executable files and deals with file/class/object references and links from one place to another.

#### 3. What is a "pointer"?
A pointer object "points" to another object by storing the address of that object. These are denoted by an asterisk next to the variable type in declaration.

#### 4. If I have a variable declared as `int x`, how do I find out what memory address that variable is stored at?
By printing out &x like so: std::cout << x << "," << &x; This would print out "x,[address of x]".

#### 5. If I want a variable `p` that can store the address of an int, what type should I declare `p` to be?
A pointer: int* p

#### 6. Just like Java, C++ has a `new` command. But C++ also has a `delete` command that Java does not have. Why do we need `delete` in C++, but not in Java? What is `delete` good for?
In c++, as long as a variable is being pointed at, it is using memory to store the address. The delete command is to free up the space used by pointing to objects.

#### 7. What is one question about C++ that you would like me to explain in class?
How can make Call of Duty