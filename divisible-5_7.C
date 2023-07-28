
#include<stdio.h>
#include<conio.h>
int main(){
    int num;
    printf("Enter number");
    scanf("%d",&num);
    if (num%11==0 && num%5==0)
    {
        printf("Number is divisible of both number 11 nad 5");
    }
    else{
        printf("Number is not divisible of both number 11 nad 5");
    }
return 0;
}