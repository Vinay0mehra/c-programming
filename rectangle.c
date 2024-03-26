#include <stdio.h>
/*Vinay Mehra*/

int main() {
    float length, breadth;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &breadth);

    // Calculate the perimeter and area of the rectangle
    float perimeter = 2 * (length + breadth);
    float area = length * breadth;

    printf("Perimeter of the rectangle: %d\n", perimeter);
    printf("Area of the rectangle: %d\n", area);

    return 0;
}
