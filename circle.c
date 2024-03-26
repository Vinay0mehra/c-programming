#include <stdio.h>

int main() {
    
    float radius, perimeter, area;
    const float pi = 3.14; 

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    perimeter = 2 * pi * radius;
    area = pi * radius * radius;

    printf("Perimeter of the circle: %f\n", perimeter);
    printf("Area of the circle: %f\n", area);

    return 0;
}
