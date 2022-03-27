// Write a C program to convert specified days into years, weeks and days.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    // years = days × 0.002738
    // weeks = days / 7
    // months = days * 0.032855
    // hours = days / 24
    // minute = days / (24 * 60)

    int days;
    float years,weeks,months,hours,minutes;

    printf("Enter Days: ");
    scanf("%d", &days);

    years = days * 0.002738;
    printf("\n%d Days = %f Years", days,years);

    weeks = 7 / days;
    printf("\n%d Days = %f Weeks", days, weeks);

    months = days * 0.032855;
    printf("\n%d Days = %f Months", days, months);

    hours = 24 / days;
    printf("\n%d Days = %f Hours", days, hours);

    minutes = 24 * 60 / days;
    printf("\n%d Days = %f Minutes", days, minutes);


    return 0;
}
