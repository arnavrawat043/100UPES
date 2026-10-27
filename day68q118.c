#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int sum = 0, total, missing;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter %d array elements: ", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    total = n * (n + 1) / 2;
    missing = total - sum;

    printf("Missing number: %d\n", missing);

    return 0;
}