// write a C program to check whether a character is alphabet or a digit

#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    /* code */

    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isalpha(ch))
    {
        /* code */
        printf("The character is a Alphabet!");
    }
    else if (isdigit(ch))
    {
        /* code */
        printf("The character is a Digit");
    }
    else
    {
        /* code */
        printf("I don't know what is this!!!");
    }
    
    
    
    return 0;
}
