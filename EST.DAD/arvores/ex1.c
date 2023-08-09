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

/*
  Assinatura das funções
*/
void push(Pilha *, int);
int pop(Pilha *);
void imprime(Lista *);
Lista *geraListaCaso1(Lista *);
Lista *geraListaCaso2(Lista *);
Lista *limpaLista(Lista *);
void limpaPilha(Pilha *);
int verificaPalindromo(Lista *);
void decimalBin(Pilha *, int);
Lista *insereIni(Lista *, int);
Lista *insereFim(Lista *, int);
Lista *removeLista(Lista *, int);

Lista *removeLista(Lista *pRef, int info)
{
  Lista *aux = pRef;
  Lista *ant = NULL;

  if (aux == NULL)
    return aux;

  // Percorre a lista
  while (aux != NULL && aux->valor != info)
  {
    ant = aux;
    aux = aux->prox;
  }
  if (aux == NULL)
  {
    return pRef;
  }
  else if (ant == NULL)
  {
    // Guarda a segunda posição
    pRef = aux->prox;
    // Libera a memória
    free(aux);
  }
  else
  {
    // Remove do meio para o Fim
    ant->prox = aux->prox;
    free(aux);
  }
  return pRef;
}

Lista *insereFim(Lista *pRef, int info)
{
  Lista *aux = pRef;
  Lista *novo = (Lista *)malloc(sizeof(Lista));
  novo->valor = info;
  novo->prox = NULL;

  if (pRef == NULL)
  {
    return novo;
  }
  else
  {
    // Percorre até o último
    while (aux->prox != NULL)
    {
      aux = aux->prox;
    }
    // Aux aponta para o último
    aux->prox = novo;
    return pRef;
  }
}

void imprime(Lista *pRef)
{
  while (pRef != NULL)
  {
    printf("%d ", pRef->valor);
    pRef = pRef->prox;
  }
  printf("\n");
}

Lista *insereIni(Lista *pRef, int info)
{
  Lista *novo = (Lista *)malloc(sizeof(Lista));
  novo->valor = info;
  novo->prox = pRef;
  return novo;
}

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

Lista *geraListaCaso1(Lista *L)
{
  L = insereFim(L, 1);
  L = insereFim(L, 2);
  L = insereFim(L, 3);
  L = insereFim(L, 4);
  L = insereFim(L, 5);
  L = insereFim(L, 6);
  return L;
}

Lista *geraListaCaso2(Lista *L)
{
  L = insereFim(L, 1);
  L = insereFim(L, 2);
  L = insereFim(L, 3);
  L = insereFim(L, 4);
  L = insereFim(L, 5);
  L = insereFim(L, 6);
  return L;
}

Lista *limpaLista(Lista *L)
{
  Lista *aux = L;
  while (L != NULL)
  {
    L = L->prox;
    free(aux);
    aux = L;
  }
  return L;
}

void limpaPilha(Pilha *P)
{
  Lista *aux = P->topo;
  while (P->topo != NULL)
  {
    P->topo = P->topo->prox;
    free(aux);
    aux = P->topo;
  }
}

int verificaPalindromo(Lista *L)
{
  int cont = 0;
  Lista *aux = L;
  Lista *lst1 = NULL;
  Lista *lst2 = NULL;

  while (aux != NULL)
  {
    cont++;
    aux = aux->prox;
  }

  for (int i = 0; i < (int)(cont / 2); i++)
  {
    lst1 = insereFim(lst1, L->valor);
    L = L->prox;
  }
  if (cont % 2 != 0)
  {
    L = L->prox;
  }
  while (L != NULL)
  {
    lst2 = insereIni(lst2, L->valor);
    L = L->prox;
  }
  while (lst1 != NULL)
  {
    if (lst1->valor != lst2->valor)
    {
      return 0;
    }
    lst1 = lst1->prox;
    lst2 = lst2->prox;
  }

  return 1;
}

int main()
{

  // Cria a Lista
  Lista *L = NULL;

  // Cria o primerio caso de teste
  L = geraListaCaso1(L);
  imprime(L);
  if (verificaPalindromo(L))
    printf("É palindromo!\n");
  else
    printf("Não é palindromo!");

  // Limpa a lista e gera o segundo estudo de caso
  L = limpaLista(L);
  L = geraListaCaso2(L);
  imprime(L);
  if (verificaPalindromo(L))
    printf("É palindromo!");
  else
    printf("Não é palindromo!");

  return (0);
}