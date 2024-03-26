#include <stdio.h>

int main()
{
    int m;
    printf("Enter the value bteween 1 to 3: \n");
    scanf("%d", &m);

    if (m == 1)
    {
        printf("Delhi\n");
    }
    else if (m == 2)
    {
        printf("Haryana\n");
    }
    else if (m == 3)
    {
        printf("Punjab\n");
    }
    else
    {
        printf("Invalid value\n");
    }

    return 0;
}