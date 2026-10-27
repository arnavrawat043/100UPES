#include <stdio.h>

int main() {
    int num;

    
    printf("Enter an integer: ");

    // Validate input
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1; 

    // Nested if-else to check sign
    if (num >= 0) { // Outer if: non-negative numbers
        if (num == 0) {
            printf("The number is ZERO.\n");
        } else {
            printf("The number is POSITIVE.\n");
        }
    } else { // Outer else: negative numbers
        printf("The number is NEGATIVE.\n");
    }

    return 0;
}
