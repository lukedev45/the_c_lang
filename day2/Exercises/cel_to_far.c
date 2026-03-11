#include <stdio.h>

int main(void)
{
    float fahr;
    float celcius;

    int lower = 0;
    int upper = 300;
    int step = 20;

    fahr = lower;

    printf("Fahrenheit to Celcius\n");
    while (fahr <= upper)
    {
        celcius = 5 * (fahr - 32) / 9;
        printf("%1.0f\t%0.1f\n", fahr, celcius);
        fahr += step;
    }
    return 0;
}
