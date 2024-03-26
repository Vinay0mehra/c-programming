/* Program to store the name "Fred" in a character array, copy it,
 including the null byte terminator, into an integer array and
 then output both using printf with the %s format specifier. */
#include <stdio.h>

int main() {

    char cName[5] = "Fred";
    int iName[5];
    iName[0] = cName[0];
    iName[1] = cName[1];
    iName[2] = cName[2];
    iName[3] = cName[3];
    iName[4] = cName[4];
    printf("Character name is: %s\nInteger name is: %s\n",cName,iName);
    return 0;

}
/* The output of the integer array will depend on the computer. Each
 integer will consist of two or more bytes so every character
 stored in an integer will have at least one zero byte stored with
 it. Some computers store the leftmost byte first which will be
 zero, so the output of the integer name will immediately
 terminate without printing any character. Other computers store
 the rightmost byte first so the first character of the name will
 be printed, however the zero byte belonging to the leftmost
 byte(s) of the first integer will then terminate the output
 before the second character in the name is output. ie. Depending
 on the computer, no more than zero or one character of the
 integer array will be output. */
