#include <iostream>

int somatoria(int x)
{
  if (x == 1)
  {
    return 1;
  }
  else
  {
    return somatoria(x - 1) + x;
  }
}

int main(int argc, char const *argv[])
{
  int num, som;
  printf("digite um numero:");
  scanf("%d", &num);
  som = somatoria(num);
  printf("%d", som);
  return 0;
}
