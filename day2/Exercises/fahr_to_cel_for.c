#include <stdio.h>
// Including symbolic constants

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(void)
{
    printf("Fahrenheit to Celcius\n");
    for (int fahr = UPPER; fahr >= LOWER; fahr -= STEP)
    {
        printf("%d\t%0.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    }
    return 0;
}
