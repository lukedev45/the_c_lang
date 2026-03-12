#include <stdio.h>

/* int main(void)
{
    int c;
    printf("Input: ");
    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
    return 0;
}
*/

int main(void)
{
    int c;
    while (c = getchar() != EOF)
    {
        printf("%d", c);    // This prints 1 once a character is input into the terminal
    }
    return 0;
}
