#include <stdio.h>
int main(void)

{
int a=0;


while (a<=200)
{

printf("%4d degrees F = %4d degrees C\n",a, (a-32) * 5 / 9);

a = a+20;
}


return 0;
}
