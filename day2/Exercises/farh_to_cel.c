#include <stdio.h>

int main(void)
{
    float farh;
    float cel;

    float lower, upper, step;

    lower = 0;
    upper = 200;
    step = 20;

    cel = lower;
    printf("Fahrenheit to Celcius\n");
    while (cel <= upper)
    {
        farh = 9 * cel / 5 + 32;
        printf("%0.1f\t%1.0f\n", farh, cel);
        cel += step;
    }
    return 0;
}
