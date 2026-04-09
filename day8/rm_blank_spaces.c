#include <stdio.h>

#define MAXLINE 1000

int my_getline(char line[], int maxline);

int main()
{
    char line[MAXLINE];
    int len;
    int i;

    while ((len = my_getline(line, MAXLINE)) > 0) {
        /* remove trailing blanks and tabs */
        i = len - 1;
        if (line[i] == '\n')
            --i;
        while (i >= 0 && (line[i] == ' ' || line[i] == '\t'))
            --i;

        /* if line is not entirely blank, print it */
        if (i >= 0) {
            line[i + 1] = '\n';
            line[i + 2] = '\0';
            printf("%s", line);
        }
    }

    return 0;
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
