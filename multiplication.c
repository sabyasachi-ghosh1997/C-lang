/*multiply : 
1)5.6 , 8.9 
2)2.2 , 6 
3)4, 8 
*/


#include<stdio.h>
int main()
{
    float a;
    float b;
    float c;
    int d;
    int e;
    int f;

    printf("enter the  number a - ");
    scanf("%f",&a);

     printf("enter the  number b - ");
    scanf("%f",&b);

    
     float result1=a*b;
    printf("%f\n",result1);

       printf("enter the  number c - ");
    scanf("%f",&c);
    
       printf("enter the  number d - ");
    scanf("%d",&d);
    
    
     float result2=c*d;
    printf("%f\n",result2);

     printf("enter the  number e - ");
    scanf("%d",&e);
    
       printf("enter the  number f - ");
    scanf("%d",&f);
    
    
     int result3=e*f;
    printf("%d\n",result3);
    
    
    return 0;

}