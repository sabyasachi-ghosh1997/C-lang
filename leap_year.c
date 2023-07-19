#include<stdio.h>
int main()
{
    int a;
    printf("enter the yer");
    scanf("%d",&a);
    if(a%4==0||a%400==0)
    printf("this is leap year");
    else
    {
        printf("this is not leap year");
        
    }
    return 0;
}