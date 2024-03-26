#include <stdio.h>
#include <math.h>

double calculateSeriesSum(double x, int n) {
    double sum = 1.0;  // The first term of the series

    for (int i = 1; i <= n; i++) {
        int exponent = 2 * i + 1;
        double term = pow(-1, i) * pow(x, exponent) / tgamma(exponent + 1);
        sum += term;
    }

    return sum;
}

int main() {
    double x;
    int n;

    // Input values
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Calculate and print the sum
    double result = calculateSeriesSum(x, n);
    printf("The sum of the series is: %lf\n", result);

    return 0;
}
