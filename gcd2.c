#include <stdio.h>
#include <conio.h>

int gcd(int, int);
int main()
{
    int num1, num2, n;
    printf("Enter two numbers to find their gcd");
    scanf("%d%d", &num1, &num2);
    n = gcd(num1, num2);
    printf("The gcd of %d and %d is %d\n", num1, num2, n);
    return 0;
}
int gcd(int x, int y)
{
    int result = 1, k = 2;
    while (k <= x && k <= y)
    {
        if (x % k == 0 && y % k == 0)
        {
            result = k;
            k++;
        }
    }
    return result;
}