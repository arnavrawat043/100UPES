#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;

    // Open the file in read mode
    fp = fopen("info.txt", "r");

    // Check whether the file exists
    if (fp == NULL)
    {
        printf("Error: Unable to open the file.\n");
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(fp)) != EOF)
    {
        ch = tolower((unsigned char)ch);

        // Check for vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u')
        {
            vowels++;
        }
        // Check for consonants
        else if (ch >= 'a' && ch <= 'z')
        {
            consonants++;
        }
    }

    // Close the file
    fclose(fp);

    // Display the results
    printf("Total Vowels = %d\n", vowels);
    printf("Total Consonants = %d\n", consonants);

    return 0;
}