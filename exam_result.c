// (14)
#include <stdio.h>

int main() {
    int Hindi, English, Math, Science, Computer; 
    int total, obtaine;
    float percentage;

    // Input the total marks and obtained marks
    printf("Enter Subject Marks 1.hindi 2.English 3.Math 4.Science 5.Computer ---- ");
    scanf("%d%d%d%d%d",&Hindi, &English, &Math, &Science, &Computer);
    total=500;
    obtaine=Hindi+English+Math+Science+Computer;

    // Calculate the percentage
    percentage = ((float)obtaine / total) * 100;

    // Determine the grade based on the percentage
    char grade;
    if (percentage < 25) {
        grade = 'F';
    } else if (percentage >= 25 && percentage < 45) {
        grade = 'E';
    } else if (percentage >= 45 && percentage < 50) {
        grade = 'D';
    } else if (percentage >= 50 && percentage < 60) {
        grade = 'C';
    } else if (percentage >= 60 && percentage < 80) {
        grade = 'B';
    } else {
        grade = 'A';
    }

    // Output the percentage and grade
    printf("Percentage: %.f\n", percentage);
    printf("Grade: %c\n", grade);
	return 0;
}
