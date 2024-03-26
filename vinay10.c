# include<stdio.h>
/* Arrays and pointer arithmetic in c*/
/* Adding And subtracting int and char space from pointer's address*/
int main()
{
    int a = 7 ;
    char b = '3';
    int* ptra = &a ;
    char* ptrb = &b ;
    printf("%d\n", ptra) ;
    ptra++ ; // adding 1;  We can also subtract 1 by using ptra-- or ptrb--
    printf("%d\n", ptra) ;
    printf("%d\n\n\n", ptra-2) ;


    printf("%d\n", ptrb) ;  /* We can also change format specifier from %d(integer) 
    to %x(hexadecimal integer) or %p(pointer value) */
    ptrb++ ;
    printf("%d\n", ptrb) ;
    printf("%d\n", ptrb+2) ;
    return 0 ;
}