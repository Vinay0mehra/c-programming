# include<stdio.h>
#include<math.h>

int main()
{
    int a , b , c , d , r1 , r2 ;
    printf("Enter the value of a,b & c: ");
    scanf("%d%d%d", &a ,&b, &c);

    d = ((b*b)-(4*a*c));

    if (d == 0)
    {
        printf("Roots are real and equal");
        r1 = (-b/(2*a));
        r2 = r1 ;
        printf("Root 1 = %d\n Root 2 = %d\n", r1 , r2);
    }
    else if (d > 0)
    {
        printf("Roots are real and unequal");
        r1 = (-b+sqrt(d))/(2*a);
        r2 = (-b-sqrt(d))/(2*a);
        printf("Root 1 = %d\n Root 2 = %d\n", r1 , r2);
    }
    else
    {
        printf("Roots are imaginary");
    }
    
    return 0 ;
}