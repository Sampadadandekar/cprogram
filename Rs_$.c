#include<stdio.h>

int main()
{
float Rs, $;
printf("Enter the amount in Rupees: ");
scanf("%f", &Rs);
$=Rs/48.0;
printf("%.2f Rs is equals to %.2f $.\n",Rs, $);
return 0;
}
