// (10.3)

#include<stdio.h>
int main()
{
int a=20;
int b=10;
printf("Value of a = %d value of b= %d\n",a,b);
a=b+a;
b=a-b;
a=a-b;
printf("Value of a = %d value of b= %d",a,b);
return 0;
}