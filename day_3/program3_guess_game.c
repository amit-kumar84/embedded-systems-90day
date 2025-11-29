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
        attempts++;

        if(guess < secret_number) {
            printf("Too low! Try again.\n\n");
        } else if(guess > secret_number) {
            printf("Too high! Try again.\n\n");
        } else {
            // Correct guess
            printf("Congratulations! 🎉\n");
            printf("You've guessed it! The number was %d.\n", secret_number);
            printf("It took you %d attempts to guess the number.\n", attempts);

            // Rating based on attempts
            if (attempts <= 5) {
                printf("Excellent work! You're a guessing master! 🌟");
            } else if (attempts <= 10) {
                printf("Great job! You have a sharp mind! 👍");
        } else {
            printf("Good effort! Keep practicing to improve! 💪");

        }
        break; // Exit the loop after correct guess
        
        }

    }
    return 0;
}