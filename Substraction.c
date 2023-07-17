/* substraction : 
1)4 , 2 
2)23 , 7 
3)6.7 , 5.4 
*/


#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int d;
    float e;
    float f;

    printf("enter the  number a - ");
    scanf("%d",&a);

     printf("enter the  number b - ");
    scanf("%d",&b);

    
     int result1=a-b;
    printf("%d\n",result1);

       printf("enter the  number c - ");
    scanf("%d",&c);
    
       printf("enter the  number d - ");
    scanf("%d",&d);
    
    
     int result2=c-d;
    printf("%d\n",result2);

     printf("enter the  number e - ");
    scanf("%f",&e);
    
       printf("enter the  number f - ");
    scanf("%f",&f);
    
    
     float result3=e-f;
    printf("%f\n",result3);
    
    
    return 0;

}