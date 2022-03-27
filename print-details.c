// Write a C program to print your name, date of birth. and mobile number

#include <stdio.h>

int main(){

    char name;
    char dob;
    int phone;

    printf("Enter Your Name: ");
    scanf("%s", &name);

    printf("\nEnter Your Date of birth: ");
    scanf("%s", &dob);

    printf("\nEnter Your Mobile Number: ");
    scanf("%d", &phone);



    printf("\n****************************");
    printf("\n****************************");
    printf("\n****************************");
    printf("\n[+]Name          =>%d", name);
    printf("\n[+]Date Of Birth =>%d", dob);
    printf("\n[+]Mobile Number =>%d", phone);
    printf("\n****************************");
    printf("\n****************************");
    printf("\n****************************");
    return 0;
}