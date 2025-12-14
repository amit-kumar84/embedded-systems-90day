#include <stdio.h>
#include <string.h>


int myStrlen(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
    
}

int main() {
    char name[100];
    char message[100];

    printf("==== STRING BASICS ====\n");

    //String input buffer
    printf("Enter your first name: ");
    scanf("%99s", name); // No & needed for strings

    // Clear input buffer
    while(getchar() != '\n');

    //String input (with spaces)
    printf("Enter a message: ");
    fgets(message, sizeof(message), stdin);

    // Remove newline from fgets
    message[strcspn(message, "\n")] = 0;

    printf("\n==== STRING ANALYSIS ====\n");
    printf("Name: %s\n", name);
    printf("Message: %s\n", message);

    printf("\n==== LENGTH CALCULATION ====\n");
    printf("Name length (manual): %d\n", myStrlen(name));
    printf("Name length (strlen): %lu\n", strlen(name));
    printf("Message length: %lu\n", strlen(message));


    // Charachter by character
    printf("\n==== CHARACTER BY CHARACTER ====\n");
    printf("Name '%s' contains:\n", name);
    for (int i = 0; name[i] != '\0'; i++) {
        printf(" Index %d: '%c' (ASCII: %d)\n", i, name[i], name[i]);

    }
    return 0;

}