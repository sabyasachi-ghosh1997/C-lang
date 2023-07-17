// 5) 2* 4 +98 -45 

#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int d;
   
    printf("enter the number of a - ");
    scanf("%d",&a);
    printf("enter the number of b - ");
    scanf("%d",&b);
    printf("enter the number of c - ");
    scanf("%d",&c);
    printf("enter the number of d - ");
    scanf("%d",&d);
    
    int result=a*b+c-d;
    printf("%d",result);

    return 0;

    

}