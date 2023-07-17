
// 2) 45+(23*2-9)/34 


#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
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
    int result=a+(b*c-d)/e;
    printf("%d",result);

    return 0;

    

}