/* This is a comment and can be written anywhere and on more
 than one line if necessary */
/* The next statements are preprocessor controls */
#include <stdio.h>
#define ONE 1
int globalnum; 
/* This is an example of a
global data definition */
/* The main program now follows -
 the { } mark the beginning and end */
int main() {
    int localnum, sum; 
    /* local data definitions */
    globalnum=ONE; 
    /* code statements */
    localnum=ONE;
    sum=globalnum+localnum;
    printf("answer is %d\n\a", sum); /* printf is a library function used for
    outputting information to the screen */
    return 0; /* this stops the program */
}