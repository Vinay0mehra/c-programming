#include<stdio.h>
// to print if it's sunday and it's snowing => true
// to print if it's monday or it's raining => true

int main() {
    int isSunday = 1 ;
    int isSnowing = 1 ;
    int isMonday = 0 ;
    int isRaining = 1 ;
    printf("%d \n", isSunday && isSnowing ) ;
    printf("%d \n", isMonday || isRaining) ;
    return 0 ;
}