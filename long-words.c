#include <stdio.h>
#include <string.h>

int main()
{
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    char word[101];
    scanf("%s", word);
    int length = strlen(word);

    length > 10 ? printf("%c%d%c\n", word[0], length - 2, word[length - 1]) : printf("%s\n", word);
  }

  return 0;
}