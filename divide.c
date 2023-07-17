/*
divide : 
1)56 , 2 
2)4.5 , 5
*/ 



#include<stdio.h>
int main()
{
    int a;
    int b;
    float c;
    int d;

    printf("enter the  number a - ");
    scanf("%d",&a);

     printf("enter the  number b - ");
    scanf("%d",&b);

    
     int result1=a/b;
    printf("%d\n",result1);

       printf("enter the  number c - ");
    scanf("%f",&c);
    
       printf("enter the  number d - ");
    scanf("%d",&d);

    
     float result2=c/d;
    printf("%f\n",result2);
    
    return 0;

}