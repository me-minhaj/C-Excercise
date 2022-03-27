// Rectengle check.

#include <stdio.h>

int main(){
    
    float height;
    float width;

    printf("Enter The Height Of The Box: ");
    scanf("%f", &height);

    printf("Enter The Width Of The Box: ");
    scanf("%f", &width);

    if (height == width)
    {
        printf("The Box Is Square!!!");
    }
    else
    {
        printf("It's Not Square!");
    }
    
    
    return 0;
}