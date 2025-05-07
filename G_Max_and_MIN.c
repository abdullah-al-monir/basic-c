#include <stdio.h>

void minMax(int A[], int N)
{
  int min = A[0], max = A[0];
  for (int i = 1; i < N; i++)
  {
    if (A[i] < min)
      min = A[i];
    if (A[i] > max)
      max = A[i];
  }
  printf("%d %d\n", min, max);
}
int main()
{
  int N;
  scanf("%d", &N);
  int A[N];
  for (int i = 0; i < N; i++)
  {
    scanf("%d", &A[i]);
  }
  minMax(A, N);
  return 0;
}