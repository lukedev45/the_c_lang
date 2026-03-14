#include <stdio.h>

#define IN 1
#define OUT 0
#define ARRAY_LENGTH 31

int main(void)
{
    int c, nc, state;
    nc = 0;
    state = OUT;
    int nletter[ARRAY_LENGTH];
    
    // Initialize array
    for (int i = 0; i < ARRAY_LENGTH; ++i)
    {
        nletter[i] = 0;
    }
    
    // Count word lengths
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (state == IN && nc > 0)
            {
                ++nletter[nc];
            }
            state = OUT;
            nc = 0;
        }
        else
        {
            if (state == OUT)
            {
                state = IN;
            }
            ++nc;
        }
    }
    
    // Handle last word if file doesn't end with whitespace
    if (state == IN && nc > 0)
    {
        ++nletter[nc];
    }
    
    // Print histogram
    for (int i = 1; i < ARRAY_LENGTH; ++i)
    {
        if (nletter[i] > 0)
        {
            printf("%2d: ", i);
            for (int j = 0; j < nletter[i]; ++j)
            {
                printf("#");
            }
            printf("\n");
        }
    }
    
    return 0;
}
