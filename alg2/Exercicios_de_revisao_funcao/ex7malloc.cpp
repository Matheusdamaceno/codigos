#include <iostream>

void inicializar(int **p)
{
  *p = (int *)malloc(sizeof(int));
}

void ler(int *p, int *maior)
{
  for (int i = 1; i < 3; i++)
  {
    printf("digite um numero:");
    scanf("%d", (p + i));
  }

  for (int i = 1; i < 3; i++)
  {
    if (*(p + i) > *maior)
    {
      *maior = *(p + i);
    }
  }
}

void apresentar(int *maior)
{
  printf("o maior é %d", *maior);
}
int main(int argc, char const *argv[])
{
  int *p, maior = 0;

  inicializar(&p);
  ler(p, &maior);
  apresentar(&maior);
  return 0;
}
