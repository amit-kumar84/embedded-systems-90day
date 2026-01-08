#include <stdio.h>

int main() {
    printf("==== BITWISE OPERATIONS DEMONSTRATION ====\n\n");

    unsigned char a = 0b01010101; // Binary: 01010101 = 85 decimal
    unsigned char b = 0b00110011; // Binary: 00110011 = 51 decimal

    printf("Value A: %d (Binary: )", a);
    for (int i = 7; i >= 0; i--){
        printf("%d", (a >> i) & 1);

    }
    printf(")\n");
    printf("Value B: %d (Binary: )", b);
    for (int i = 7; i >= 0; i--){
        printf("%d", (b >> i) & 1);

    }
    printf(")\n\n");

    // AND (&) Operation
    unsigned char result_and = a & b;
    printf("AND (&) Operation:\n");
    printf("%d & %d = %d \n", a, b, result_and);
    printf("Binary: ");
    for (int i = 7; i >= 0; i--){
        printf("%d", (result_and >> i) & 1);

    }
    printf("\n\n");

    // OR (|) Operation
    unsigned char result_or = a | b;
    printf("OR (|) Operation: \n");
    printf("%d | %d = %d \n", a, b, result_or);
    printf("Binary: ");
    for (int i = 7; i >= 0; i--){
        printf("%d", (result_or >> i) & 1);

    }
    printf("\n\n");

    // XOR (^) Operation
    unsigned char result_xor = a ^ b;
    printf("XOR (^) Operation: \n");
    printf("%d ^ %d = %d \n", a, b, result_xor);
    printf("Binary: ");
    for (int i = 7; i >= 0; i--){
        printf("%d", (result_xor >> i) & 1);
    }
    printf("\n\n");

    // NOT (~) Operation
    unsigned char result_not = ~a;
    printf("NOT (~) Operation: \n");
    printf("~%d = %d\n", a, result_not);
    printf("Binary: ");
    for (int i = 7; i >= 0; i--){
        printf("%d", (result_not >> i) & 1);
    }
    printf("\n\n");

    // Left Shift (<<) Operation
    unsigned char result_left_shift = a << 1;
    printf("Left Shift (<<) Operation: \n");
    printf("%d << 1 = %d \n", a, result_left_shift);
    printf("Binary: ");
    for (int i = 7; i >= 0; i--){
        printf("%d", (result_left_shift >> i) & 1);
    }
    printf("\n\n");

    // Right Shift (>>) Operation
    unsigned char result_right_shift = a >> 1;
    printf("Right Shift (>>) Operation: \n");
    printf("%d >> 1 = %d \n", a, result_right_shift);
    printf("Binary: ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (result_right_shift >> i) & 1);
    }
    printf("\n");
    return 0;
}