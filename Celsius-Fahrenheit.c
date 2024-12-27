#include <stdio.h>
/*
version 1.0.0
Celsius-Fahrenheit table
*/

int main()
{
    printf("Celsius-Fahrenheit table\n");

    float celsius, fahr;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    celsius = lower;
    while (celsius <= upper) {
        fahr = (9.0 / 5.0) * (celsius + 32.0);
        printf("%3.0f %11.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
