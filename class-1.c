#include<stdio.h>
int main(){

    char ch;

    printf("Enter Character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        /* code */
        printf("Lowercase");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        /* code */
        printf("Uppercase");
    }
    
    else
    {
        printf("Not detected");
    }
    
    
    return 0;

}