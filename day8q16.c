#include <stdio.h>

int main() {
    double num1, num2, num3;

    // Prompt user for input
    printf("Enter three numbers: ");

    // Validate input
    if (scanf("%lf %lf %lf", &num1, &num2, &num3) != 3) {
        printf("Invalid input. Please enter numeric values only.\n");
        return 1; // Exit with error code
    }

    // Determine the largest number using if-else
    if (num1 >= num2 && num1 >= num3) {
        printf("The largest number is: %.2f\n", num1);
    }
    else if (num2 >= num1 && num2 >= num3) {
        printf("The largest number is: %.2f\n", num2);
    }
    else {
        printf("The largest number is: %.2f\n", num3);
    }

    return 0; // Successful execution
}
