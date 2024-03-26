# include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    printf("Enter string to check for pallinmdrome\n");
    gets(str1);
    strcpy(str2,str1);
    strrev(str2);
    if (strcmp(str1,str2)== 0)
    {
        printf("String is pallindrome\n");
    }
    else
    {
        printf("String is not a pallindrome");
    }
    
    return 0 ;
}