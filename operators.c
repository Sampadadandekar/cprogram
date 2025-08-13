#include<stdio.h>
void main()
{
int num1, num2, add, sub,multiply, div ;
printf("enter two no.: ");
scanf("%d %d", &num1, &num2);
 add= num1+num2 ;
 sub= num1-num2 ;
 multiply= num1*num2 ;
 div= num1/num2 ;
 printf("Addition of %d and %d=%d\n", num1, num2, add);
 printf("Subtraction of %d and %d=%d\n", num1, num2, sub);
 printf("Multiplication of %d and %d=%d\n", num1, num2, multiply);
printf("Division of %d and %d=%d\n", num1, num2, div);
return 0;
}
