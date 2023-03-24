#include <iostream>

int main(int argc, char const *argv[])
{
  int num, maior = 0;
  for (int i = 1; i < 6; i++)
  {
    printf("valor:");
    scanf("%d", &num);
    if (num > maior)
    {
      maior = num;
    }
  }
  printf("%d", maior);
  return 0;
}
