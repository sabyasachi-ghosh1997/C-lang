// (4) 3 num max

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the number a and b and c - ");
	scanf("%d%d%d",&a,&b,&c);
	if (a>=b && a>c)
	{
	 printf("c < a > b");

	}
	else if(b>a && b>c)
	{
	printf("c < b > a");
	}
	else
	{
		printf(" b < c >a");
	}
	return 0;
}