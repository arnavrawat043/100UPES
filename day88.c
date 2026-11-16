#include <stdio.h>

// Define enumeration
enum Days
{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main()
{
    enum Days day;

    // Array to store enum names
    char *names[] = {
        "SUNDAY",
        "MONDAY",
        "TUESDAY",
        "WEDNESDAY",
        "THURSDAY",
        "FRIDAY",
        "SATURDAY"
    };

    printf("Enum Names and Integer Values:\n\n");

    // Print enum names and values using loop
    for (day = SUNDAY; day <= SATURDAY; day++)
    {
        printf("%s = %d\n", names[day], day);
    }

    return 0;
}