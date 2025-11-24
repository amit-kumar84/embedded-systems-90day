#include <stdio.h>

int main() {
    int number;

    printf("==== EVEN OR ODD CHECKER ====\n");
    printf("Enter a Number: ");
    scanf("%d", &number);

    //Check if even or odd using modulus operator
    if (number % 2 == 0) {
        printf("\n%d is an EVEN number. \n", number);
    } else {
        printf("\n%d is an ODD number. \n", number);
    }
    // Additional info
    printf("\nEXPLANATION: \n");
    printf("%d divided by 2 gives remainder %d\n", number, number %2);

    if(number % 2 == 0) {
        printf("Since remainder is 0, It's divisible by 2 and hence EVEN. \n");


    } else {
        printf("Since remainder is 1, It's not divisible by 2 and hence ODD.\n");

    }

    return 0;
}
