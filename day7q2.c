#include <stdio.h>
#include <ctype.h> // For isalpha() and tolower()

int main() {
    char ch;

    printf("Enter a single alphabet: ");
    // Read a single character
    if (scanf(" %c", &ch) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Validate if input is an alphabet
    if (!isalpha(ch)) {
        printf("Error: '%c' is not an alphabet.\n", ch);
        return 1;
    }

    // Convert to lowercase for easier comparison
    ch = tolower(ch);

    // Check vowel or consonant using if-else
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("'%c' is a vowel.\n", ch);
    } else {
        printf("'%c' is a consonant.\n", ch);
    }

    return 0;
}
