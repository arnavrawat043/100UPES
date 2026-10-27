#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j, sum = 0;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter the matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum = sum + a[i][j];
        }
    }

    printf("Sum of all matrix elements = %d\n", sum);

    return 0;
}