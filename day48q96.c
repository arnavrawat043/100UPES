#include <stdio.h>
#include <string.h>

int main()
{
    char str[200], temp;
    int i, start, end;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    start = 0;

    for (i = 0; ; i++)
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
        {
            end = i - 1;

            while (start < end)
            {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
            }

            if (str[i] == '\0' || str[i] == '\n')
                break;

            start = i + 1;
        }
    }

    printf("Result: %s", str);

    return 0;
}