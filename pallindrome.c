# include<stdio.h>

int main()
{
    int num, temp, sum = 0, rem ;
    printf("enter any number\n");
    scanf("%d\n", &num);
    
    
    while(num >  0)
    {
        rem = num % 10 ;
        sum *= 10 + rem ;
        num /= 10 ;
    }
    temp = num ;

    if (temp == sum)
    {
        printf("the number is a palindrome ");

    }
    else
    {
        printf("the number is not  a palindrom");
    }
    
    
    return 0 ;
}