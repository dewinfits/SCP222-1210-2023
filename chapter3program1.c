
#include <stdio.h>
int main (void)
{
int a;
printf("Enter your value:");

scanf("%d", &a);

if (a<0)
{
    printf("The value is negative\n");
}
else if (a==0)
{
      printf("The value is zero\n");
}
else
{
   printf("The value is positive\n");
}
if (a)
{
printf("The value is true\n");
}
return 0;}
