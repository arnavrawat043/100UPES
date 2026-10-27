#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int sum = 0, total, repeated;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    total = (n - 1) * (n - 2) / 2;
    repeated = sum - total;

    printf("Repeated element: %d\n", repeated);

    return 0;
}