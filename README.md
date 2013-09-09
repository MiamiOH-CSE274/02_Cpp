Author
==========
"Blase, Douglas", blasedd
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

1. prime - I think prime is working as it should be, especially because the logic of the code makes sense.
2. defix - The defix() works correctly, especially seeing as important test cases passed the tester method.
3. sumSlice - sumSlice() works, now that I fixed my errors in the for loop parameters.
4. square - I tested square(0) - square(5) and received expected results, so I believe this method works.
5. listPrimes - This method should work as long as my prime() works.

Questions
=======

#### 1. In C++, the compiler compiles each .cpp file separately, without looking at the others. Explain why this leads to the need for .h files.

The .h files (header files) are the links between the .cpp files that would prevent the compiler from complaining about missing code if it tried to compile the entire program at once.

#### 2. Explain the individual roles of the preprocessor, the compiler, and the linker. What type of inputs do they take? What kind of outputs do they produce? What is the purpose of each?

The preprocessor is called upon by the compiler to make changes to the source code before the compiler attempts to compile the code. Specifically, the preprocessor will look at preprocessor directives, which instruct the preprocessor how to evaluate the source code, and compiler directives, which show the compiler how it should change its internal compiler options.

The compiler itself translates the code programmers write into a language the computer actually understands. Therefore, the compiler takes in the source code file and turns it into an object file, which is output to the computer in its native language.

The linker resolves all the loose ends by connecting/combining the object files (input) that were produced by the compiler with whatever libraries are necessary to create a program that runs (output - the executable file).

#### 3. What is a "pointer"?

A pointer is a variable that contains the memory address of whatever it is referring to.

#### 4. If I have a variable declared as `int x`, how do I find out what memory address that variable is stored at?

A pointer variable (int* locationOfX) could be declared that equals the memory location of x (locationOfX = &x).

#### 5. If I want a variable `p` that can store the address of an int, what type should I declare `p` to be?

`p` should be declared to be a pointer.

#### 6. Just like Java, C++ has a `new` command. But C++ also has a `delete` command that Java does not have. Why do we need `delete` in C++, but not in Java? What is `delete` good for?

We need `delete` in C++ because Java does not give the programmer access to manipulating the memory addresses of variables, not to mention that Java has a garbage collector, which would take care of the deleting for the user. C++ does not have these features, so a `delete` command is necessary. `Delete` is good for freeing up memory for a program. The data is not destroyed, but is just no longer held in its previous memory address.

#### 7. What is one question about C++ that you would like me to explain in class?

I would like to see the namespace concept explained again (what it means, why it's used, etc.)