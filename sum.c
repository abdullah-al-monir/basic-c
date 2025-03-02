#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int sum = (n * (n + 1)) / 2;
  printf("Sum of numbers from 1 to %d is %d\n", n, sum);
}