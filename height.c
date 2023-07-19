#include <stdio.h>

int main() {
    int height_cm;

    printf("Enter the height of the person in centimeters: ");
    scanf("%d", &height_cm);

    int height_meters = height_cm / 100; 
    int remaining_cm = height_cm % 100; 

    printf("Height: %d cm (or %d meters and %d cm)\n", height_cm, height_meters, remaining_cm);

    if (height_cm < 150) {
        printf("The person is Short.\n");
    } else {
        if (height_cm < 170) {
            printf("The person is Average height.\n");
        } else {
            if (height_cm < 190) {
                printf("The person is Tall.\n");
            } else {
                printf("The person is Very Tall.\n");
            }
        }
    }

    return 0;
}
