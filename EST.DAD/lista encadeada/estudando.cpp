#include <iostream>

struct lista
{
  int valor;
  lista *prox;
};

void imprime(lista *pRef)
{
  while (pRef != NULL)
  {
    printf("%d ", pRef->valor);
    pRef = pRef->prox;
  }
}

lista *insereIni(lista *pRef, int info)
{
  lista *novo = (lista *)malloc(sizeof(lista));
  novo->valor = info;
  novo->prox = pRef;
  return novo;
}

int main(int argc, char const *argv[])
{
  lista *L = NULL;
  L = insereIni(L, 10);
  L = insereIni(L, 30);
  imprime(L);
  return 0;
}
