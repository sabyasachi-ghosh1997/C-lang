#include<stdio.h>
int main()
{
    int i,j,num=3,n=2;
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
        printf("*");
    }
    printf("\n");
    }

    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}



