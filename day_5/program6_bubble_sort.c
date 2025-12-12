#include <stdio.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int n){
    int temp;
    int pass = 0;

    for (int i = 0; i < n - 1; i++) {
        pass++;
        printf("Pass %d: ", pass);

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        printArray(arr, n);
    }
}

int main(){
    int n;

    printf("==== BUBBLE SORT ====\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal Array: ");
    printArray(arr, n);

    printf("\n==== SORTING PROCESS ====\n");
    bubbleSort(arr, n);

    printf("\n==== SORTED ARRAY ====\n");
    printArray(arr, n);

    return 0;
}