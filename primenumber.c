#include<stdio.h>

int main()
{
    int a, i, j, n = 0;
    printf("Enter the length of the list:\n");
    scanf("%d", &a);

    for (i = 2; i <= a; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                n++;
        }
        if (n == 0)
        {
            printf("%d\n", i);
        }
        n = 0;
    }

    return 0;
}
