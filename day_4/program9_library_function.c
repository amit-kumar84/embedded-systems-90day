// Library of functions (max/min/abs)
#include <stdio.h>
int max(int a, int b) {
    return (a > b) ? a : b;
}
int min(int a, int b) {
    return (a < b) ? a : b;
}
int abs(int a){
    return (a < 0) ? -a : a;
}
int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("Max of %d and %d is %d\n", num1, num2, max(num1, num2));
    printf("Min of %d and %d is %d\n", num1, num2, min(num1, num2));
    printf("Absolute value of %d is %d\n", num1, abs(num1));
    return 0;
}

