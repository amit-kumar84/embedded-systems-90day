#include <stdio.h>

int main() {
    int n, i, j, space;

    printf("===== PYRAMID PATTERN PRINTING =====\n");
    printf("ENter number of rows: ");
    scanf("%d", &n);

    printf("\n");

    for (i = 1; i <= n; i++) {
        // Print spaces
        for (space = 1; space <= n - i; space++) {
            printf("  ");
        }

        // Print increasing numbers
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // print decreasing numbers
        for(j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}