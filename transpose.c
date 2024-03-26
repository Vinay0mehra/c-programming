#include <stdio.h>

int main()
{
    int A[10][10], T[10][10], r, c, i, j;
    printf("Enter no. of rows and no. of columns");
    scanf("%d%d", &r, &c);
    printf("Enter the values of matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Value of [%d][%d] is", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            T[j][i] = A[i][j];
        }
    }
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("%d\t", T[i][j]);
        }
        printf("\n");
    }

    return 0;
}