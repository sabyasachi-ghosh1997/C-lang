#include <stdio.h>

int main() {
    int i,j,n=5;

    for ( i = n; i >= 1; i--) {
        for ( j = 1; j <= n; j++) {
            printf("%d", i);
        }
        printf("\n");
    }

       return 0;
}