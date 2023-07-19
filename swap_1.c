// (10.1)

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a and b");
    scanf("%d%d",&a,&b);
      printf("value of a : %d value of b : %d\n",a,b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("value of a : %d value of b : %d",a,b);
    return 0;
}