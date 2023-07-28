// (5) 5 Num Max


#include<stdio.h>
int main()
{
	int a,b,c,d,f,e,g,h,i,j;
	printf("enter the number a and b and c and d and f and e and g and h and i and j - ");
	scanf("%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&f,&e,&g,&h,&i,&j);
	if (a>=b && a>c && a>d &&a>f &&a>e &&a>g &&a>h &&a>i &&a>j)
	{
	 printf("a is big");

	}
	else if(b>=a && b>c && b>d &&b>f &&b>e &&b>g &&b>h &&b>i &&b>j)
	{
	printf(" b is big");
	}
	else if(c>=a && c>b && c>d &&c>f &&c>e &&c>g &&c>h &&c>i &&c>j)
	{
	printf(" c is big");
	}
	else if(d>=a && d>c && d>b &&d>f &&d>e &&d>g &&d>h &&d>i &&d>j)
	{
	printf(" d is big");
	}
	else if (f>=a && f>c && f>b &&f>d &&f>e &&f>g &&f>h &&f>i &&f>j)
	{
		printf(" f is big");
	}
    else if (e>=a && e>c && e>b &&e>d &&e>f &&e>g &&e>h &&e>i &&e>j)
	{
		printf(" e is big");
	}
    else if (g>=a && g>c && g>b &&g>d &&g>f &&g>e &&g>h &&g>i &&g>j)
	{
		printf(" g is big");
	}
    else if (h>=a && h>c && h>b &&h>d &&h>f &&h>g &&h>e &&h>i &&h>j)
	{
		printf(" h is big");
	}
    else if (i>=a && i>c && i>b &&i>d &&i>f &&i>g &&i>h &&i>e &&i>j)
	{
		printf(" i is big");
	}
    else if (j>=a && j>c && j>b &&j>d &&j>f &&j>g &&j>h &&j>i &&j>e)
	{
		printf(" j is big");
	}
	else{
		printf(" all num are same");
	}
	return 0;
}