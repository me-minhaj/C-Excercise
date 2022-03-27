// Write a C program to get the C version you are using.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */

    if (__STDC_VERSION__ >= 201710L)
    {
        /* code */
        printf("We are using C18!\n");
    }
    else if (__STDC_VERSION__ >= 201112L)
    {
        /* code */
        printf("We are using C11!\n");
    }
    else if (__STDC_VERSION__ >= 199901L)
    {
        /* code */
        printf("We are using C99!\n");
    }
    else
    {
        /* code */
        printf("We are using c90/c88!\n");
    }
    
    return 0;
}