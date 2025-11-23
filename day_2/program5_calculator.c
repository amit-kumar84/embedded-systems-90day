#include <stdio.h>

int main() {
    float num1, num2;
    char operation;
    float result;

    printf("==== SIMPLE CALCULATOR ====\n");

    //Get First Number
    printf("Enter First Number: ");
    scanf("%f", &num1);

    //Get Operation
    printf("Enter Operation (+, -, *, /): ");
    scanf(" %c", &operation);

    // Get Second Number
    printf("Enter Second Number: ");
    scanf("%f", &num2);

    // Perform Calculation Based on Operation
    if (operation == '+'){
        result = num1 + num2;
    } else if (operation == '-'){
        result = num1 - num2;
    } else if (operation == '*'){
        result = num1 * num2;
    } else if (operation == '/'){
        if (num2 != 0){
            result = num1 / num2;
        
        } else {
            printf("Error: Division by zero is not allowed.\n");
            return 1;
        }
    } else  {
        printf("Error: Invalid operation.\n");
        return 1;
    }
    // Display Result 
    printf("\nResult:%.2f %c %.2f = %.2f\n", num1, operation, num2, result);

    printf("==== END OF PROGRAM ====\n");
    return 0;

}