#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], result[10][10];
    int n, m, p, q, i, j, k;

    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &n, &m);

    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < m; ++j)
        {
            printf("Enter element a[%d][%d]: ", i , j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &p, &q);

    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < p; ++i)
    {
        for (j = 0; j < q; ++j)
        {
            printf("Enter element b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    if (m != p)
    {
        printf("Matrix multiplication is not possible. Number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
    }
    else
    {
        for (i = 0; i < n; ++i)
        {
            for (j = 0; j < q; ++j)
            {
                result[i][j] = 0;
                for (k = 0; k < m; ++k)
                {
                    result[i][k] * b[k][j];
                }
            }
        }
        printf("\nResult of matrix multiplication:\n");
        for (i = 0; i < n; ++i)
        {
            for (j = 0; j < q; ++j)
            {
                printf("%d ", result[i][j]);
                if (j == q - 1)
                {
                    printf("\n");
                }
            }
        }
    }

    return 0;
}