#include <stdio.h>

int main() {
    float num1, num2;

    // Prompt the user to enter two numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Perform arithmetic operations and display the results
    printf("Sum: %.2f\n", num1 + num2);
    printf("Difference: %.2f\n", num1 - num2);
    printf("Product: %.2f\n", num1 * num2);

    if (num2 != 0) {
        printf("Quotient: %.2f\n", num1 / num2);
    } else {
        printf("Cannot divide by zero.\n");
    }

    return 0;
}
