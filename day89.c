#include <stdio.h>

// Define enum with assigned values
enum Numbers
{
    ONE = 10,
    TWO = 20,
    THREE = 30,
    FOUR = 40,
    FIVE = 50
};

int main()
{
    // Declare enum variables
    enum Numbers n1, n2, n3, n4, n5;

    // Assign enum constants
    n1 = ONE;
    n2 = TWO;
    n3 = THREE;
    n4 = FOUR;
    n5 = FIVE;

    // Print integer values
    printf("Enum Values:\n");

    printf("ONE = %d\n", n1);
    printf("TWO = %d\n", n2);
    printf("THREE = %d\n", n3);
    printf("FOUR = %d\n", n4);
    printf("FIVE = %d\n", n5);

    return 0;
}