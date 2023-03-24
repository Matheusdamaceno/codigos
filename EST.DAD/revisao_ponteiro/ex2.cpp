#include <iostream>

int main()
{
  int no[10];
  int *x;

  x = no;

  for (int i = 0; i < 10; i++)
  {
    scanf("%d", (x + i));
  }

  printf("\n");
  for (int i = 9; i >= 0; i--)
  {
    printf("|%d|", *(x + i));
  }
}