#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    float average;

    printf("==== SUM & AVERAGE CALCULATOR ====\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add to sum as we input
    }

    average = (float) sum / n; // Cast to float for decimal

    printf("\n==== RESULTS ====\n");
    printf("Elements: ");
        for(i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n\n");


    printf("Sum: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        if (i < n - 1) printf(" + ");
        
    }
    printf(" = %d\n", sum);
    printf("Average = %d / %d = %.2f\n", sum, n, average);
    return 0;

}
