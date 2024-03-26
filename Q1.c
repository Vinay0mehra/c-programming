#include <stdio.h>

int main() 
{
    int n, i, j ;
    char letter = 'A';
    printf("Enter the number of rows: ");
    scanf("%d", &n);


    for (i = 1; i <= n; i++) 
    {
        for (j = 1; j <= i; j++) 
        {
            printf("%c ", letter);
        }
        letter++; 
        printf("\n");
    }

    return 0;
}
