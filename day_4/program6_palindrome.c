#include <stdio.h>
int isPalindrome(int num) {
    int reverse = 0, original = num;

    while (num > 0) {
        reverse = reverse * 10 +num % 10;
        num /= 10;
    }
   return original == reverse;
    
}


int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (isPalindrome(number)) printf("%d is a palindrome.\n", number);
    else printf("%d is not a palindrome.\n", number);
    return 0;
}