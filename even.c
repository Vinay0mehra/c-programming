#include<stdio.h>
#include<math.h>
/* to check if the number is divisible by 2
OR
to check if a number is even or odd */

int main() {
    // even => 1
    // odd => 0
    int x ;
    printf("enter a number :") ;
    scanf("%d", &x) ;
    printf("%d", x % 2 == 0 ) ;
    return 0 ;
}