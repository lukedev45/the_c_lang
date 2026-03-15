#include <stdio.h>

float fahr_to_cel(float fahr);

int main(void)
{
  int n = 400;

  printf("Celcius\tFahrenhiet\n");
  for (int i = 0; i < n; i += 20)
  {
    printf("%.0f\t%d\n", fahr_to_cel(i), i);
  }
}

float fahr_to_cel(float fahr)
{
  float cel;

  cel = 5 * (fahr - 32) / 9;
  return cel;
}
