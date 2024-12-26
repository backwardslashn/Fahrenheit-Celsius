#include <stdio.h>

// version; 1.0.0; integer version
/* version; 1.0.1 updated function main to int main to not get
    warning: return type defaults to 'int' */
// version; 1.0.2 floating-point version
/* print Fahrenhit-Celsius table
    for fahr = 0, 20, .... 300; floating-point version */
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20; /* step size */

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
