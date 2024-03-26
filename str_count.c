# include<stdio.h>
#include<string.h>
int main()
{
    char str[200];
    int i, line, ch, word;
    line= word= ch= 0;
    puts("Enter the string \n");
    scanf("%[^*]",str);
    for ( i = 0; str[i]!='\0'; i++)
    {
        if (str[i]=='\n')
        {
            line++;
            word++;
        }
        else
        {
            if (str[i]==' '|| str[i]=='\t')
            {
                ch++;
                word++;
                
            }
            else
            {
                ch++;
            }
            
        }
        
    }
    printf("\ncharacter count= %d\n",ch);
    printf("\nword count= %d\n",word);
    printf("\nline count= %d\n",line);
    return 0 ;
}