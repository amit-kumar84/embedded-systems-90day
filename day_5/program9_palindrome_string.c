#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        // Convert to lowercase for comparison
        if (tolower(str[left]) != tolower(str[right])) {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }
    return 1; // Is a palindrome
}

int main() {
    char str[256];

    printf("==== PALINDROME CHECKER ====\n");
    printf("Enter a string: ");
    scanf("%255s", str);

    printf("\nString: %s\n", str);
    printf("Length: %lu\n", strlen(str));

    // Show comparison process
    printf("\n==== COMPARISON PROCESS ====\n");
    int left = 0, right = strlen(str) - 1;
    int is_palindrome = 1;

    while (left < right) {
        char l = tolower(str[left]);
        char r = tolower(str[right]);
        
        printf(" Comparing [%d]='%c' with [%d]='%c' ->", left, l, right, r);

        if (l == r) {
            printf("Match \n");

        } else {
            printf("No Match \n");
            is_palindrome = 0;
            break;
        }
        left++;
        right--;
    }

    printf("\n==== RESULT");
    if (is_palindrome) {
        printf("'%s' is a PALINDROME!", str);

    } else {
        printf("'%s' is NOT a PALINDROME!", str);
    }

    return 0;



}