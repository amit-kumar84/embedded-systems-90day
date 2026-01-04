#include <stdio.h>

void swapWithoutTemp(int *a, int *b) {
    printf(" Using arithmetic (no temp)....\n");
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;


}

int main() {
    printf("== SWAPPING TECHNIQUES ==\n\n");

    int x = 25, y = 50;

    printf("Method 1: Using Temporary Variable\n");
    printf("Before: x = %d, y = %d \n", x, y);
    swapWithoutTemp(&x, &y);
    printf("After: x = %d, y = %d\n\n", x, y);

    x = 100, y = 200;
    printf("Method 2: Without Temporary (Arithmetic)\n");
    printf("Before: x = %d, y = %d\n", x, y);
    swapWithoutTemp(&x, &y);
    printf("After: x = %d, y = %d\n", x, y);

    printf("\n=== Step by Step (Method 1) ===\n");
    int a = 30, b = 70;
    printf("Initial: a = %d, b = %d\n", a, b);
    printf("Step 1: temp = a = %d\n", a);
    int temp = a;
    printf("Step 2: a = b = %d\n", b);
    a = b;
    printf("Step 3: b = temp = %d\n", temp);
    b = temp;
    printf("Final: a = %d, b = %d\n", a, b);

    return 0;
}