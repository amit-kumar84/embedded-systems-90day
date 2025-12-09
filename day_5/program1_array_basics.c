#include <stdio.h>
int main() {
    int n, i;

    printf("===== Array Basics =====\n");
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Variable Length Array

    // Input elements
    printf("\nEnter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display elements
    printf("\nYou entered the following elements:\n");
    printf("Index\tValue\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%d\n", i, arr[i]);
    }

    // Display in one line
    printf("\nArray elements in one line: [");
    for ( i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");
    
    return 0;
}