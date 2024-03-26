# include<stdio.h>
/*calculation of simple interest*/
/*vinay mehra*/
int main() {

    int p,n;
    float r,si;
    printf("Enter the values of p,n,r");
    scanf("%d %d %f",&p,&n,&r);

    si=p*n*r/100;
    printf("%f",si);
    
}