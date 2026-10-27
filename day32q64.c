#include <stdio.h>

int main() {
    int a[100], n, i, digit, temp;
    int freq[10] = {0};
    int max = 0, result = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the integers:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        temp = a[i];

        if (temp < 0)
            temp = -temp;

        if (temp == 0) {
            freq[0]++;
        }

        while (temp > 0) {
            digit = temp % 10;
            freq[digit]++;
            temp = temp / 10;
        }
    }

    for (i = 0; i < 10; i++) {
        if (freq[i] > max) {
            max = freq[i];
            result = i;
        }
    }

    printf("Most frequent digit = %d\n", result);
    printf("Occurrences = %d\n", max);

    return 0;
}