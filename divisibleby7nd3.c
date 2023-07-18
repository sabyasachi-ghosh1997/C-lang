#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number :");
	scanf("%d",&num);
	if(num%3==0 || num%7==0)
        printf("Number is divisible");
    else
        printf("Number is not divisible");
	return 0;
}





