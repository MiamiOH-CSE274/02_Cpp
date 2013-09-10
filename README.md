Author
==========
"Harvey, Steven", harveysd
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

1. prime -Yes
2. defix - Yes
3. sumSlice - Yes
4. square - Yes, and if you run my personal main.cpp it will print out squares ranging from 0x0 to 5x5 to show that the square function works.
5. listPrimes - Yes

Questions
=======

#### 1. In C++, the compiler compiles each .cpp file separately, without looking at the others. Explain why this leads to the need for .h files.

	If we didn't have the .h files the program would have no idea where the methods or data members that it needed where at. The .h files explain the name of each class, each kind of data type, and which methods each class has.

#### 2. Explain the individual roles of the preprocessor, the compiler, and the linker. What type of inputs do they take? What kind of outputs do they produce? What is the purpose of each?

	The preprocessor takes the original source code and adds all the headers, and predefined directives. It takes in source code and outputs tokenized source code.
	The compiler then takes the tokenized source code and compiles it into machine code.
	The Linker will take the machine code, add any static libraries to it, and then package it as an .exe file to be ran.

#### 3. What is a "pointer"?

	A pointer is simply a reference to something else. They come in handy for instances where we can't pass something as an argument, but we need to work with that piece of information. We can create a pointer to it, and then pass that pointer to where ever we need to. I like to think of it like this: when you drive up to a place that has valet, you don't give him your car; you give him your car key. The key acts as a pointer in this instance because the key itself is useless, but it does lead you to the car.

#### 4. If I have a variable declared as `int x`, how do I find out what memory address that variable is stored at?
	
	You would use the address-of operator '&' i.e. int x = &y;
	
#### 5. If I want a variable `p` that can store the address of an int, what type should I declare `p` to be?

	You would want to declare p to be an int pointer by using 'int* p =' .

#### 6. Just like Java, C++ has a `new` command. But C++ also has a `delete` command that Java does not have. Why do we need `delete` in C++, but not in Java? What is `delete` good for?

	We need  a delete button in C++ because we need to take care of garbage collection on our own. We don't have one in Java because the compiler and virtual machine take car of it for us.
	The 'delete' command removes any references to a given memory location; thus allowing us to keep memory usage low, and speed up our programs.

#### 7. What is one question about C++ that you would like me to explain in class?
	I would like to have some better informatino on pointers, inheritance, and polymorphism because they can get a little fuzzy sometimes. It has also been almost two years since my last coding class.