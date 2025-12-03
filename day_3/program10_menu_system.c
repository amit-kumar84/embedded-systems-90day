#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    printf("==== CALCULATOR MENU SYSTEM ====");

    do {
        // Display menu
        printf("\n=============== MENU ===============\n");
        printf("1. Addition [+]\n");
        printf("2. Subtraction [-]\n");
        printf("3. Multiplication [*]\n");
        printf("4. Division [/]\n");
        printf("5. Exit\n");
        printf("=====================================\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        // Exit condition
        if (choice == 5) {
            printf("\nThank you for using the calculator!\n");
            printf("Goodbye!\n");
            break;
        }

        // Invalid choice handling
        if (choice < 1 || choice > 5){
            printf("Invalid choice! Please select a valid option (1-5).\n");
            continue; // Skip to next iteration
        }

        // Get Numbers for Calculation
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);

        // Perform Operation based on choice
        switch (choice) {
            case 1:
            result =  num1 + num2;
            printf("\nResult: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;
            case 2:
            result =  num1 - num2;
            printf("\nResult: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;
            case 3:
            result =  num1 * num2;
            printf("\nResult: %.2f * %.2f = %.2f\n", num1, num2, result);
            break;
            case 4:
            if (num2 == 0) {
                printf("\nError: Division by zero is not allowed!\n");
            } else {
                result =  num1 / num2;
                printf("\nResult: %.2f / %.2f = %.2f\n", num1, num2, result);
            }
            break;
        }

    } while (choice != 5); // Loop until user chooses to exit
    return 0;
}