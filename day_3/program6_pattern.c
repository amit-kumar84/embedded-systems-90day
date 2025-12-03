#include <stdio.h>

int main() {
    int n, i, j;

    printf("===== PATTERN PRINTING =====\n");
    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Pattern 1: Right-angled Triangle with stars
    printf("\nPattern 1: Right Trangle\n");
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("*  ");
        }
        printf("\n");
    }

    // Pattern 2: Right-angled trangle with numbers
    printf("\nPattern 2: Number Triangle\n");
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // Pattern 3: Inverted Trangle
    printf("\nPattern 3: Inverted Triangle\n");
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Pattern 4: Square Pattern
    printf("\nPattern 4: Square Pattern\n");
    for(i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}