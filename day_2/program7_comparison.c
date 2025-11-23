#include <stdio.h>

int main(){
    int a =15;
    int b = 10;

    printf("==== COMPARISON OPERATORS ====\n");
    printf("a = %d, b = %d\n", a, b);

    //Note: 1 = true, 0 = flase 
    printf("a == b (Equal to)     : %d\n", a == b); // 0 (False)
    printf("a != b (Not equal to)    :%d\n", a != b); // 1 (True)
    printf("a > b (Greater than)    : %d\n", a > b); // 1 (True)
    printf("a < b (Less than)    :%d\n", a < b); // 0 (False)
    printf("a >= b (Greater then or equal to)    : %d\n", a >= b); // 1 (True)
    printf("a <= b (Less than or equal to)    : %d\n", a <= b); // 0 (False)

    // Real-world application example
    printf("\n==== Real-world Example ====\n");
    int age = 20;
    printf("Age: %d\n", age);
    printf("Is adult (age >= 18): %d\n", age >= 18); // 1 (True)
    printf("Is senior citizen (age >= 65): %d\n", age >= 65); // 0 (False)

    return 0;
    
}