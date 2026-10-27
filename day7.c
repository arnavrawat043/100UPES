#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    if (scanf("%d", &year) != 1) { // Input validation
        printf("Invalid input. Please enter a valid integer year.\n");
        return 1;
    }

    // Leap year check using conditional statements
    if (year % 4 == 0) {
        if (year % 100 != 0 || year % 400 == 0) {
            printf("%d is a leap year.\n", year);
        } else {
            printf("%d is not a leap year.\n", year);
        }
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
