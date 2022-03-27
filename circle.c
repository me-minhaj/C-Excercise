// Write a C program to compute the perimeter and area of a circle with a given radius.
// Expected Output:
// Perimeter of the Circle = 37.680000 inches
// Area of the Circle = 113.040001 square inches


#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    // A = pi*r^2

    float pi = 3.14;
    int radious;
    int area,perimeter;

    printf("Enter Circle Radious: ");
    scanf("%d", &radious);

    area = 3.14 * radious * radious;
    printf("\nArea of the circle is: %d square inches!!!", area);


    // Perimeter of circle = 2*pi*r
    perimeter = 2 * 3.14 * radious;
    printf("\nPerimeter of the circle is: %d inches!!!", perimeter);

    return 0;
}
