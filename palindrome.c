#include<stdio.h>
  int main()
  {
    int num,rem,temp,sum=0;
    printf("enther the number ");
    scanf("%d",&num);
      temp=num;
    while(num>0)
    {
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    printf("%d",sum);
    if(temp==sum){
    printf("p" );
    }
    else{
        printf("not p");
    }
    return 0;
  }

