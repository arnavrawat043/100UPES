#include <stdio.h>

int main() {
    float percentage;

    // Prompt user for input
    printf("Enter percentage (0-100): ");

    // Validate input type
    if (scanf("%f", &percentage) != 1) {
        printf("Invalid input. Please enter a numeric value.\n");
        return 1; // Exit with error
    }

    // Validate range
    if (percentage < 0 || percentage > 100) {
        printf("Percentage must be between 0 and 100.\n");
        return 1;
    }

    // Assign grade based on criteria
    if (percentage >= 90) {
        printf("Grade: A\n");
    } else if (percentage >= 80) {
        printf("Grade: B\n");
    } else if (percentage >= 70) {
        printf("Grade: C\n");
    } else if (percentage >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    return 0; // Successful execution
}
