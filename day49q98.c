#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int i, last;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    last = strlen(name) - 1;

    if (name[last] == '\n')
        name[last] = '\0';

    last = strlen(name) - 1;

    printf("Output: ");

    for (i = 0; i < last; i++)
    {
        if (i == 0 && name[i] != ' ')
            printf("%c. ", name[i]);
        else if (name[i] == ' ' && name[i + 1] != ' ')
        {
            if (strchr(name + i + 1, ' ') != NULL)
                printf("%c. ", name[i + 1]);
            else
                printf("%s", name + i + 1);
        }
    }

    printf("\n");

    return 0;
}