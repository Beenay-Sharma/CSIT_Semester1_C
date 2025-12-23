//Our first C program
#include <stdio.h>   // Include standard input-output header file  declares stdio functions and during compilation ,compiler knows prototype of functions like printf ,scanf etc.

int main() // Main function - execution of code starts here
{
    printf("Hello, World!\n");   // Print Hello, World! to the terminal
    return 0;  // Return 0 to indicate successful execution
} //` End of main function


/* Note: In C, the main function must return an integer value. Returning 0 typically indicates that the program executed successfully.
 -The #include directive is used to include the contents of a file or library in the program.
 -The \n in the string is an escape sequence that represents a newline character, moving the cursor to the next line after printing.
 -Comments in C are written using // for single-line comments for multi-line comments.
 -To compile this program, you can use a C compiler like GCC with the command: gcc first.c -o first
 -To run the compiled program, use the command: ./first  
 -This program is a simple demonstration of basic C syntax and structure.*/ 


/*Format specifiers
 Q) what are they?
  --> Format specifiers are special characters used in printf and scanf functions to specify the type of data being printed or read. They tell the compiler how to interpret
   and display the data.
    Common format specifiers in C:
    %d or %i : Integer
    %f : Floating-point number
    %lf : Double-precision floating-point number
    %c : Character
    %s : String
    %u : Unsigned integer
    %x or %X : Hexadecimal integer
    %o : Octal integer
    %% : Percent sign
    Example:
    #include <stdio.h>
    int main() {
        int intVar = 42;
        float floatVar = 3.14;
        char charVar = 'A';
        printf("Integer: %d\n", intVar);
        printf("Float: %.2f\n", floatVar);
        printf("Character: %c\n", charVar);
        return 0;
    }

  */    