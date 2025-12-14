#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;
    char temp;

    while (left < right) {
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
    
}

int main() {
    char str[100];
    char original[100];

    printf("==== STRING REVERSE ====\n");
    printf("Enter a string: ");
    scanf("%99s", str);

    // Save original
    strcpy(original, str);

    printf("\nOriginal: %s\n", original);

    // Show process
    printf("\n==== REVERSING PROCESS ====\n");
    int len = strlen(str);
    printf("Length: %d\n", len);
    printf("Swapping positions:\n");

    int l = 0, r = len - 1;
    while (l < r) {
        printf("  Swap [%d]='%c' <-> [%d]='%c'\n", l, str[l], r, str[r]);
        l++;
        r--;
    }

    //Actually reverse
    reverseString(str);

    printf("\nReversed: %s\n", str);

    return 0;
}