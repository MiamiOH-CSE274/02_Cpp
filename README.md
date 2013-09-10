Author
==========
"Decker, Benjamin", deckerbd
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

1. prime - Hopefully; was unable to compile locally on PC due to VS2010 issues.
2. defix - See above.
3. sumSlice - See above.
4. square - See above.
5. listPrimes - See above.

Questions
=======

#### 1. In C++, the compiler compiles each .cpp file separately, without looking at the others. Explain why this leads to the need for .h files.
 
Essentially, you are including your declarations for the methods within the .h (header) file. This not only improves build times, but also avoids marking everything as "inline", as well as linking code without have the source for each definition.
 
#### 2. Explain the individual roles of the preprocessor, the compiler, and the linker. What type of inputs do they take? What kind of outputs do they produce? What is the purpose of each?
 
Preprocessor: Input file-> Preprocessor -> Preprocessor Output File
Preprocessors will, in very basic terms, find processor statements (such as #define and #include) and replace them with the code from the given area.
 
Compiler: Preprocessor Output File -> Compiler -> Object File
The compiler will take the preprocessor's output file, then generates machine code. This code will contain sybols, such as printf, but the actual code for printf will not be in the code.
 
Linker: Object File -> Linker -> Exe File
The linker will take the object code and bind the missing function code to the symbols within its ability to.

#### 3. What is a "pointer"?

A pointer is a data type whose value refers to another value stored elsewhere in the memory using its address.

#### 4. If I have a variable declared as `int x`, how do I find out what memory address that variable is stored at?

If you wanted to output it, it'd be something like:

int example = new int[10];
int << *example << endl;

#### 5. If I want a variable `p` that can store the address of an int, what type should I declare `p` to be?

A char.

#### 6. Just like Java, C++ has a `new` command. But C++ also has a `delete` command that Java does not have. Why do we need `delete` in C++, but not in Java? What is `delete` good for?

Java's garbage collector generally does a good job of catching anything that is no longer in use, and will delete things as need be. In C++, generally if you lose a pointer to some object, you form a memory leak, so if you want to delete something, you better be sure to use `delete`.

#### 7. What is one question about C++ that you would like me to explain in class?

Why does Visual Studio hate anything with a pulse?

Outside sources for each question:
1: http://stackoverflow.com/questions/1305947/why-does-c-need-a-separate-header-file
2: http://comsci.liu.edu/~murali/c/PreprocessCompileLink.htm
3: http://en.wikipedia.org/wiki/Pointer_(computer_programming)
4: http://stackoverflow.com/questions/6787290/getting-the-address-of-a-pointer

