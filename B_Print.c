#include <stdio.h>

void allNumbers(int n)
{
  int i;
  for (i = 1; i <= n; i++)
  {
    if (i > 1)
      printf(" ");
    printf("%d", i);
  }
  printf("\n");
}

int main()
{
  int N;
  scanf("%d", &N);
  allNumbers(N);
  return 0;
}
