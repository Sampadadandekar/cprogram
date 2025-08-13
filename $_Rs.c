#include <stdio.h>

int main()
{
    float $, Rs;

    printf("Enter the amount in dollars: ");
    scanf("%f", &$);

    Rs = $ * 48.0;

    printf("%.2f dollars is equal to %.2f rupees\n", $, Rs);

    return 0;
}
