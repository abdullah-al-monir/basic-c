#include <stdio.h>

int main()
{
  int n, i, sum = 0;
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    if (i % 2 == 0)
    {
      sum += i;
    }
  }
  printf("Sum of even numbers from 1 to %d is %d\n", n, sum);
  return 0;
}