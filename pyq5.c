#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char filename[] = "data.txt";
    char ch;
    int count = 0;

    // Open the file for reading
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Create a temporary file for writing the modified content
    FILE *tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL) {
        printf("Error creating temporary file.\n");
        fclose(file);
        return 1;
    }

    // Read characters from the file and change every 5th character to uppercase
    while ((ch = fgetc(file)) != EOF) {
        if (isalpha(ch)) {
            count++;
            if (count % 5 == 0) {
                ch = toupper(ch);
            }
        }
        fputc(ch, tempFile);
    }

    fclose(file);
    fclose(tempFile);

    // Rename the temporary file to the original filename
    if (rename("temp.txt", filename) != 0) {
        printf("Error renaming the file.\n");
        return 1;
    }

    printf("File modified successfully.\n");

    return 0;
}
//In this program:

//   1.It opens the input file ("data.txt") for reading.
//   2.It creates a temporary file ("temp.txt") for writing the modified content.
//   3.It reads characters from the input file, changes every 5th alphabetic character to uppercase, and writes the modified content to the temporary file.
//  4.After processing, it closes both files, and then it renames the temporary file to the original filename.

//Note: This program assumes that the data file contains alphabetic characters.
//If the file contains other types of characters, you may need to modify the program accordingly.
// Also, make sure to replace "data.txt" with the actual filename you want to process.