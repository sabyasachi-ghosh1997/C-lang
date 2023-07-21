#include<stdio.h>
#include<conio.h>
int main(){
   
    float Hindi, English, Math, Science, Computer,total, avarage;
    printf("Enter Subject Marks");
    scanf("%f%f%f%f%f",&Hindi, &English, &Math, &Science, &Computer);
    total=Hindi+ English+ Math+ Science+ Computer;
    avarage=total/5;
    if (avarage>=40)
    {
        printf("You are Pass\n");
        printf("avarage number %f ",avarage);
    }
    else{
        printf("You Are Fail\n");
        printf("avarage number %f ",avarage);


    }
    return 0;
}