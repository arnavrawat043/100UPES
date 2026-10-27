#include <stdio.h>

int main()
{
    long long n, rem, result = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &n);

    if (n == 0)
    {
        printf("1's complement = 1");
        return 0;
    }

    while (n > 0)
    {
        rem = n % 10;

        if (rem == 0)
            result = result + 1 * place;
        else if (rem == 1)
            result = result + 0 * place;
        else
        {
            printf("Invalid binary number");
            return 0;
        }

        place = place * 10;
        n = n / 10;
    }

    printf("1's complement = %lld", result);

    return 0;
}