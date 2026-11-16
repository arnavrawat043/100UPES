#include <stdio.h>

// Define enumeration for Gender
enum Gender
{
    MALE,
    FEMALE,
    OTHER
};

// Define structure for Person
struct Person
{
    char name[50];
    int age;
    enum Gender gender;
};

int main()
{
    struct Person p;

    // Take person details
    printf("Enter name: ");
    scanf("%49s", p.name);

    printf("Enter age: ");
    scanf("%d", &p.age);

    printf("Select Gender:\n");
    printf("0. MALE\n");
    printf("1. FEMALE\n");
    printf("2. OTHER\n");

    printf("Enter gender choice: ");
    scanf("%d", (int *)&p.gender);

    // Display person details
    printf("\n--- Person Details ---\n");
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);

    // Display gender
    printf("Gender: ");

    switch (p.gender)
    {
        case MALE:
            printf("Male\n");
            break;

        case FEMALE:
            printf("Female\n");
            break;

        case OTHER:
            printf("Other\n");
            break;

        default:
            printf("Invalid Gender\n");
    }

    return 0;
}