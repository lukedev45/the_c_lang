#include <stdio.h>

int main(void)
{
    int c, nl, blank, tab;

    nl = 0;
    blank = 0;
    tab = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++nl;
            printf("The number of new lines is %d\n", nl);
        }
        else if (c == '\t')
        {
            ++tab;
            printf("The number of tabs is %d\n", tab);
        }
        else if (c == ' ')
        {
            ++blank;
            printf("The number of spaces is %d\n", blank);
        }
    }
    return 0;
}
