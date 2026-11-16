#include <stdio.h>

// Define enumeration for user roles
enum UserRole
{
    ADMIN = 1,
    USER,
    GUEST
};

int main()
{
    enum UserRole role;

    // Display menu
    printf("----- USER ROLES -----\n");
    printf("1. ADMIN\n");
    printf("2. USER\n");
    printf("3. GUEST\n");

    // Take role from user
    printf("Enter your role: ");
    scanf("%d", (int *)&role);

    // Display message based on role
    switch (role)
    {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;

        case USER:
            printf("Welcome User! You have standard access.\n");
            break;

        case GUEST:
            printf("Welcome Guest! You have limited access.\n");
            break;

        default:
            printf("Invalid user role!\n");
    }

    return 0;
}