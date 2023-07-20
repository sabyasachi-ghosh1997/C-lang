// (14)
#include <stdio.h>

int main() {
    int unit; 
    int a,b,c,d;

    // Input the total marks and obtained marks
    printf("Enter unit : ");
    scanf("%d",&unit);
    
    
    if(unit >= 1 && unit<=10)
    {
         a= ((unit*10 *90)/(100) );
        printf("%d",a);
        
    }
    else if ( unit >= 11 && unit<=20)
    {
         b= ((unit*10 *85)/(100) );
        printf("%d",b);
        
    }
    else if ( unit >= 21 && unit<=40)
    {
         c=((unit*10 *70)/(100) );
        printf("%d",c);
        
    }
   
    else if (unit>40)
    {
      d= ((unit*10 *50)/(100) );
        printf("%d",d);
    }
    else
    {
        printf("galat unit");
    }
    
	return 0;
}
