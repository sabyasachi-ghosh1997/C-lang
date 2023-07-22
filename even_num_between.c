// (5)


#include<stdio.h>
#include<conio.h>
int main(){
    int num1,num2;
    printf("Enter Two Number\n");
    scanf("%d%d",&num1,&num2);
    while(num1<=num2)
    {
        if(num1%2==0)
        {
        printf("%d\t",num1);
        }
        num1++;
    }
   
     return 0;
}