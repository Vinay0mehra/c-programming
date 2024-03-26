#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], c[3][3], i, j;
    printf("Enter the values of first matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Value of [%d][%d] is", i,j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the values of second matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Value of [%d][%d] is", i,j);
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Resultant matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}