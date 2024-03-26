#include <stdio.h>
int main()
{
    char name[50];
    printf("Enter your name: ");
    gets(name);
    printf("My name is %s ", name);
    return 0;
}