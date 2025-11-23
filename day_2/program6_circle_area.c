#include <stdio.h>

int main() {
    float radius, area;
    float circumference;

    // Pi Value
    const float PI = 3.14159;

printf("==== CIRCLE CALCULATOR ====\n");
printf("Enter the radius of the circle: ");
scanf("%f", &radius);

//Area = PI * radius * radius
area = PI * radius * radius;

// Circumference = 2 * PI * radius
circumference = 2 * PI * radius;

printf("\nFor a circle with radius %.2f:\n", radius);
printf("Area = %.2f square units \n", area);
printf("Circumference = %.2f units\n", circumference);

return 0;

}