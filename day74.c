#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char sourceFile[100], destFile[100];
    int ch;

    // Take filenames from the user
    printf("Enter source filename: ");
    scanf("%99s", sourceFile);

    printf("Enter destination filename: ");
    scanf("%99s", destFile);

    // Open source file in read mode
    source = fopen(sourceFile, "r");

    if (source == NULL)
    {
        printf("Error: Cannot open source file.\n");
        return 1;
    }

    // Open destination file in write mode
    destination = fopen(destFile, "w");

    if (destination == NULL)
    {
        printf("Error: Cannot open destination file.\n");
        fclose(source);
        return 1;
    }

    // Copy contents character by character
    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    printf("File copied successfully!\n");

    // Close both files
    fclose(source);
    fclose(destination);

    return 0;
}