#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
}; 
struct Student vinay, ravi, shubham;

int main()
{
    vinay.id = 1;
    ravi.id = 2;
    shubham.id = 3;
    vinay.marks = 66;
    ravi.marks = 466;
    shubham.marks = 46;
    vinay.fav_char = 'p';
    ravi.fav_char = 'y';
    shubham.fav_char = 'o';
    strcpy(vinay.name, "Vinay Mehra");
    strcpy(shubham.name, "Shubham Kumar");
    printf("Vinay got %d marks\n", vinay.marks);
    printf("Vinay's name is: %s\n", vinay.name);
    printf("Shubham got %d marks\n", shubham.marks);
    printf("Shubham's name is: %s\n", shubham.name);

    return 0;
}
