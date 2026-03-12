#include <stdio.h>

int main(void)
{
    long nc;

    for (nc = 0; getchar() != '\0'; ++nc)   // Can use either the EOF macro or the \0 char in this case
    {
        printf("%ld\n", nc);
    }
    return 0;
}
