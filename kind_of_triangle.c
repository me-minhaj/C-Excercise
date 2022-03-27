// Write a C program to check whether a triangle is equilateral or isosceles or scalene.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */

    int a,b,c;

    printf("Enter value of A: ");
    scanf("%d", &a);

    printf("Enter value of B: ");
    scanf("%d", &b);

    printf("Enter value of C: ");
    scanf("%d", &c);

    if (a == b && b == c)
    {
        /* code */
        printf("The triangle is equilateral triangle!!!");
    }
    else if (a == b || a == c || b == c)
    {
        /* code */
        printf("The triangle is isosceles triangle!!!");
    }
    else
    {
        /* code */
        printf("It's a scalene triangle!!!");
    }
    
    
    
    return 0;
}
