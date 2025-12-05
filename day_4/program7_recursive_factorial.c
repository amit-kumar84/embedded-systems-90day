#include <stdio.h>
long long factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Factorial of %d is %lld\n", number, factorial(number));
    return 0;
}