// Write a C program to check whether a year is leap year or not.

#include <stdio.h>
int main() {

    /* code */
   int year;

   printf("Enter a year: ");
   scanf("%d", &year);

   // leap year if perfectly divisible by 400
   if (year % 400 == 0) {
       /* code */
       printf("%d is a leap year.", year);
   }
   // not a leap year if divisible by 100
   // but not divisible by 400
   else if (year % 100 == 0) {
        /* code */
        printf("%d is not a leap year.", year);
   }
   // leap year if not divisible by 100
   // but divisible by 4
   else if (year % 4 == 0) {
        /* code */
        printf("%d is a leap year.", year);
   }
   // all other years are not leap years
   else {
        /* code */
        printf("%d is not a leap year.", year);
   }

   return 0;
}