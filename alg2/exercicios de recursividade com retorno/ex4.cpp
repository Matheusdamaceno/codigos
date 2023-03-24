#include <iostream>

int vet[4] = {5,
              8,
              2,
              3};

int menor(int x)
{
  if (vet[x] == 5)
  {
    return 5;
  }
  else
  {
    if (vet[x] < menor(x - 1))
    {
      return vet[x];
    }
    else
    {
      return menor(x - 1);
    }
  }
}

int main(int argc, char const *argv[])
{
  int m;
  m = menor(3);
  printf("%d", m);
  return 0;
}
