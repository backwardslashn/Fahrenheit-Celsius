#include <stdio.h>

/* version; 1.0.0 */
/* version 1.0.1 updated function main to int main to no get the - warning: return type defaults to 'int' */
/* print Fahrenhit-Celsius table
    for feh = 0, 20, .... 300 */
int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0; /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20; /* step size */

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}
