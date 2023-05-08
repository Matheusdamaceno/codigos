#include <iostream>

int main()
{
  int *p;
  p = (int *)malloc(5 * sizeof(int)); // unidade em b
  for (int i = 0; i < 5; i++)
  {
    scanf("%d", (p + i));
  }
  for (int i = 0; i < 5; i++)
  {
    printf("\n|%d|", *(p + i));
  }
  free(p);
}