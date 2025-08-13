#include <stdio.h>

int main() {
    int Min;
    double hr;

    printf("Enter the total number of minutes: ");
    scanf("%d", &Min);

    hr = (double)Min / 60.0;
    printf("%d minutes is equal to %.2f hours.\n", Min, hr);

    return 0;
}
