#include <stdio.h>

int main() {
    int n, i, sum;

    printf("==== SUM OF FIRST N NATURAL NUMBERS ====\n");
    printf("Enter N: ");
    scanf("%d", &n);

    // Initialize variables
    i = 1;
    sum = 0;

    printf("\nCalculation Process:\n");

    // While loop
    while (i <= n) {
        printf("Step %d: sum = %d + %d = %d\n", i, sum, i, sum + i);
        sum = sum + i; // Add current number to sum
        i++; // Increment counter
    }

    printf("\n==== RESULT ====\n");
    printf("Sum of first %d natural numbers = %d\n\n", n, sum);

    // Verify using formula: n*(n+1)/2
    int formula_result = n * (n + 1) / 2;
    printf("Verification using formula n*(n+1)/2:\n");
    printf("%d * (%d + 1) /2 = %d\n\n", n, n, formula_result);

    if (sum == formula_result) {
        printf("Callculation verified successfully!\n\n\n\n");

    }

    return 0;

    
}