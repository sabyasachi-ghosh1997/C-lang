// (5) 5 Num Max


#include<stdio.h>
int main()
{
	int a,b,c,d,f;
	printf("enter the number a and b and c and d and f - ");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&f);
	if (a>=b && a>c && a>d &&a>f)
	{
	 printf("a is big");

	}
	else if(b>=a && b>c && b>d &&b>f)
	{
	printf(" b is big");
	}
	else if(c>=a && c>b && c>d &&c>f)
	{
	printf(" c is big");
	}
	else if(d>=a && d>c && d>b &&d>f)
	{
	printf(" d is big");
	}
	else if (f>=a && f>c && f>b &&f>d)
	{
		printf(" f is big");
	}
	else{
		printf(" all num are same");
	}
	return 0;
}