// (2) 100-1 even number


#include <stdio.h>

int main() {
    int num = 100;

    printf("Even numbers from 1 to 100:\n");

    while (num >= 1) {
        if (num % 2 == 0) {
            printf("%d ", num);
        }

        num--;
    }

    return 0;
}
