#include <stdio.h>

int main() {
    int n, i;
    long long factorial; // Use long long to handle large numbers

    printf("==== FACTORIAL CALCULATOR ====\n");
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers!\n");
        return 1;
    }

    //Initialize factorial
    factorial = 1;
    i = 1;

    printf("\nCalculation Steps: \n");
    printf("0! = 1 (by definition)\n");

    // Calculate Factorial using while loop
    while (i <= n)
    {
        factorial = factorial * i;
        printf("%d! =%lld\n", i, factorial);
        i++;
    }

    printf("\n==== RESULT ====\n");
    printf("%d! = %lld\n\n", n, factorial);

    //Show what factorial means
    printf("\nFactorial means:\n");
    printf("%d! = ", n);

    for (i = n; i >= 1; i--) {
        printf("%d", i);
        if (i > 1) 
            printf(" x ");
    }

    printf(" = %lld\n", factorial);
        return 0;


    
}