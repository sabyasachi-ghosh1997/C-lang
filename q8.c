#include<stdio.h>
#include<conio.h>
int main(){
    int Hindi, English, Math, Science, Computer,avarage,total;
    printf("Enter Subject Marks");
    scanf("%d%d%d%d%d",&Hindi, &English, &Math, &Science, &Computer);
    total=Hindi+ English+ Math+ Science+ Computer;
    avarage=total/5;
    if (avarage>=40)
    {
        printf("You are Pass\n");
        printf("avarage number %d ",&avarage);
    }
    else{
        printf("You Are Fail\n");
        printf("avarage number %d ",&avarage);


    }
    return 0;
}