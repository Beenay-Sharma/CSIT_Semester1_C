//program to find factorial of a number 
#include <stdio.h>  
int main() {  
    int number, i;  
    unsigned long long factorial = 1;  

    
    printf("Enter a positive integer: ");  
    scanf("%d", &number);  

    
    if (number < 0) {  
        printf("Error! Factorial of a negative number doesn't exist.\n");  
    } else {  
        
        for(i = 1; i <= number; ++i) {  
            factorial *= i;  
        }
        printf("Factorial of %d = %llu\n", number, factorial);  
    }  

    return 0;  
}

//program to check whether a number is prime or not
#include <stdio.h>
int main() {
    int number, i, isPrime = 1;

    
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    
    if (number <= 1) {
        isPrime = 0; 
    } else {
        
        for (i = 2; i <= number / 2; ++i) {
            if (number % i == 0) {
                isPrime = 0; 
                break;
            }
        }
    }

    
    if (isPrime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}

//program to generate Fibonacci series up to n terms
#include <stdio.h>
int main() {
    int n, first = 0, second = 1, next, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series:\n");

    for (i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d\n", next);
    }       
    return 0;
}




