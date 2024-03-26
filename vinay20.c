#include <stdio.h>

void printStr(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    // char str[] = {'v', 'i', 'n', 'a', 'y', '\0'};
    // char str[6] = "vinay";
    char str[34];
    gets(str);
    printf("Using custom function printStr\n");
    printStr(str);
    printf("Using printf %s\n", str);
    printf("using puts: \n");
    puts(str);
    return 0;
}
