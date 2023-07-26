#include <stdio.h>

int main() {
    int i,j,n=2;
    
    for ( i = 1; i <=5; i++) {
        for ( j = 1; j <= 5; j++) {
            printf("%d ", n);
            n += 2;
        }
        printf("\n");
    }

  return 0;
}