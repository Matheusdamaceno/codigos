#include <iostream>

int vet[4] = {5,
              6,
              2,
              1};

int somavet(int x)
{
  if (vet[x] == 5)
  {
    return 5;
  }
  else
  {
    return somavet(x - 1) + vet[x];
  }
}

int main(int argc, char const *argv[])
{
  float s;
  float med;
  s = somavet(3);
  printf("%.2f", s);

  printf("\n%.2f", s / 4);
  return 0;
}
