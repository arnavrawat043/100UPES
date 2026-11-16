#include <stdio.h>

int main()
{
    FILE *fp;
    int num, sum = 0, count = 0;
    float average;

    // Open the file in read mode
    fp = fopen("numbers.txt", "r");

    // Check whether the file exists
    if (fp == NULL)
    {
        printf("Error: Unable to open the file.\n");
        return 1;
    }

    // Read integers and calculate sum
    while (fscanf(fp, "%d", &num) == 1)
    {
        sum = sum + num;
        count++;
    }

    // Close the file
    fclose(fp);

    // Calculate and display average
    if (count > 0)
    {
        average = (float)sum / count;

        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
    }
    else
    {
        printf("The file contains no integers.\n");
    }

    return 0;
}