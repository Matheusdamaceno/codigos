#include <iostream>

struct list
{
  int data;
  list *next;
};

void imprime(list *pRef)
{
  while (pRef != NULL)
  {
    printf("%d ", pRef->data);
    pRef = pRef->next;
  }
}

list *insereIni(list *pRef, int info)
{
  list *novo = (list *)malloc(sizeof(list));
  novo->data = info;
  novo->next = pRef;
  return novo;
}

list *insereFim_Rec(list *pRef, int info)
{
  // Lista vazia
  if (pRef == NULL)
    return NULL;
  /*
  caso base:
  Verificar ultimo elemento
  */
  if (pRef->next == NULL)
  {
    list *novo = (list *)malloc(sizeof(list));
    novo->data = info;
    novo->next = NULL;
    pRef->next = novo;
    return pRef;
  }
  else
  {
    // caso geral
    pRef->next = insereFim_Rec(pRef->next, info);
    return pRef;
  }
}

int maior_Rec(list *pRef)
{
  int antAux;
  int maior;
  // lista vazia
  if (pRef == NULL)
    return NULL;
  // caso base
  if (pRef->next == NULL)
  {
  }
  else
  {
    // caso geral
  }
}

int main(int argc, char const *argv[])
{
  list *L = NULL;

  L = insereIni(L, 40);
  L = insereIni(L, 30);
  L = insereIni(L, 20);
  L = insereIni(L, 10);
  L = insereFim_Rec(L, 50);
  imprime(L);

  return 0;
}
