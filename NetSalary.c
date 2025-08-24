#include <stdio.h>
int main() {
    double g, a,d,net;

    printf("Enter the Gross Salary: ");
    scanf("%lf", &g);
    a = 0.10 * g;
    d= 0.03 * g;
    net = g + a - d;

    printf("\n--- Salary Details ---\n");
    printf("Gross Salary: %.2f\n", g);
    printf("Allowance (10%%): %.2f\n", a);
    printf("Deduction (3%%): %.2f\n", d);
    printf("Net Salary: %.2f\n", net);

    return 0;
}
