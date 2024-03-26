# include<stdio.h>
#include<string.h>

int main()
{
    char a[100], b[100];
    int i, j ;
    printf("Enter string 1");
    gets(a);
    printf("Enter string 2");
    gets(b);
    j= strlen(a);
    for (i=0; b[i]!='\0'; i++)
    {
      a[i+j]= b[i];  
    }
    a[i+j]= '\0';
    printf("Combined string is %s",a);
    return 0 ;
}