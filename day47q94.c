#include <stdio.h>
#include <string.h>

int main()
{
    char str[200], word[50], longest[50];
    int i, j, max = 0, len;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    i = 0;

    while (str[i] != '\0')
    {
        while (str[i] == ' ' || str[i] == '\n')
            i++;

        j = 0;

        while (str[i] != ' ' && str[i] != '\n' &&
               str[i] != '\0')
        {
            word[j++] = str[i++];
        }

        word[j] = '\0';
        len = strlen(word);

        if (len > max)
        {
            max = len;
            strcpy(longest, word);
        }
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", max);

    return 0;
}