// (8) 2-table



// #include <stdio.h>

// int main() {
//     int i = 2, j;

//     printf("Multiplication tables from 1 to 10:\n");

//     while (i <= 2) {
//         printf("Table of %d:\n", i);

//         j = 1; 
//         while (j <= 10) {
//             printf("%d x %d = %d\n", i, j, i * j);
//             j++;
//         }

//         printf("\n"); 

//         i++; 
//     }

//     return 0;
// }


#include <stdio.h>

int main() {
    int i , j,num;

    printf("Enter the number:\n");
    scanf("%d",&num);
   if (num<=0) 
   {
        printf("Number not valid : 1\n");
    } 
    else 
    {
    while (num==i) 
    {
        printf("Table of %d:\n", i);

        j = 1; 
        while (j <= 10) {
            printf("%d x %d = %d\n", i, j, i * j);
            j++;
        }

        printf("\n"); 
    }
        i++;
    }

    return 0;
}
