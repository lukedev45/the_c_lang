#include <stdio.h>

#define MAXLINE 1000

int my_getline(char line[], int maxline);
void reverse(char s[]);

int main()
{
    char line[MAXLINE];

    while (my_getline(line, MAXLINE) > 0) {
        reverse(line);
        printf("%s", line);
    }

    return 0;
}

void reverse(char s[])
{
    int i, j;
    char temp;

    /* find the end of the string */
    for (j = 0; s[j] != '\0'; ++j)
        ;
    --j;

    /* skip the newline if present */
    if (j >= 0 && s[j] == '\n')
        --j;

    /* swap characters from both ends moving inward */
    for (i = 0; i < j; ++i, --j) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

int my_getline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

    return i;
}
