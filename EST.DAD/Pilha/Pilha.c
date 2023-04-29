#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lista
{
  int valor;
  struct lista *prox;
} Lista;

typedef struct pilha
{
  Lista *topo;
} Pilha;

typedef struct fila
{

} Fila;

void invertePilha(Pilha *);

// Insere
void push(Pilha *pPilha, int info)
{
  Lista *novo = (Lista *)malloc(sizeof(Lista));
  novo->valor = info;
  novo->prox = pPilha->topo;
  pPilha->topo = novo;
}

// Remove
void pop(Pilha *pPilha)
{
  Lista *aux = pPilha->topo;
  if (aux != NULL)
  {
    pPilha->topo = pPilha->topo->prox;
    free(aux);
  }
}

void imprime(Pilha *pPilha)
{
  Lista *aux = pPilha->topo;
  while (aux != NULL)
  {
    printf("%d ", aux->valor);
    aux = aux->prox;
  }
  printf("\n");
}
int main()
{
  Pilha *P = (Pilha *)malloc(sizeof(Pilha));
  P->topo = NULL;
  push(P, 10);
  push(P, 20);
  push(P, 30);
  // P->30->20->10->NULL
  imprime(P);
  pop(P);
  imprime(P);
  return 0;
}