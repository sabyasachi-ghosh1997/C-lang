/*
modular : 
1)6 , 5 
2)7, 9 
3)4, 2 
*/


#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;

    printf("enter the  number a - ");
    scanf("%d",&a);

     printf("enter the  number b - ");
    scanf("%d",&b);

    
     int result1=a%b;
    printf("%d\n",result1);

       printf("enter the  number c - ");
    scanf("%d",&c);
    
       printf("enter the  number d - ");
    scanf("%d",&d);
    
    
     int result2=c%d;
    printf("%d\n",result2);

     printf("enter the  number e - ");
    scanf("%d",&e);
    
       printf("enter the  number f - ");
    scanf("%d",&f);
    
    
     float result3=e%f;
    printf("%d\n",result3);
    
    
    return 0;

}