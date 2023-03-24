#include <iostream>

void inicializar(int **p)
{
  *p = (int *)malloc(sizeof(int));
}

void ler(int **numero)
{
  printf("Digite um numero:");
  scanf("%d", *numero);
}

void calc(int *numero)
{
  if (*numero % 2 == 0)
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
  int *p, *num;
  inicializar(&p);
  ler(&num);
  calc(num);
  return 0;
}