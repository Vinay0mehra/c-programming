# include<stdio.h>
/*vinay mehra*/
/*finding average of three numbers*/

int main() {
    int a,b,c;
    printf("enter a");
    scanf("%d", &a);

    printf("enter b");
    scanf("%d", &b);

    printf("enter c");
    scanf("%d", &c);

    int sum = a + b + c ;
    int average = sum / 3 ;
    
    printf("The average is %d\n" , average) ;
    return 0;

}