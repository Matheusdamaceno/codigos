#include <iostream>

int ler()
{
  int numero;
  printf("Digite um numero:");
  scanf("%d", &numero);
  return numero;
}

void calc(int numero)
{
  if (numero % 2 == 0)
  {
    printf("e par");
  }
  else
  {
    printf("e impar");
  }
}

int main(int argc, char const *argv[])
{
  int num;
  num = ler();
  calc(num);
  return 0;
}
