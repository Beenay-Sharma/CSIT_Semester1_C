//Conditional Statements in C
#include <stdio.h>
int main() {
    int number;

    ///Taking Input from user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // If-Else statement
    if (number > 0) {
        printf("The number %d is positive.\n", number);
    } 
    else if (number < 0) {
        printf("The number %d is negative.\n", number);
    } 
    else {
        printf("The number is zero.\n");
    }

    // Switch statement
    int day = 3; // Example day value
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day\n");
    }

    return 0;
}
/* Note:
 - The if-else statement allows for conditional execution of code blocks based on boolean expressions.
 - The switch statement is used for multi-way branching based on the value of a variable, typically an integer or character.
 - Each case in the switch statement must end with a break statement to prevent fall-through to subsequent cases.
 - The default case in a switch statement is optional and executes if none of the specified cases match.
 - Ensure to include the stdio.h header file for input-output functions like printf and scanf.
*/   