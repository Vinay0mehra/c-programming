#include <stdio.h>

int main() {
    char ch;

    // Input character from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Convert the character to lowercase for case-insensitive comparison
    ch = tolower(ch);

    // Check whether the character is a vowel using a switch statement
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            printf("%c is not a vowel.\n", ch);
    }

    return 0;
}
