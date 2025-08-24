#include <stdio.h>

int main() {
    float cel, fah;

    printf("Enter the temperature in Celsius: ");

    scanf ("%f", &cel);
//  9/5 =1.8
    fah= (cel * 1.8) + 32;

    printf("Temperature in Fahrenheit: %.2f\n", fah);

    return 0;
}
