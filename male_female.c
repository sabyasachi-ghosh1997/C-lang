#include<stdio.h>
#include<conio.h>
int main()
{
char input;
printf("Enter First Latter of Male Or Female");
scanf("%c",&input);
if(input=='M' || input=='m')
{
printf("Male");
}
else if(input=='f' || input=='F')
{
	printf("Female");
}
else
{
	printf("Sorry");

}
return 0;
}