#include <stdio.h>

int main() {
    float l, h, a;
    printf("Enter the length of the triangle: ");

    scanf("%f", &l);

    printf("Enter the height of the triangle: ");
    scanf("%f", &h);

    a = 0.5 * l * h;
    printf("The area of the triangle is: %.2f\n", a);
    return 0;
}
