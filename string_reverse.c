#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], temp;
    int l, lin, rin, i ;
    printf("Input a string to reverse\n");
    scanf("%s", str1);
    l= strlen(str1);
    lin=0;
    rin= l-1;
    for ( i = lin; i < rin; i++)
    {
        temp= str1[i];
        str1[i]=str1[rin];
        str1[rin]=temp;
        rin--;
    }
    printf("Reversed string is %s", str1);
    return 0 ;
}