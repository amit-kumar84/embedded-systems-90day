#include <stdio.h>

void increment(int *ptr) {
    (*ptr)++; // Increment the value at the address pointed to by ptr


}

void swap(int *a, int *b) {
    int temp = *a; // Store the value at address a in temp
    *a = *b;       // Assign the value at address b to address a
    *b = temp;    // Assign the value in temp to address b
}

int main() {
    printf("===== PASS BY REFERENCE USING POINTERS =====\n");

    // Example 1: Incrementing through pointer
    printf("---- EXAMPLE 1: INCREMENTING ----\n");
    int x = 10;
    printf("Before increment: x = %d\n", x);
    increment(&x); // Pass the address of x
    printf("After increment: x = %d\n", x);
    printf("--------------------------\n");

    // Example 2: Swapping values through pointers
    printf("---- EXAMPLE 2: SWAPPING ----\n");
    int a = 5, b = 10;
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b); // Pass the addresses of a and b
    printf("After swap: a = %d, b = %d\n", a, b);
    printf("--------------------------\n");

    // Example 3: Multiple variables
    printf("---- EXAMPLE 3: MULTIPLE VARIABLES ----\n");
    int p = 300, q = 400, r = 500;
    printf("Before increment: p = %d, q = %d, r = %d\n", p, q, r);
    increment(&p);
    increment(&q);
    increment(&r);
    printf("After increment: p = %d, q = %d, r = %d\n", p, q, r);

    printf("--------------------------\n");

    printf("\n===== WHY PASS BY REFERENCE? =====\n");
    printf("1. Modify original variables\n");
    printf("2. Return multiple values\n");
    printf("3. Efficient (no copying large data)\n");
    printf("4. Pass by reference in function signature\n");
    return 0;
}