#include <stdio.h>

#define ARRAY_LENGTH 10

int main(void)
{
    int c, nwhite, nother;
    int ndigit[ARRAY_LENGTH];

    nwhite = nother = 0;
    for (int i = 0; i < ARRAY_LENGTH; ++i)
    {
        ndigit[i] = 0;
    }

    while ((c= getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
        {
            ++ndigit[c-'0'];        /* Here we have to write the expression c - '0' because both c and '0' are converted 
                                        into integers '0' is 48 in ascii and so if we have c - 48 this will give us the 
                                        actual integer for the index of the array.*/
        }
        else if (c == ' ' || c == '\n' || c == '\t')
        {
            ++nwhite;
        }
        else
        {
        ++nother;
        }
    }
    printf("digits =");
    for (int i = 0; i < ARRAY_LENGTH; ++i)
    {
        printf(" %d", ndigit[i]);
    }
    printf(", white space - %d, other = %d\n", nwhite, nother);
    return 0;
}
