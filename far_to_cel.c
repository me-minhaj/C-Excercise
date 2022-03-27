#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    // Celcious To Farenhite


    // Formula: °F = (°C × 9/5) + 32

    double celcious_1;
    double farenhite_1;
    printf("Enter Tempereture In Celcious: ");
    scanf("%lf", &celcious_1);

    farenhite_1 = celcious_1 * 9 / 5 + 32;

    printf("%lf Celcious = %lf Farenhite", celcious_1, farenhite_1);










    // Farenhite To Celcious


    // Formula: °C = (°F − 32) x 5/9

    double celcious_2;
    double farenhite_2;
    printf("\n\n\nEnter Tempereture In Farenhite: ");
    scanf("%lf", &farenhite_2);

    celcious_2 = (farenhite_2 - 32) * 5 / 9;

    printf("%lf Farenhite = %lf Celcious", farenhite_2, celcious_2);

    return 0;
}
