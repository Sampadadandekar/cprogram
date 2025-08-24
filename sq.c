#include <stdio.h>
int main()
{
    float a, l, p;

    printf("Enter the length of the side of the square: ");
    scanf("%f", &l);

    a = l * l;
    p = 4 * l;
    printf("The area of the square is: %.2f\n", a);
  printf("The perimeter of the square is: %.2f\n", p);
    return 0;
}
