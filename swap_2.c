// (10.2)
#include<stdio.h>
int main()
{
    int a,b,c;
    a=10;b=20;
    printf("Value of a = %d Value of b = %d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("Value of a = %d Value of b = %d\n",a,b);
    return 0;
}