#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lista
{
  int valor;
  struct lista *prox;
} Lista;

void imprime(Lista *m)
{
  while (m != NULL)
  {
    printf("%d\t", m->valor);
    m = m->prox;
  }
}

Lista *InserirInicio(Lista *m, int info)
{
  Lista *novo = (Lista *)malloc(sizeof(Lista));
  novo->valor = info;
  novo->prox = m;
  return novo;
}

int main(int argc, char const *argv[])
{
  Lista *L = NULL;
  L = (Lista *)malloc(sizeof(Lista));
  L->valor = 10;
  L->prox = (Lista *)malloc(sizeof(Lista));
  L->prox->valor = 20;
  L->prox->prox = NULL;

  L = InserirInicio(L, 30);
  L = InserirInicio(L, 40);
  L = InserirInicio(L, 50);
  imprime(L);

  return 0;
}
