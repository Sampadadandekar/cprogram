#include <stdio.h>

int main()
{
  float $, p; // p is pounds
  printf("Enter the amount in US dollars: ");
  scanf("%f", &$);

  // Convert dollars to INR
  float Rs = $ * 48;

  // Convert INR to pounds
  p = Rs / 70;

  printf("%.2f $ is equal to %.2f Pounds.\n", $, p);

  return 0;
}
