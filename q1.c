// (1) 67+3*2+(34-2*5) 


#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    printf("enter the number of a - ");
    scanf("%d",&a);
    printf("enter the number of b - ");
    scanf("%d",&b);
    printf("enter the number of c - ");
    scanf("%d",&c);
    printf("enter the number of d - ");
    scanf("%d",&d);
    printf("enter the number of e - ");
    scanf("%d",&e);
    printf("enter the number of f - ");
    scanf("%d",&f);
    int result=a+b*c+(d-e*f);
    printf("%d",result);

    return 0;

    

}