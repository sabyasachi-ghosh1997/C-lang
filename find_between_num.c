// // (6) randome two number --->between



// #include <stdio.h>

// int main() {
//     int num1, num2;
    
//     // Get input from the user
//     printf("Enter the first number: ");
//     scanf("%d", &num1);

//     printf("Enter the second number: ");
//     scanf("%d", &num2);

//     // Find the smaller and larger number
//     int start, end;
//     if (num1 <= num2) {
//         start = num1;
//         end = num2;
//     } else {
//         start = num2;
//         end = num1;
//     }

//     // Print numbers between start and end using a while loop
//     while (start <= end) {
//         printf("%d ", start);
//         start++;
//     }

//     return 0;
// }


#include <stdio.h>

int main() {
    int number, count = 0;

    // Get input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Handle the case of 0 separately
    if (number == 0) {
        printf("Number of digits: 1\n");
    } else {
        // Calculate the number of digits
        while (number != 0) {
            number /= 10;
            count++;
        }

        printf("Number of digits: %d\n", count);
    }

    return 0;
}
