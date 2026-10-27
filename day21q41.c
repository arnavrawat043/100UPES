#include <stdio.h>

int main() {
    int n, first, last, temp, digits = 1, swapped;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    last = temp % 10;

    while (temp >= 10) {
        temp = temp / 10;
        digits = digits * 10;
    }

    first = temp;

    swapped = n - first * digits - last;
    swapped = swapped + last * digits + first;

    printf("Number after swapping: %d\n", swapped);

    return 0;
}