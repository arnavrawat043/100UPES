#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int total = 0, leftSum = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    for (i = 0; i < n; i++)
    {
        if (leftSum == total - leftSum - arr[i])
        {
            printf("%d\n", i);
            return 0;
        }

        leftSum += arr[i];
    }

    printf("-1\n");

    return 0;
}