#include <stdio.h>

int main()
{
    int dd, mm, yyyy;

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    if (mm == 4)
        printf("Formatted date: %02d-Apr-%d\n", dd, yyyy);
    else
        printf("Month is not April.\n");

    return 0;
}