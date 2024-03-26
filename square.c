# include<stdio.h>

int main()
{
    int a , peri , area ;
    printf("enter the side of the square:\n");
    scanf("%d", &a);

    peri = 4 * a ;
    area = a * a ;
    printf("The Perimerter of square is: %d\n", peri) ;
    printf("The Area of square is: %d\n", area) ;

    return 0 ;
}