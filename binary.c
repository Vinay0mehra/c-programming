/* Program to read in a character and output its binary equivalent
 using only character output. */
#include <stdio.h>

int main() {

    char ch;
    printf("Please input a character: ");
    ch = getchar();
    printf("\nThe binary equivalent of this character is: ");
    putchar(((ch>>7)&1)+'0');
    putchar(((ch>>6)&1)+'0');
    putchar(((ch>>5)&1)+'0');
    putchar(((ch>>4)&1)+'0');
    putchar(((ch>>3)&1)+'0');
    putchar(((ch>>2)&1)+'0');
    putchar(((ch>>1)&1)+'0');
    putchar((ch&1)+'0');
    putchar('\n');
    return 0;
    
}
