#include <stdio.h>

int main() {
    int rollNumber, physics, chemistry, computerApp;
    float total, percentage;
    char division;

    printf("Input the Roll Number of the student: ");
    scanf("%d", &rollNumber);
    printf("Input the marks of Physics, Chemistry, and Computer Application: ");
    scanf("%d %d %d", &physics, &chemistry, &computerApp);

    total = physics + chemistry + computerApp;
    percentage = total / 3;
    
    if (percentage >= 60) {
        division = 'A';
    } else if (percentage >= 50) {
        division = 'B';
    } else if (percentage >= 40) {
        division = 'C';
    } else {
        division = 'F';
    }

    printf("Roll NO: %d",rollNumber);
    printf("\nTotal: %f\n", total);
    printf("Percentage: %f\n", percentage);
    printf("Division: %c\n", division);

return 0;
}
