#include <stdio.h>

int main()
{
    int a, b;
    char op;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf("%c", &op);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch (op)
    {
        case '+':
            printf("Result = %d", a + b);
            break;

        case '-':
            printf("Result = %d", a - b);
            break;

        case '*':
            printf("Result = %d", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result = %d", a / b);
            else
                printf("Division by zero is not allowed");
            break;

        case '%':
            if (b != 0)
                printf("Result = %d", a % b);
            else
                printf("Modulo by zero is not allowed");
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}