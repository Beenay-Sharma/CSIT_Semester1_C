//Functions in C
#include <stdio.h>
// Function prototype (declaration)


int main() {
    int num1 = 5, num2 = 10;
    int sum;

    // Calling the add function and storing the result
    sum = add(num1, num2);
    printf("Sum of %d and %d is: %d\n", num1, num2, sum);



    return 0;
}
// Function definition
int add(int a, int b) {
    return a + b; // Return the sum of a and b
}

/* Note:

    - Functions help in modularizing the code, making it more organized and reusable.
    - The function prototype is optional if the function is defined before its first use, but it's good practice to include it for clarity.
    - The return type of a function specifies what type of value the function will return. If a function does not return a value, use 'void' as the return type.
    - Parameters are variables that act as inputs to functions. They are defined in the function declaration and definition.
    - Functions can be called from other functions, including from within themselves (recursion).
*/





