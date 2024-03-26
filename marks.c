#include<stdio.h>
// write a program to give results to students based on their respected marks given the condition marks<=30 then fail
// and marks>=30 then pass.

int main() {
    int marks;
    printf("enter number(0-100) : ");
    scanf("%d", &marks);
    //  if(marks >=0 && marks <= 30) {
    //  printf("FAIL \n");
    // } else if(marks >=30 %% marks <=100) {
    //      printf("PASS \n");
    // } else {
    //      printf("wrong marks");
    // }

    marks <= 30 ? printf("FAIL \n") : printf("PASS \n");
 
     return 0;
}
