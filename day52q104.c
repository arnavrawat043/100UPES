#include <stdio.h>

int main()
{
    int n, x;
    int total, sum;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    total = n * (n + 1) / 2;

    for (x = 1; x <= n; x++)
    {
        sum = x * (x + 1) / 2;

        if (sum == total - (x * (x - 1) / 2))
        {
            printf("%d\n", x);
            return 0;
        }
    }

    printf("-1\n");

    return 0;
}