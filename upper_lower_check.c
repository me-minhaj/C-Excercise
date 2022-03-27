// Write a C program to check whether a charecter is Upper case or lower case.

#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    /* code */

    char charecter;

    printf("Enter a charecter: ");
    scanf("%c", &charecter);

    if (isupper(charecter))
    {
        /* code */
        printf("The charecter is in Uppercase!");
    }

    else if (islower(charecter))
    {
        /* code */
        printf("The charecter is in lowercase!");
    }
    else
    {
        /* code */
        printf("Its not a charecter");
    }
    
    
    
    
    return 0;
}
