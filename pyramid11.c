#include <stdio.h>

int main() {
    int rows, i, j, currentNum = 1;

    printf("Enter the number of rows for the number pyramid: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; ++i) {
        
        for (j = 1; j <= rows - i; ++j) {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; ++j) {
            printf("%d", currentNum++);
        }

        printf("\n");
    }

    return 0;
}