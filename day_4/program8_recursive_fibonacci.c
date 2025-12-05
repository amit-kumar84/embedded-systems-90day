#include <stdio.h>
int fib(int n) {
    return (n==1)?0 : (n==2)?1 : fib(n-1)+fib(n-2);


}
int main() {
    int number;
    printf("Enter Terms: ");
    scanf("%d", &number);
   for (int i = 1; i <= number; i++)
   {
    printf("%d ", fib(i));
   }
   
}