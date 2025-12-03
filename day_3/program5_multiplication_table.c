#include <stdio.h>

int main() {
    int number, range, i;
    printf("===== MULTIPLICATION TABLE =====\n");
    printf("Enter Number: ");
    scanf("%d", &number);
    
    printf("Enter Range (1 to ?): ");
    scanf("%d", &range);

    printf("\n==== MULTIPLICATION TABELE OF %d ====\n", number);

    //For loop to print table
    for(i = 1; i <= range; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    printf("\n\n");
    return 0;

}