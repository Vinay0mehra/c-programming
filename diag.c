/* program to print out the diagonal values of a 3 by 3 array
 running from bottom left to top right of the array. */
#include <stdio.h>

int main(){

    int Diag[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    printf("Diagonal values are: %d,%d,%d\n",Diag[2][0],Diag[1][1],Diag[0][2]);
    return 0;
    
}