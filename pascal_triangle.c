#include <stdio.h>

int main()
{
    int n, r, space, rows, ncr;
    printf("Enter no. of rows:");
    scanf("%d", &rows);

    for (n = 0; n < rows; n++)
    {
        for (space = 1; space < rows - n; space++)
        {
            printf(" ");
        }
        for (r = 0; r <= n; r++)
        {
            if (n == 0 || r == 0)
            {
                ncr = 1;
                printf("%d ", ncr);
            }
            else
            {
                ncr = (ncr * (n - r + 1) / r);
                printf("%d ", ncr);
            }
        }
        printf("\n");
    }
    return 0;
}
