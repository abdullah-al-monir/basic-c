#include <stdio.h>

void ascending(int A, int B, int C)
{
  if (A > B)
  {
    int temp = A;
    A = B;
    B = temp;
  }
  if (A > C)
  {
    int temp = A;
    A = C;
    C = temp;
  }
  if (B > C)
  {
    int temp = B;
    B = C;
    C = temp;
  }
  printf("%d\n%d\n%d\n", A, B, C);
  printf("\n");
}

int main()
{
  int A, B, C;
  scanf("%d %d %d", &A, &B, &C);
  ascending(A, B, C);
  printf("%d\n%d\n%d\n", A, B, C);
  return 0;
}