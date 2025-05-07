#include <stdio.h>

int sum(int a, int b)
{
  int c = a + b;
  printf("%d\n", c);
  return c;
}
int main()
{
  int X, Y;
  scanf("%d %d", &X, &Y);
  sum(X, Y);
  return 0;
}