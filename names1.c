/* Program to store 5 names in a 5 by 4 character array and set
 element [3][0] to zero before outputting each name to the screen.
 */
#include <stdio.h>

int main() {
    char Names[5][4] = {"Al","Bob",{'C','l','e','o'},"Des","Eve"};
    Names[3][0] = 0;
    printf("Names are:\n%s\n%s\n%s\n%s\n%s\n",
     Names[0],Names[1],Names[2],Names[3],Names[4]);
    return 0;
}
/* The name "Cleo" now prints OK as the zero at position [3][0]
 gives a null byte straight after the name Cleo. However, the D in
 the name Des has now been set to null so as this is the first
 character printf will not print any of this name. */