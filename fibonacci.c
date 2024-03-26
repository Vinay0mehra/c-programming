#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, c, i;
    printf("Enter the number of terms you want:\n");
    scanf("%d", &n);

    printf("Finonacci Series: ");
    
    for (i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            c = i;
        }
        else
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%d ", c);
    }

    return 0;
}
