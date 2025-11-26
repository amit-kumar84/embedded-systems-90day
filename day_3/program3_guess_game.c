#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_number, guess, attempts = 0;

    // Generate a random number between 1 and 100
    srand(time(0)); // Seed the random number generator
    secret_number = rand() % 100 + 1;

    printf("==== NUMBER GUESSING GAME ====\n");
    printf("I'm thinking of a number between 1 and 100.\n");
    printf("Can you guess what it is? Let's find out!\n");

    // Game Loop
    while (1) { // Infinite loop until the correct guess
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts

    }
}