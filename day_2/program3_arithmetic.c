#include <stdio.h>

int main() {
    int a = 20;
    int b = 7;

    printf("==== ARITHMETIC OPERATIONS ====\n");
    printf("a = %d, b = %d\n", a, b);

    //Addition
    printf("Addition (a + b) = %d\n", a + b);

    //Subtraction
    printf("Subtracton (a - b) = %d\n", a-b);

    //Multiplication
    printf("Multiplication (a * b) = %d\n", a * b);
    
    //Division ( Integer Division )
    printf("Division (a / b) = %d\n", a / b);

    //Modulus (Remainder)
    printf("Modulus (a %% b) = %d\n", a % b);

    // Order of Operations
    printf("\n==== ORDER OF OPERATIONS ====\n");
    int result = 10 + 5 * 2;
    printf("10 + 5 * 2 = %d (Multiplication first)\n", result);

    result = (10 + 5) *2;
    printf("(10 + 5) * 2 = %d (Parentheses first)\n", result);

    // Increment and Decrement
    printf("\n==== INCREMENT AND DECREMENT ====\n");
    int counter = 5;
    printf("Initial Counter Value = %d\n", counter);
    counter++; //Increment
    printf("After Increment (Counter++) = %d\n", counter);
    counter--; //Decrement
    printf("After Decrement (Counter--) = %d\n", counter);
    return 0;
}