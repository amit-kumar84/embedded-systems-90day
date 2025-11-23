#include <stdio.h>

int main() {
    
    float celsius, fahrenheit;

    printf("==== TEMPERATURE CONVERTER ====\n");
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius); // Read Input from User

    //Formula: F = (C * 9/5) + 32
    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    printf("\n%f°C is equal to %f°F\n", celsius, fahrenheit);

    printf("==== END OF PROGRAM ====\n");
    return 0;

}