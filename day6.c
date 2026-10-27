#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");

    // Validate input to ensure it's an integer
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1; // Exit with error code
    }

    // Check if the number is even or odd
    if (num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }

    return 0; 
}
