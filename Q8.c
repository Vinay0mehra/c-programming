#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2;

    // Input coefficients
    printf("Enter coefficients (a, b, c) of the quadratic equation (ax^2 + bx + c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Use switch statement to determine the roots based on the discriminant
    switch (signbit(discriminant)) {
        case 0: // Discriminant is positive
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots are real and distinct.\n");
            printf("Root 1 = %.2lf\n", root1);
            printf("Root 2 = %.2lf\n", root2);
            break;

        case 1: // Discriminant is negative
            printf("Roots are complex and imaginary.\n");
            double realPart = -b / (2 * a);
            double imaginaryPart = sqrt(-discriminant) / (2 * a);
            printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
            printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
            break;

        default: // Discriminant is zero
            root1 = -b / (2 * a);
            printf("Roots are real and equal.\n");
            printf("Root = %.2lf\n", root1);
            break;
    }

    return 0;
}
