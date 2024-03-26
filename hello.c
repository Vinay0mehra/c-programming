/* Calculation of simple interest */ 
/*vinay mehra*/ 
# include<stdio.h>
int main( ) {
    int p, n ; 
    float r, si ; 
    p = 1000 ; 
    n = 5 ; 
    r = 8.5 ; 
    /* formula for simple interest */ 
    si = p * n * r / 100 ; 
    printf("Amount=%d\nRate=%f",p,r);
    printf("Simple Interest=%f",si);
    return 0;
}


 
 