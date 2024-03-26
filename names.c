/* Program to store 5 names in a 5 by 4 character array and output
 them to the screen. */
#include <stdio.h>

int main() {

    char Names[5][4] = {"Al","Bob",{'C','l','e','o'},"Des","Eve"};
    printf("Names are:\n%s\n%s\n%s\n%s\n%s\n",Names[0],Names[1],Names[2],Names[3],Names[4]);
    return 0;

}
/* The problem with the name "Cleo" is that there is no room for thenull
 byte terminator in a row of the array. This means (1) the
 string form of initialiser won't work and (2) output using printf
 and %s continues until a null byte is found, so the name Cleo has
 Des appended to it as there is no null byte until the null at the
 end of Des. */
