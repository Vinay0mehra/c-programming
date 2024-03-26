# include<stdio.h>

int main()
{
    int i , j ,k , rows ;
    printf("Enter no. of rows:");
    scanf("%d",&rows);
    for ( i = 1; i <= rows; i++)
    {
        for(j=1 ; j <=rows-i; j++)
        {
            printf(" ");
        }
        for ( k = 1; k <= i ; k++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0 ;
}