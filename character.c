/* Program to read in a character and output its binary value. */
#include <stdio.h>

int main() {

    char ch;
    printf("Please input a character: ");
    ch = getchar();
    printf("\nThe binary equivalent of this character is: ");
    printf("%d",(ch>>7)&1);
    printf("%d",(ch>>6)&1);
    printf("%d",(ch>>5)&1);
    printf("%d",(ch>>4)&1);
    printf("%d",(ch>>3)&1);
    printf("%d",(ch>>2)&1);
    printf("%d",(ch>>1)&1);
    printf("%d\n",ch&1);
    return 0;
}
