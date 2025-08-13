#include <stdio.h>

int main()
 {
    float g,kg;
    printf("Enter weight in grams: ");
    scanf("%f", &g);

    // Perform the conversion: grams / 1000 = kilograms
    kg = g/ 1000.0;
    printf("Equivalent weight in kilograms: %.2f kg\n", kg);

    return 0;
}
