// Find the smallest number among 3 numbers(ladder)


#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c;

    printf("Enter Value Of A: ");
    scanf("%d", &a);

    printf("Enter Value Of B: ");
    scanf("%d", &b);

    printf("Enter Value Of C: ");
    scanf("%d", &c);

    if (a < b && a < c)
    {
        /* code */
        printf("A is smaller then B and C. And A's value is %d", a);
    }
    else if (b < a && b < c)
    {
        /* code */
        printf("B is smaller then A and C. And A's value is %d", b);
    }
    else if (c < a && c < b)
    {
        /* code */
        printf("C is smaller then A and B. And A's value is %d", c);
    }
    else
    {
        /* code */
        printf("All of them are similer!!!");
    }
    
    
    return 0;
}
