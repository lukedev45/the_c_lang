#include <stdio.h>

int main(void)
{
    int c;
    int nc;
    
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (nc != ' ')
            {
                putchar(c);
            }
        }
        else 
        {
            putchar(c);
        }
        nc = c;
    }
    return 0;
}
