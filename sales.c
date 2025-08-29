#include <stdio.h>

int main()
{
    float gross, dPer = 0.10, dAmt, net;

    printf("Enter the gross sales amount: ");
    scanf("%f", &gross);
    dAmt = gross * dPer;
    net= gross - dAmt;

    printf("Gross Sales: %.2f\n", gross);
    printf("Discount Amount (10%%): %.2f\n", dAmt);
    printf("Net Sales: %.2f\n", net);
   return 0;
}
