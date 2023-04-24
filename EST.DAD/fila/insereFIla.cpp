#include <iostream>

struct Lista
{
  int valor;
  Lista *prox;
};

struct Fila
{
  Lista *ini;
  Lista *fim;
};

void *insereFila(Fila *fila, int info)
{
  Lista *novo = (Lista *)malloc(sizeof(Lista));

  novo->valor = info;
  novo->prox = NULL;
  if (fila->fim == NULL)
  {
    fila->ini = novo;
    fila->fim = novo;
  }
  else
  {
    fila->fim->prox = novo;
    fila->fim = novo;
  }
}

void removeFila(Fila *fila)
{
  Lista *aux = fila->ini;
  if (aux != NULL)
  {
    fila->ini = fila->ini->prox;
    free(aux);
  }
}

void imprime(Fila *fila)
{
  Lista *aux = fila->ini;
  while (aux != NULL)
  {
    printf("%d", aux->valor);
    aux = aux->prox;
  }
  printf("\n");
}

int main(int argc, char const *argv[])
{

  Fila *F = (Fila *)malloc(sizeof(Fila)); // gerar um endereço de memoria, para acessar ini e fim;
  F->ini = NULL;
  F->fim = NULL;

  insereFila(F, 10);
  insereFila(F, 20);
  insereFila(F, 30);
  imprime(F);
  removeFila(F);
  removeFila(F);
  removeFila(F);
  imprime(F);

  return 0;
}
