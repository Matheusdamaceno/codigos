#include <iostream>

int vet[4] = {5,
              8,
              12,
              1};

int maior(int x)
{
  if (vet[x] == 5)
  {
    return 5;
  }
  else
  {
    if (vet[x] > maior(x - 1))
    {
      return vet[x];
    }
    else
    {
      return maior(x - 1);
    }
  }
}

int main(int argc, char const *argv[])
{
  int m;
  m = maior(3);
  printf("%d", m);
  return 0;
}
