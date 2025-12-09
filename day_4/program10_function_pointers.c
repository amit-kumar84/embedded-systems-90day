//function pointers for calculator (advance)
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
    if (b != 0)
        return a / b;
    else {
        printf("Error: Division by zero\n");
        return 0;
    }
}
int main() {
    float num1, num2, result;
    char operator;
    float (*operation)(float, float);

    printf("Enter an expression (e.g., 5 + 3): ");
    scanf("%f %c %f", &num1, &operator, &num2);

    switch (operator) {
        case '+':
            operation = add;
            break;
        case '-':
            operation = subtract;
            break;
        case '*':
            operation = multiply;
            break;
        case '/':
            operation = divide;
            break;
        default:
            printf("Error: Invalid operator\n");
            return 1;
    }

    result = operation(num1, num2);
    printf("Result: %.2f %c %.2f = %.2f\n", num1, operator, num2, result);
    return 0;
}