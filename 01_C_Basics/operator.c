/* Operators in C:
    Operators are special symbols that perform operations on variables and values. C supports a variety of operators, which can be categorized as follows:
    
    1. Arithmetic Operators:
         - Addition (+)
         - Subtraction (-)
         - Multiplication (*)
         - Division (/)
         - Modulus (%)
    
    2. Relational Operators:
         - Equal to (==)
         - Not equal to (!=)
         - Greater than (>)
         - Less than (<)
         - Greater than or equal to (>=)
         - Less than or equal to (<=)
    
    3. Logical Operators:
         - Logical AND (&&)
         - Logical OR (||)
         - Logical NOT (!)
    
    4. Bitwise Operators:
         - AND (&)
         - OR (|)
         - XOR (^)
         - NOT (~)
         - Left shift (<<)
         - Right shift (>>)
    
    5. Assignment Operators:
         - Assignment (=)
         - Add and assign (+=)
         - Subtract and assign (-=)
         - Multiply and assign (*=)
         - Divide and assign (/=)
         - Modulus and assign (%=)
    
    6. Increment and Decrement Operators:
         - Increment (++)
         - Decrement (--)
    
    Example:
    */
    #include <stdio.h>
    int main() {
        int a = 10, b = 5;
        int sum, difference, product, quotient, remainder;
        int isEqual, isGreater;
        int logicalAnd, logicalOr;
        int bitwiseAnd, bitwiseOr;
        
        // Arithmetic Operations
        sum = a + b;
        difference = a - b;
        product = a * b;
        quotient = a / b;
        remainder = a % b;

        // Relational Operations
        isEqual = (a == b);
        isGreater = (a > b);

        // Logical Operations
        logicalAnd = (a > 0 && b > 0);
        logicalOr = (a > 0 || b < 0);

        // Bitwise Operations
        bitwiseAnd = a & b;
        bitwiseOr = a | b;

        // Print results
        printf("Arithmetic Operations:\n");
        printf("Sum: %d\n", sum); 
        printf("Difference: %d\n", difference);
        printf("Product: %d\n", product);
        printf("Quotient: %d\n", quotient);
        printf("Remainder: %d\n", remainder);

        printf("\nRelational Operations:\n");
        printf("Is Equal: %d\n", isEqual);
        printf("Is Greater: %d\n", isGreater);

        printf("\nLogical Operations:\n");
        printf("Logical AND: %d\n", logicalAnd);
        printf("Logical OR: %d\n", logicalOr);

        printf("\nBitwise Operations:\n");
        printf("Bitwise AND: %d\n", bitwiseAnd);
        printf("Bitwise OR: %d\n", bitwiseOr);

        return 0;
    }
/* Note:
    - The result of relational and logical operations is either 1 (true) or 0
        (false).
    - Bitwise operations work on the binary representation of integers.
    - Always ensure to use the correct operator for the intended operation to avoid unexpected results.
    
*/

   
