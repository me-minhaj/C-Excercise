// Find the largest number among 4 numbers(ladder)


#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c,d;

    printf("Enter Value Of A: ");
    scanf("%d", &a);

    printf("Enter Value Of B: ");
    scanf("%d", &b);

    printf("Enter Value Of C: ");
    scanf("%d", &c);

    printf("Enter Value Of D: ");
    scanf("%d", &d);

    if (a > b && a > c && a > d)
    {
        /* code */
        printf("A is greater then B,C,D. And A's value is %d", a);
    }
    else if (b > a && b > c && b > d)
    {
        /* code */
        printf("B is greater then A,C,D. And A's value is %d", b);
    }
    else if (c > a && c > b && c > d)
    {
        /* code */
        printf("C is greater then A,B,D. And A's value is %d", c);
    }
    else if (d > a && d > b && d > c)
    {
        /* code */
        printf("D is greater then A,B,C. And A's value is %d", d);
    }
    else
    {
        /* code */
        printf("All of them are similer!!!");
    }
    
    
    return 0;
}
