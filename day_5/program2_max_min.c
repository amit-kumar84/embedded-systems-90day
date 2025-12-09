#include <stdio.h>
int main() {
    int n, i;

    printf("==== FIND MAX & MIN IN ARRAY ====\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Variable Length Array
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min with the first element
    int max = arr[0];
    int min = arr[0];
    int max_index = 0, min_index =0;

    // find max and min
    for(i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            max_index = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            min_index = i;
        }
    }

    printf("\n==== RESULTS ====\n");
    printf("Array: ");
    for ( i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n\n\n");

    printf("Maximum value: %d at index %d\n", max, max_index);
    printf("Minimum value: %d at index %d\n", min, min_index);
    printf("Range: %d (Max - Min)\n", max - min);

    return 0;
    
}