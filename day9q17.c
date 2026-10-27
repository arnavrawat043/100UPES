#include <stdio.h>
#include <math.h>

// Function to categorize and compute roots
void findRoots(double a, double b, double c) {
    if (a == 0) {
        printf("Coefficient 'a' cannot be zero for a quadratic equation.\n");
        return;
    }

    double discriminant = b * b - 4 * a * c;

    printf("Discriminant (D) = %.2f\n", discriminant);

    if (discriminant > 0) {
        // Real and distinct roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (discriminant == 0) {
        // Real and equal roots
        double root = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root = %.2f\n", root);
    }
    else {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and distinct.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }
}

int main() {
    double a, b, c;

    printf("Enter coefficients a, b, and c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input. Please enter numeric values.\n");
        return 1;
    }

    findRoots(a, b, c);

    return 0;
}
