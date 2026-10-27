#include <stdio.h>
#include <stdlib.h>

// Function to check if sides form a valid triangle
int isValidTriangle(double a, double b, double c) {
    return (a > 0 && b > 0 && c > 0 &&
            a + b > c &&
            a + c > b &&
            b + c > a);
}

int main() {
    double side1, side2, side3;

    printf("Enter the three sides of the triangle: ");

    // Input validation for numeric values
    if (scanf("%lf %lf %lf", &side1, &side2, &side3) != 3) {
        printf("Invalid input. Please enter numeric values.\n");
        return 1;
    }

    // Check if the sides form a valid triangle
    if (!isValidTriangle(side1, side2, side3)) {
        printf("The given sides do not form a valid triangle.\n");
        return 0;
    }

    // Classify the triangle
    if (side1 == side2 && side2 == side3) {
        printf("The triangle is Equilateral.\n");
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("The triangle is Isosceles.\n");
    } else {
        printf("The triangle is Scalene.\n");
    }

    return 0;
}
