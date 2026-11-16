#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    // Open the file in read mode
    fp = fopen("info.txt", "r");

    // Check if the file exists
    if (fp == NULL)
    {
        printf("Error: Unable to open the file.\n");
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(fp)) != EOF)
    {
        characters++;

        // Count lines
        if (ch == '\n')
        {
            lines++;
        }

        // Count words
        if (ch == ' ' || ch == '\n' || ch == '\t')
        {
            inWord = 0;
        }
        else if (inWord == 0)
        {
            words++;
            inWord = 1;
        }
    }

    // Count the last line if it does not end with newline
    if (characters > 0 && ch != '\n')
    {
        lines++;
    }

    // Close the file
    fclose(fp);

    // Display the results
    printf("Total Characters = %d\n", characters);
    printf("Total Words = %d\n", words);
    printf("Total Lines = %d\n", lines);

    return 0;
}