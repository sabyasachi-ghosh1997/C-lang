#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Input three numbers
    printf("Input three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Compare the numbers to find the maximum
    if (num1 > num2 && num1 > num3)
     {
        printf("Num1 is Max : %d",num1);
    }
     else if (num2 > num1 && num2 > num3) 
    {
        printf("Num2 is Max : %d",num2);
    } 
    else if (num3 > num1 && num3 > num2) 
    {
        printf("Num3 is Max : %d",num3);
    } 
    else 
    
     {
         printf("Num1 And Num2 And Num3 is Equel");
    }
        
    
    return 0;
}