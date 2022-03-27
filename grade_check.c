// Write a C program to calculate marks grade from given value. marks>=80: A+, marks>=70: A;

#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */

    int marks;

    printf("Enter value of marks: ");
    scanf("%d", &marks);

    if (marks >= 80 && marks <= 100)
    {
        /* code */
        printf("The grade is A+");
    }
    else if (marks > 100)
    {
        /* code */
        printf("Marks have to be less than 100");
    }
    
    else if (marks >= 70 && marks <= 79)
    {
        /* code */
        printf("The grade is A");
    }
    else if (marks >= 60 && marks <= 69)
    {
        /* code */
        printf("The grade is A-");
    }
    else if (marks > 33 && marks <= 59)
    {
        /* code */
        printf("The grade is D");
    }
    else
    {
        /* code */
        printf("You are fail!!!");
    }
    
    
    return 0;
}