#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void createFile() {
    FILE *file;
    char text[] = "Hello, this is a sample text for counting vowels and consonants.";

    // Create and write to the file
    file = fopen("sample.txt", "w");
    if (file == NULL) {
        printf("Error creating file.\n");
        exit(1);
    }

    fprintf(file, "%s", text);
    fclose(file);
}

void countVowelsAndConsonants() {
    FILE *file;
    char ch;
    int vowels = 0, consonants = 0;

    // Open the file for reading
    file = fopen("sample.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    // Read characters from the file and count vowels and consonants
    while ((ch = fgetc(file)) != EOF) {
        if (isalpha(ch)) {
            ch = tolower(ch); // Convert to lowercase for case-insensitive comparison
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(file);

    // Display the results
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
}

int main() {
    // Create a file with sample text
    createFile();

    // Count vowels and consonants in the created file
    countVowelsAndConsonants();

    return 0;
}
