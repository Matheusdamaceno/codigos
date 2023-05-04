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

void removerFila(Fila *fila)
{
  Lista *aux = fila->ini;
  if (aux != NULL)
  {
    fila->ini = fila->ini->prox;
    free(aux);
  }
  if (fila->ini == NULL)
    fila->fim = NULL;
}
void insereFila(Fila *fila, int info)
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
// elementos pares podem estar no meio da fila
// duas estrategias
// i) lista encadeada (inserefim)
// ii) Fila
void remove_pares(Fila *pfila)
{
  Fila *tmp = (Fila *)malloc(sizeof(Fila));
  tmp->ini = NULL;
  tmp->fim = NULL;
  int info = 0;
  // esvazia a fila original
  // copia os impares para tmp
  while (pfila->ini != NULL)
  {
    info = pfila->ini->valor;
    removerFila(pfila);
    if (info % 2 == 0)
      insereFila(tmp, info);
  }
  // esvazia a fila tmp
  // copia os impares para fila
  while (tmp->ini != NULL)
  {
    info = tmp->ini->valor;
    removerFila(tmp);
    insereFila(pfila, info);
  }
}

void imprime(Fila *fila)
{
  Lista *aux = fila->ini;
  while (aux != NULL)
  {
    printf("%d  ", aux->valor);
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
  insereFila(F, 40);
  insereFila(F, 50);
  imprime(F);
  // removeFila(F);
  remove_pares(F);
  imprime(F);

  return 0;
}
