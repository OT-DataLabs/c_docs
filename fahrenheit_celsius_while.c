#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300; floating-point version */
int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;      /* lower limit of temperatuire scale */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower;
    
    char fahr_str[] = "Fahrenheit";
    char celsius_str[] = "Celsius";
    printf("%s to %s table\n", fahr_str, celsius_str);
    printf("%s %s\n", fahr_str, celsius_str);
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%10.0f %7.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    printf("-------------------\n");

    printf("%s to %s table\n", celsius_str, fahr_str);
    printf("%s %s\n", celsius_str, fahr_str);
    fahr = lower;
    celsius = lower;
    while (celsius <= upper){
        fahr = ((celsius * 1.8) + 32);
        printf("%7.1f %10.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}
