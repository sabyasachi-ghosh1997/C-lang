// (11)
#include<stdio.h>
int main()
{
    float f,c;
    char ch;
    printf(" Press c to convert temperature from Fahrenheit to Celsius\n.");
    printf(" Press f to convert temperature from Celsius to Fahrenheit\n.");
    printf(" Enter your choice (c, f): ");
    scanf("%c",&ch);
    if(ch =='c' ||ch =='C')
    {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f",&f);
        c= (f - 32)*5/9;
        printf("%f",c);
    }
    else if((ch =='f') ||(ch =='F'))
    {
        printf("Enter temperature in Celsius: ");
        scanf("%f",&c);
        f= (c*1.8)+32;
        printf("%f",f);
    }
    else
    {
        printf("Enter valid Text");
    }
    return 0;
}