#include <stdio.h>

int main() {
    float kg,g;
    printf("Enter the weight in kilograms: ");
    scanf("%f", &kg);

    // Perform the conversion: multiply kilograms by 1000 to get grams
    g= kg* 1000.0;
    printf("%.2f kilograms is equal to %.2f grams.\n", kg, g);
    return 0;
}
