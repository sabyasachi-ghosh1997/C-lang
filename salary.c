// (14)
#include <stdio.h>

int main() {
    int holiday; 
    float a,b,c,salary;

    // Input the total marks and obtained marks
    printf("Enter salary : ");
    scanf("%f",&salary);
    printf("Enter total holiday : ");
    scanf("%d",&holiday);
    
    if(holiday<=1)
    {
        printf("Full salary");
    }
    else if (holiday >= 2 && holiday<=5) 
    {
       a= (salary *95/100 );
        printf("%f",a);
    
    } 
    else if (holiday >= 6 && holiday<=14)
    {
       b= (salary *90/100);
        printf("%f",b);
    }
    else if (holiday==15)
    {
       c= (salary *50/100 );
        printf("%f",c);
    }
    else if (holiday>=15)
    {
      
        printf("No Salary");
    }
    else
    {
        printf("invalid")
    }
    
    
	return 0;
}
