#include <stdio.h>

//Function to perform linear search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key){
        return i;
        }
    }
    return -1;

}

int main() {
    int n, key, result;

    printf("==== LINEAR SEARCH ====\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);

    // Perform search
    result = linearSearch(arr, n, key);

    printf("\n==== SEARCH PROCESS ====\n");
    for (int i = 0; i < n; i++) {
        printf("Checking arr[%d] = %d ...", i, arr[i]);
        if (arr[i] == key) {
            printf("FOUND! ✓\n");
            break;
        } else {
            printf("Not match\n");
        }
    }

    printf("\n==== RESULT ====\n");
    if (result != -1) {
        printf("Element %d found at index %d\n", key, result);
    } else {
        printf("Element %d not found in array\n", key);
    }

    return 0;
}