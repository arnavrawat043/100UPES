#include <stdio.h>

int main()
{
    int a, b, i, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a == 0 || b == 0)
    {
        printf("LCM = 0");
    }
    else
    {
        if (a < 0) a = -a;
        if (b < 0) b = -b;

        lcm = (a > b) ? a : b;

        for (i = lcm; ; i++)
        {
            if (i % a == 0 && i % b == 0)
            {
                lcm = i;
                break;
            }
        }

        printf("LCM = %d", lcm);
    }

    return 0;
}