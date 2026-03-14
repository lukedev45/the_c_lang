#include <stdio.h>

#define LETTERS 52
#define IN 1
#define OUT 0
#define A_IN_ASCII 65

int main()
{
    // create an array of all different characters
    int nchars[LETTERS];

    for (int i = 0; i < LETTERS; ++i)
    {
        nchars[i] = 0;
    }
    // nchars[0] = 'a', nchars [1] = 'b'
    // create the general char and char count
    int c, state;
    state = OUT;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (state == IN)
            {
                state = OUT;
            }
        }
        else 
        {
            if (state == OUT)
            {
                state = IN;
            }

            if (c >= 'a' && c <= 'z')
            {
                ++nchars[c - 'a'];
            }
            else if (c >= 'A' && c <= 'Z')
            {
                ++nchars[c - 'A'];
            }
        }
    }

    for (int i = 0; i < LETTERS; ++i)
    {
        if (nchars[i] > 0)
        {
            printf("%c: ", i + A_IN_ASCII);
            for (int j = 0; j < nchars[i]; ++j)
            {
                printf("#");
            }
            printf("\n");
        }
    }
    return 0;
}
