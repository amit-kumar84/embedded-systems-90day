#include <stdio.h>

int main() {
    int a = 1; // true
    int b = 0; // false

    printf("==== LOGICAL OPERATORS ====\n");
    printf("a = %d (true), b = %d (false)\n\n", a, b);

    //Logical AND Operator (&&)
    printf("a && b (AND): %d\n", a && b); // 0 (False)
    printf("a && a (AND): %d\n", a && a); // 1 (True)

    //Logical OR Operator (||)
    printf("a || b (OR): %d\n", a || b); // 1 (True)
    printf("b || b (OR): %d\n", b || b); // 0 (False)

    //Logical NOT Operator (!)
    printf("!a (NOT): %d\n", !a); // 0 (False)
    printf("!b (NOT): %d\n", !b); // 1 (True)

    // Complex Example
    printf("\n==== Complex Example ====\n");
    int age = 25;
    int has_license = 1; 

    printf("Age: %d, Has License: %d\n\n", age, has_license);
    printf("Can drive (age >= 18 && has_license): \n");
    printf("%d\n", (age >= 18) && has_license); // 1 (True)

    printf("Can work as a driver (age >= 18 && has_license AND age <= 70): \n");
    printf("%d\n", (age >= 18) && has_license && (age <= 70)); // 1 (True)

    return 0;


}