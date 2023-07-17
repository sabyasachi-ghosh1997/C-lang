/*addition : 
1) 45  , 5.6 
2) 5.6 , 9.8 */

#include<stdio.h>
int main()
{
    int a;
    float b;
    float c;
    float d;

    printf("enter the  number a - ");
    scanf("%d",&a);

     printf("enter the  number b - ");
    scanf("%f",&b);

    
     float result1=a+b;
    printf("%f\n",result1);

       printf("enter the  number c - ");
    scanf("%f",&c);
    
       printf("enter the  number d - ");
    scanf("%f",&d);
    
    
     float result2=c+d;
    printf("%f\n",result2);
    
    return 0;

}