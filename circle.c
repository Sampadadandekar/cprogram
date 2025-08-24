#include <stdio.h>

int main() {
    float r, a, PI = 22/7;

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    a = PI * r * r;

    printf("The area of the circle is: %.2f\n", a);

    return 0;
}
