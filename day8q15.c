#include <stdio.h>
#include <ctype.h> // For isupper, islower, isdigit functions

int main() {
    char ch;

    printf("Enter a single character: ");

    // Read exactly one character, ignoring leading whitespace
    if (scanf(" %c", &ch) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Check character type
    if (isupper((unsigned char)ch)) {
        printf("'%c' is an uppercase alphabet.\n", ch);
    }
    else if (islower((unsigned char)ch)) {
        printf("'%c' is a lowercase alphabet.\n", ch);
    }
    else if (isdigit((unsigned char)ch)) {
        printf("'%c' is a digit.\n", ch);
    }
    else {
        printf("'%c' is a special character.\n", ch);
    }

    return 0;
}
