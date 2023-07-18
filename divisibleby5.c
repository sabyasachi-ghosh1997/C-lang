#include<stdio.h>
int main()
{
	int num;
	printf("Enter the num");
	scanf("%d",&num);
	if(num%5==0) //condition
	printf("%d is divisble by 5",num); //true
	else
    printf("%d is not divisible by 5",num); //false
	return 0;
}




