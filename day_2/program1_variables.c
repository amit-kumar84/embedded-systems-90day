#include <stdio.h>
int main() {
    // Decleration of all type of variables
    // My Information
    char name[] = "Amit Kumar";
    int age = 23;
    float height = 5.9;
    double weight = 73.6;
    char grade = 'A';

// Print My Information 
printf("==== MY INFORMATION ====\n");
printf("My Name: %s\n", name);
printf("My Age: %d years\n", age);
printf("My Height: %.1f feet\n", height);
printf("My Weight: %.2f kg\n", weight);
printf("My Grade: %c\n", grade);

return 0;
}