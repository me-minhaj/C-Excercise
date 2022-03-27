// triangle validity check

#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */

    int a,b,c;

    printf("Enter the value of A side: ");
    scanf("%d", &a);

    printf("Enter the value of B side: ");
    scanf("%d", &b);

    printf("Enter the value of C side: ");
    scanf("%d", &c);

    // As we know, A triangle is valid if the sum of its two sides is greater than the third side.

    if (a+b < c)
    {
        /* code */
        printf("It's not a valid triangle");
    }
    else if (a+c < b)
    {
        /* code */
        printf("It's not a valid triangle");
    }
    else if (b+c < a)
    {
        /* code */
        printf("It's not a valid triangle");
    }
    else if (a == b == c)
    {
        /* code */
        printf("I don't know what is this.");
    }
    
    else
    {
        /* code */
        printf("It's a valid triangle");
    }
    
    
    
    
    return 0;
}
