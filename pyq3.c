#include <stdio.h>

void reverseString(char str[])
{
    // Find the length of the string
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }

    // Swap characters from the beginning and end of the string
    for (int i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main()
{
    char inputString[100];

    // Input string from the user
    printf("Enter a string: ");
    scanf("%s", inputString);

    // Reverse the string
    reverseString(inputString);

    // Display the reversed string
    printf("Reversed string: %s\n", inputString);

    return 0;
}
