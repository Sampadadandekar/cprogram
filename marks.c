#include <stdio.h>

int main()
{
   int s1, s2, s3, total;
   float avg;

    printf("Enter marks for Subject 1: ");
    scanf("%d", &s1);
    printf("Enter marks for Subject 2: ");
    scanf("%d", &s2);
    printf("Enter marks for Subject 3: ");
    scanf("%d", &s3);

    total = s1 + s2 + s3;
    avg = total / 3;

    printf("Total Marks: %d\n", total);
    printf("Average Marks: %.2f\n", avg);

    return 0;
}
