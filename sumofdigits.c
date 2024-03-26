#include <stdio.h>

int main() {
    int num, sum = 0, r;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate the sum of digits
    while (num > 0) {
        r = num % 10; // Get the last r
        sum += r;       // Add the r to the sum
        num /= 10;       // Remove the last r
    }

    // Display the result
    printf("The sum of the digits is: %d\n", sum);

    return 0;
}
