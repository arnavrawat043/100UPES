#include <stdio.h>

// Define enumeration with explicit values
enum Numbers
{
    ONE = 10,
    TWO = 11,
    THREE = 12,
    FOUR = 13,
    FIVE = 14
};

int main()
{
    printf("Enum Values:\n");

    printf("ONE = %d\n", ONE);
    printf("TWO = %d\n", TWO);
    printf("THREE = %d\n", THREE);
    printf("FOUR = %d\n", FOUR);
    printf("FIVE = %d\n", FIVE);

    return 0;
}