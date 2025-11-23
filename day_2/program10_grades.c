#include <stdio.h>

int main() {
    int marks;
    char grade;

    printf("==== GRADE ASSIGNMENT BASED ON MARKS ====\n");
    // Get Marks from User
    printf("Enter Marks (0-100): ");
    scanf("%d", &marks);

    // Assign Grade Based on Marks
    if (marks >= 90 && marks <= 100) {
        grade = 'A';
    } else if (marks >= 80 ){
        grade = 'B';
    } else if (marks >= 70 ){
        grade = 'C';
    } else if (marks >= 60){
        grade = 'D';
    } else if (marks >= 50){
        grade = 'E';
    } else if (marks >= 0){
        grade = 'F';
    } else {
        printf("Error: Marks should be between 0 and 100.\n");
        return 1;
    }

    printf("\n ==== RESULT ====\n");
    printf("Marks: %d\n", marks);
    printf("Grade: %c\n", grade);

    // Display Feedback Based on Grade
    printf("\n Feedback: ");
    switch (grade) {
        case 'A':
            printf("Excellent work!\n");
            break;
        case 'B':
            printf("Good job!\n");
            break;
        case 'C':
            printf("Fair effort.\n");
            break;
        case 'D':
            printf("Needs improvement.\n");
            break;
        case 'E':
            printf("Poor performance.\n");
            break;
        case 'F':
            printf("Failing grade.\n");
            break;
        default:
            printf("Invalid grade.\n");
    }

    return 0;

}