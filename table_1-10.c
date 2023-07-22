// (4.b) Table



#include <stdio.h>

int main() {
    int i = 1, j;

    printf("Multiplication tables from 1 to 10:\n");

    while (i <= 10) {
        printf("Table of %d:\n", i);

        j = 1; 
        while (j <= 10) {
            printf("%d x %d = %d\n", i, j, i * j);
            j++;
        }

        printf("\n"); 

        i++; 
    }

    return 0;
}
