#include <stdio.h>

void add(int a, int b) {
    printf("%d + %d = %d\n", a, b, a + b);

}
int main() {
    int x, y;
    printf("Enter two numbers to add: \n");
    scanf("%d %d", &x, &y);
    add(x, y);
    return 0;
}