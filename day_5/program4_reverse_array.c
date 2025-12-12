#include <stdio.h>

int main() {
    int n, i, temp;

    printf("==== REVERSE AN ARRAY ====\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);

    }

    //Display original
    printf("\nOriginal Array: ");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    // Reverse using two-pointer technique

    int left = 0;
    int right = n - 1;

    printf("\n==== REVERSING PROCES ====\n");
    while (left < right){

    printf("Swap arr[%d]=%d with arr[%d]=%d\n", 
        left, arr[left], right, arr[right]);

        //Swap elements
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;

    }

        //Display reversed

        printf("\nReversed Array: ");
        for (i = 0; i < n; i++) printf("%d ", arr[i]);
        printf("\n");

        return 0;

}

