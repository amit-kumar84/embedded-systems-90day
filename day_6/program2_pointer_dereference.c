#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;

    printf("===== POINTER DEREFERENCE =====\n");

    printf("Variable x:\n");
    printf("Value of x = %d\n", x);
    printf("Address of x = %p\n", (void *)&x);
    printf("Size: %lu bytes\n\n", sizeof(x));

    printf("==== POINTER ptr ====\n");
    printf("Pointer ptr points to contains address = %p\n", (void *)ptr);
    printf("Size of pointer ptr = %lu bytes\n\n", sizeof(ptr));

    printf("==== DEREFERENCING POINTER ====\n");
    printf("*ptr (dereferenced value) = %d\n", *ptr);
    printf("(This is the value at the address stored in ptr points to)\n\n");

    printf("===== MODIFY THROUGH POINTER =====\n");
    printf("Before modification: x = %d\n", x);
    *ptr = 20; // Change value of x through pointer
    printf("After modification %d\n", x);
    printf("*ptr = %d\n\n", *ptr);

    printf("==== CHAIN OF ACCESS ====\n");
    printf("x directly = %d\n", x);
    printf("Through pointer: %d\n", *ptr);
    printf("Through address: %p\n", (void*) &x);
    printf("Through ptr address: %p\n", (void*) ptr);
    printf("All show same value/address\n");

    printf("\n ===== VISUAL REPESENTATION =====\n");
    printf("Memory:\n");
    printf(" Address      | Value\n");
    printf("  %p  |  x = %d\n", (void*)&x, x);
    printf("\n Pointer:\n");
    printf(" ptr = %p (points to x's address )\n", (void*)ptr);
    printf(" *ptr = %d (value at address ptr points to)\n", *ptr);

    return 0;
}