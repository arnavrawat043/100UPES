#include <stdio.h>

// Define enumeration for menu choices
enum Menu
{
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    enum Menu choice;
    float num1, num2, result;

    // Display menu
    printf("----- MENU -----\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");

    // Take choice from user
    printf("Enter your choice: ");
    scanf("%d", (int *)&choice);

    // Take two numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Perform operation
    switch (choice)
    {
        case ADD:
            result = num1 + num2;
            printf("Addition = %.2f\n", result);
            break;

        case SUBTRACT:
            result = num1 - num2;
            printf("Subtraction = %.2f\n", result);
            break;

        case MULTIPLY:
            result = num1 * num2;
            printf("Multiplication = %.2f\n", result);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}