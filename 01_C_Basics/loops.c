//Loops in C
#include <stdio.h>
int main() {
    int i;

    // For loop
    printf("For loop:\n"); // Print numbers from 1 to 5
    for (i = 1; i <= 5; i++)  // Initialization; Condition; Increment
     {
        printf("%d \n", i);
          // Print current value of i
    }
    
    
    // While loop
    printf("While loop:\n");
    i = 1;
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // Do-While loop
    printf("Do-While loop:\n");
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);
    printf("\n");

    return 0;
}
/* Note:
    - The for loop is typically used when the number of iterations is known beforehand. It consists of initialization, condition, and increment/decrement in a single line.     
    - The while loop is used when the number of iterations is not known and depends on a condition. It checks the condition before executing the loop body.
    - The do-while loop is similar to the while loop, but it guarantees that the
        loop body is executed at least once, as the condition is checked after the execution.
    - Always ensure that the loop has a terminating condition to avoid infinite loops.
    - Use loops to iterate over arrays, process data, and perform repetitive tasks efficiently.
*/

    
