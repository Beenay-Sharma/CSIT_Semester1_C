# C Basics

In this folder, we're going to  read basics of C .The purpose of this repository is to provide practical hands-on experience with C concepts and to serve as a reference for begineers.

## Topics Covered
 - Introduction to C
 -Data types and variables
 -Operators 
 -Conditional Statements(if,elif,else,switch)
 -Loops(for,while,do-while)
 -Functions 


# Pointers,Memory management and advanced topics like Linked lists will be learned in seperate folders.


Starting..

# History of C 
 C was developed by Dennis Ritchie at Bell Labs in 1972 as an improvement over the B language, which itself was influenced by BCPL. It was created to write the UNIX operating system, providing low-level access to memory while maintaining high-level language features. Before C, programming was mostly done in assembly or early languages like B; after C, many languages like C++, Java, and C# were influenced by its syntax and structure.

About C:
 C is a general-purpose, procedural programming language that allows system-level programming and can directly interact with hardware. Its pros include efficiency, speed, portability, and control over memory, while cons include lack of built-in safety features and manual memory management. With C, you can develop operating systems, compilers, embedded systems, games, and other software that requires direct hardware interaction and performance optimization.


# Running of C program
we write c programs in human readable way so our computer system dont understand it .Firstly we need to compile (converting our code into 1 and o that machine understand) using compiler like gcc and clang .
# Compiler Cycle:
 The cycle occurs as follow:

 Preprocessing: Handles #include, #define, and other directives. Produces an expanded source code.
 Compilation: Converts preprocessed code into assembly code (human-readable CPU instructions).
 Assembly: Translates assembly code into object code (.o files), which is machine code but not fully executable.

 Linking:
 Links our object code with libraries, like libc (standard C library).
 Resolves function calls (printf, scanf, etc.) to actual machine instructions.
 Produces the executable file (a.out or custom name).

3. Execution
When you run the executable:
-The OS loader loads the program into memory.
- linked libraries (like libc) are loaded into memory.
-CPU executes instructions line by line.
-Program interacts with hardware via OS services (e.g., writing to screen, reading input, memory allocation).
-The program runs until it terminates, returning control to the OS.

# Summary
Source Code (.c) 
    ↓ Preprocessor 
Expanded Code 
    ↓ Compiler 
Assembly Code 
    ↓ Assembler 
Object Code (.o) 
    ↓ Linker (+libc, other libs) 
Executable (.out) 
    ↓ OS Loader 
Program Runs → Interacts with Hardware/System 

       


