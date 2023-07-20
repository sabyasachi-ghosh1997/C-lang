#include<stdio.h>
  int main()
  {
    int num,rem,sum=0;
    printf("enther the number ");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    printf("revers number 0f %d " , sum);
    return 0;
  }
