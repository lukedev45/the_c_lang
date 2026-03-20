#include <stdio.h>

#define MAXLINE 100

int my_getline(char line[], int maxline);

// Print the length and text of each input line
int main(void)
{
  int len;
  char line[MAXLINE];
  
  while ((len = my_getline(line, MAXLINE)) > 0)
  {
    printf("%d: %s", len, line);
  }
  return 0;
}

int my_getline(char s[], int lim)
{
  int c, i, len;
  i = 0;
  len = 0;
  while ((c = getchar()) != EOF && c != '\n' && i < lim - 1)
  {
    s[i] = c;
    i++;
    len++;
  }
  if (c == '\n')
  {
    s[i] = c;
    i++;
    len++;
  }
  s[i] = '\0';
  // // continue reading to count full length
  // while (c != EOF && c != '\n')
  // {
  //   c = getchar();
  //   if (c != EOF && c != '\n') len++;
  // }
  return len;
}
