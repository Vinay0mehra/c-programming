/* Outputting the number entered in different ways */
/*vinay mehra*/
#include <stdio.h>

int main() {

    int number ;
    printf("enter a number :") ;
    scanf("%d", &number) ;
    printf("Number %d as a character is %c\n",number,number);
    printf("Number %d in decimal is %o in octal and\n %x in hexadecimal\n",number,number,number);
    printf("Number %d in hex shifted left 4 places is %x\n",number,number<<4);
    printf("Number %d in hex with bits 0 & 5 cleared is %x\n",number,number & ~0x21);
    return 0;
    
}