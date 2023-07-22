// (1) 1-100 even number


#include <stdio.h>

int main() {
    int num = 1;

    printf("Even numbers from 1 to 100:\n");

    while (num <= 100) {
        if (num % 2 == 0) {
            printf("%d ", num);
        }

        num++;
    }

    return 0;
}
