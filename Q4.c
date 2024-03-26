#include <stdio.h>

int main() 
{
    int n, i, j, k;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
    {
        for (k = 1; k <= n - i; k++) 
        {
            printf("   ");
        }
        for (j = i; j <= 2 * i - 1; j++) 
        {
            printf("%-3d", j);
        }
        for (j = 2 * i - 2; j >= i; j--) 
        {
            printf("%-3d", j);
        }

        printf("\n");
    }

    return 0;
}
