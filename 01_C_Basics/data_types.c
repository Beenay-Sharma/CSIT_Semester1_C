/* Data types in C :
  C is a statically typed language, meaning that variable types must be declared before use.
    - Integer types: int, short, long, long long  (size of int=4 bytes) 
    - Floating-point types: float, double, long double (size of float=4 bytes, double=8 bytes, long double=12 bytes or 16 bytes depending on the system)
    - Character type: char (size of char=1 byte)
    - Void type: void (represents no value) 
    - C also supports derived data types like arrays, pointers, structures, and unions.   */


    //Example:
    
    #include <stdio.h>
    int main() {
        int integerVar = 10;               // Integer variable
        float floatVar = 5.5;            // Floating-point variable
        double doubleVar = 10.99;         // Double-precision floating-point variable
        char charVar = 'A';               // Character variable

        // Print the values and sizes of each data type
        printf("Integer: %d, Size: %zu bytes\n", integerVar, sizeof(integerVar));
        printf("Float: %.2f, Size: %zu bytes\n", floatVar, sizeof(floatVar));
        printf("Double: %.2lf, Size: %zu bytes\n", doubleVar, sizeof(doubleVar));
        printf("Character: %c, Size: %zu bytes\n", charVar, sizeof(charVar));

        return 0;
    }
/* Note:
    - The sizeof operator is used to determine the size of a data type or variable in bytes.
    - The %zu format specifier is used to print size_t values returned by sizeof.
    - Floating-point numbers can be printed with specific precision using format specifiers like %.2f
    - Always ensure to use the correct format specifier corresponding to the data type when using printf or scanf functions.
    - C17 standard introduced some improvements and clarifications to the C language, but the basic data types remain consistent with previous standards.
*/
 