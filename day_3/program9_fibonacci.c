#include <stdio.h>
int main() {
    int n, i;
    long long first = 0, second = 1, next;

    printf("==== FIBONACCI SEQUENCE GENERATOR ====\n");
    printf("How many terms do you want? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number!\n");
        return 1;
    }

    printf("\n==== FIBONACCI SEQUENCE ====\n");
    printf("Term 1: %lld\n", first);

    if (n > 1){
        printf("Term 2: %lld\n", second);
    }

    // Generate remaining terms
    for (i = 3; i <= n; i++) {
        next = first + second;
        printf("Term %d: %lld (= %lld + %lld)\n", i, next, first, second);

        // Update for next iteration
        first = second;
        second = next;
    }
    printf("\n==== SEQUENCE ====\n");

    // print the sequence again in compact form
    first = 0;
    second = 1;
    printf("%lld, %lld", first, second);

    for (i = 3; i <= n; i++) {
        next = first + second;
        printf(", %lld", next);
        first = second;
        second = next;
    }
    printf("\n\n");

    return 0;

}