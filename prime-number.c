#include <stdio.h>
int main()
{
  // prime number generator
  int n, i, j, flag;
  printf("Enter a number: ");
  scanf("%d", &n);
  for (i = 2; i <= n / 2; i++)
  {
    flag = 0;
    for (j = 2; j <= i / 2; j++)
    {
      if (i % j == 0)
      {
        flag = 1;
        break;
      }
    }
    if (flag == 0)
    {
      printf("%d ", i);
    }
  }
}