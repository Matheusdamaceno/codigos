#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lista
{
  int valor;
  struct lista *prox;
} Lista;

typedef struct fila
{
  Lista *ini;
  Lista *fim;
} Fila;

typedef struct pilha
{
  Lista *topo;
} Pilha;

/*
  Assinatura das funções
*/
void push(Pilha *, int);
int pop(Pilha *);
void removeFila(Fila *);
void insereFila(Fila *, int);
void imprime(Fila *);
void geraFila(Fila *);
void limpaFila(Fila *);
void separa_par_impar(Fila *);
void filtraFila(Fila *, int);

void push(Pilha *P, int info)
{
  Lista *novo = (Lista *)malloc(sizeof(Lista));
  novo->valor = info;
  novo->prox = P->topo;
  P->topo = novo;
}

int pop(Pilha *P)
{
  int retorno = 0;
  Lista *aux = P->topo;
  if (aux != NULL)
  {
    P->topo = aux->prox;
    retorno = aux->valor;
    free(aux);
    return retorno;
  }
}

void removeFila(Fila *F)
{
  Lista *aux = F->ini;

  // Verica Fila vazia
  if (F->ini != NULL)
  {
    F->ini = aux->prox;
    free(aux);
    if (F->ini == NULL)
      F->fim = NULL;
  }
}

void insereFila(Fila *F, int info)
{
  Lista *novo = (Lista *)malloc(sizeof(Lista));
  novo->valor = info;
  novo->prox = NULL;

  // Verifica fila vazia
  if (F->ini == NULL)
  {
    F->ini = novo;
    F->fim = novo;
  }
  else
  {
    F->fim->prox = novo;
    F->fim = novo;
  }
}
void imprime(Fila *F)
{
  Lista *aux = F->ini;
  while (aux != NULL)
  {
    printf("%d ", aux->valor);
    aux = aux->prox;
  }
  printf("\n");
}

void geraFila(Fila *F)
{
  insereFila(F, 1);
  insereFila(F, 2);
  insereFila(F, 3);
  insereFila(F, 4);
  insereFila(F, 5);
  insereFila(F, 6);
}

void limpaFila(Fila *F)
{
  Lista *aux = F->ini;
  while (F->ini != NULL)
  {
    F->ini = F->ini->prox;
    free(aux);
    aux = F->ini;
  }
}

void separa_par_impar(Fila *F)
{
  Fila *aux = (Fila *)malloc(sizeof(Fila));
  Pilha *aux2 = (Pilha *)malloc(sizeof(Pilha));
  aux->ini = NULL;
  aux->fim = NULL;
  aux2->topo = NULL;
  Fila *temp = F;

  while (temp->ini != NULL)
  {
    if (temp->ini->valor % 2 == 0)
    {
      insereFila(aux, temp->ini->valor);
    }
    else
    {
      push(aux2, temp->ini->valor);
    }
    temp->ini = temp->ini->prox;
  }
  temp = F;

  while (aux2->topo != NULL)
  {
    insereFila(aux, aux2->topo->valor);
    pop(aux2);
  }
  while (F->ini != NULL)
  {
    removeFila(F);
  }
  while (aux->ini != NULL)
  {
    insereFila(F, aux->ini->valor);
    removeFila(aux);
  }
  free(aux);
}

void filtraFila(Fila *f, int x)
{
  Fila *aux = (Fila*)malloc(sizeof(Fila));
  aux->ini = NULL;
  aux->fim = NULL;

  Fila *tmp = f;

  // Preenchendo uma fila auxiliar com os elementos maiores que x;
  while (tmp->ini != NULL)
  {
    if (tmp->ini->valor > x)
    {
      insereFila(aux, tmp->ini->valor);
    }
    tmp->ini = tmp->ini->prox;
  }

  // Limpando a fila original
  while (f->ini != NULL)
  {
    removeFila(f);
  }

  // Retornando a fila auxiliar para a original;
  while (aux->ini != NULL)
  {
    insereFila(f, aux->ini->valor);
    removeFila(aux);
  }
  free(aux);
}

int main()
{

  // Cria a Fila
  Fila *F = (Fila *)malloc(sizeof(Fila));
  F->ini = NULL;
  F->fim = NULL;
  geraFila(F);
  imprime(F);

  separa_par_impar(F);
  printf("Separando pares e ímpares da Fila: \n");
  imprime(F);

  // Limpa a Fila e cria novamente
  limpaFila(F);
  geraFila(F);

  printf("\nSaída com a função filtra Fila: \n");
  filtraFila(F, 0);
  imprime(F);
  limpaFila(F);
  geraFila(F);

  filtraFila(F, 3);
  imprime(F);
  limpaFila(F);
  geraFila(F);
  filtraFila(F, 6);
  imprime(F);
  return (0);
}
