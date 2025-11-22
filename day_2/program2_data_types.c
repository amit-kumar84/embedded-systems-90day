#include <stdio.h>
int main() {
    // Decleration of all Data Types in C
    printf("==== Data Types in C ====\n");


    // Integer Data Types
    int x = 100;
    short y = 50;
    long z = 100000;

    // Floating Point Data Types
    float a = 5.65;
    double b = 3.1234553344;

    // Character Data Type
    char c = 'C';

    // Print Data Types
    printf("Data Type Sizes:\n");
    printf("Size of (int):== %lu bytes\n", sizeof(int));
    printf("Size of (short):== %lu bytes\n", sizeof(short));
    printf("Size of (long):== %lu bytes\n", sizeof(long));
    printf("Size of (float):== %lu bytes\n", sizeof(float));
    printf("Size of (double):== %lu bytes\n", sizeof(double));
    printf("Size of (char):== %lu bytes\n", sizeof(char));

    // Print Values
    printf("\n==== VARIABLE VALUE ====\n");
    printf("Int x = %d\n", x);
    printf("Short  = %d\n", y);
    printf("Long z = %ld\n", z);
    printf("Float a = %.2f\n", a);
    printf("Double b = %.10f\n", b);
    printf("Char c = %c\n", c);

    return 0;
}