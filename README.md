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

1. prime - working
2. defix - working
3. sumSlice - working
4. square - working
5. listPrimes - working

Questions
=======

#### 1. In C++, the compiler compiles each .cpp file separately, without looking at the others. Explain why this leads to the need for .h files.
Functions and variables need to be declared before use, because the compiler reads from the top of the file down. If a function is referenced but never declared, the compiler will not know what that function is or if it even exists. Therefore, the programmer will need to #include the functions (make the declarations) before referencing the functions. This can cause problems with code organization. If there are multiple .cpp files (main source code) that reference functions and variables in each other, there would need to be a lot of declarations in each .cpp file. This would become messy and unreadable, so the declarations are essentially hidden away in the .h (header) files. Then in the .cpp files they only need to #include the header file, and the declarations will still be included. 
#### 2. Explain the individual roles of the preprocessor, the compiler, and the linker. What type of inputs do they take? What kind of outputs do they produce? What is the purpose of each?
The preprocessor is a program, either separate or part of the compiler, that acts before the main compiler. It reads the source code but focuses on special instructions called directives, marked by the symbol #. For example, you use #include to put the contents of one file within another. Next, the compiler acts. Its puropose is to translate the program from the source code computer language into machine language. In other words, it takes the source files and tranforms them into object files. Finally, the linker turns the object files into executable files. The purpose of the linker is to fix references in one file to another by finding which file or object defines the unknown function used.
#### 3. What is a "pointer"?
A pointer stores a memory address, usually of another variable. By pointing to an address in memory, pointers can pass that variable location to a function. The function can then access and modify the data at that memory address.
#### 4. If I have a variable declared as `int x`, how do I find out what memory address that variable is stored at? 
You should use the address-of operator (&) to get the memory address for x, which is an integer represented in hexadecimal.  
#### 5. If I want a variable `p` that can store the address of an int, what type should I declare `p` to be?
The variable p should be declared as type int*, which holds the address of an int. Then p will point to the location in memory where the int is stored.
#### 6. Just like Java, C++ has a `new` command. But C++ also has a `delete` command that Java does not have. Why do we need `delete` in C++, but not in Java? What is `delete` good for?
New and delete are used in dynamic memory allocation, where memory is allocated for use during the runtime of the program. The new command allocates a space in memory for a specific data type and returns a pointer. On the other hand, the delete command frees up the memory address to which a pointer is pointing. Unlike in Java, in C++ you can directly access memory space and change it. Thus it is important to use 'delete' to deallocate memory to prevent a memory leak. Java does not have the delete command because it uses automatic garbage colleciton, so the programmer does not have to manually deallocate space in memory. (Also used http://javabook.compuware.com/content/memory/how-garbage-collection-works.aspx for reference.)
#### 7. What is one question about C++ that you would like me to explain in class?
I am still a bit confused about what to put in the .h file when you create a class. I know we made the helloworld class in class, but I do not understand the syntax or the reason behind the information within the helloworld.h file. 