// Write a C program to check whether a number is negative or positive or it's zero.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */

    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    // As we know, If a number is greater than 0 then it's a positive number and if a number is less than 0 then it's a negative number!
    
    if (num > 0)
    {
        /* code */
        printf("It's a positive number!");
    }
    else if (num < 0)
    {
        /* code */
        printf("It's a negative number!");
    }
    else
    {
        /* code */
        printf("The number is Zero!!!");
    }
    
    
    
    return 0;
}
