#include <stdio.h>

int main() {
    int age = 25;
    float height = 5.9;
    char grade = 'A';

    printf("===== POINTER BASICS =====\n");

    printf("Variable values:\n");
    printf("age = %d\n", age);
    printf("height =%.1f\n", height);
    printf("grade = %c\n", grade);
    printf("--------------------------\n");

    printf("===== ADDRESS (Memory Location) =====\n");
    printf("Address of age: %p\n", (void*)&age);
    printf("Address of height: %p\n", (void*)&height);
    printf("Address of grade: %p\n", (void*)&grade);
    printf("--------------------------\n");

    printf("===== SIZE OF VARIABLES =====\n");
    printf("Sizeof(int) = %lu bytes\n", sizeof(int));
    printf("sizeof(float) = %lu bytes\n", sizeof(float));
    printf("sizeof(char) = %lu bytes\n", sizeof(char));
    printf("--------------------------\n");

    printf("===== CREATING POINTERS =====\n");
    int *agePtr = &age;
    float *heightPtr = &height;
    char *gradePtr = &grade;

    printf("agePtr points to: %p\n", (void *)agePtr);
    printf("heightPtr points to: %p\n", (void *)heightPtr);
    printf("gradePtr points to: %p\n", (void *)gradePtr);
    printf("--------------------------\n");

    printf("===== SIZE OF POINTERS =====\n");
    printf("Sizeof(int*) = %lu bytes\n", sizeof(int *));
    printf("Sizeof(float*) = %lu bytes\n", sizeof(float *));
    printf("Sizeof(char*) = %lu bytes\n", sizeof(char *));
    printf("All pointers same size on same system.\n");
    printf("--------------------------\n");

    return 0;
}