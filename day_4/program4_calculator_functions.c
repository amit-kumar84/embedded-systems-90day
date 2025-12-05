#include <stdio.h>

float add(float a, float b) {
    return a + b;
}
float subtract(float a, float b) {
    return a - b;
}
float multiply(float a, float b) {
    return a * b;
}
float divide(float a, float b) {
    return b != 0 ? a / b : 0; // Return 0 if dividing by zero
}

int main() {
    int ch; 
    float x, y;

    printf("Select operation:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    scanf("%d", &ch);
    printf("Enter two numbers: ");
    scanf("%f %f", &x, &y);

    switch (ch) {
        case 1: printf("Result: %.2f\n", add(x, y)); break;
        case 2: printf("Result: %.2f\n", subtract(x, y)); break;
        case 3: printf("Result: %.2f\n", multiply(x, y)); break;
        case 4: 
            if (y == 0)
                printf("Cannot divide by zero.\n"); 
            else
                printf("Result: %.2f\n", divide(x, y));
            break;
        default: printf("Invalid choice.\n");
   
    }
    return 0;

}