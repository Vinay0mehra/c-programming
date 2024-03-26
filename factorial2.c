#include<stdio.h>

int recfactorial(int);
int non_recfactorial(int);
int main()
{
    int a, n, b;
    printf("Enter any number \n");
    scanf("%d", &n);
    a = recfactorial(n);
    printf("The factorial of given number using recursion is %d\n", a);
    b = non_recfactorial(n);
    printf("The factorial of given number using non recursive function is %d\n", b);
}
int recfactorial(int x)
{
    if (x == 1 || x== 0)
    {
        return (1);
    }
    else
    {
        return (x * recfactorial(x - 1));
    }
}
int non_recfactorial(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return (f);
}