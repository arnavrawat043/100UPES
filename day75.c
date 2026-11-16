#include <stdio.h>

int main()
{
    FILE *fp;
    char text[200];

    // Open the file in append mode
    fp = fopen("info.txt", "a");

    // Check whether the file opened successfully
    if (fp == NULL)
    {
        printf("Error: Unable to open the file.\n");
        return 1;
    }

    // Take input from the user
    printf("Enter a line of text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append text to the file
    fputs(text, fp);

    printf("Text appended successfully!\n");

    // Close the file
    fclose(fp);

    return 0;
}