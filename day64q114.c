#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int i, j, k, len;
    int maxLen = 0, count, repeated;

    printf("Enter a string: ");
    scanf("%s", s);

    len = strlen(s);

    for (i = 0; i < len; i++)
    {
        count = 0;

        for (j = i; j < len; j++)
        {
            repeated = 0;

            for (k = i; k < j; k++)
            {
                if (s[k] == s[j])
                {
                    repeated = 1;
                    break;
                }
            }

            if (repeated)
                break;

            count++;
        }

        if (count > maxLen)
            maxLen = count;
    }

    printf("%d\n", maxLen);

    return 0;
}