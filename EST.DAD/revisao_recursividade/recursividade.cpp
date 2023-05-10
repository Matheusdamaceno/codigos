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
  int maior = 0;

  if (pRef == NULL)
  {
    return 0;
  }

  // Caso base
  if (pRef->next == NULL)
  {
    return pRef->data;
  }
  else
  {
    // Caso geral
    maior = maior_Rec(pRef->next);
    if (maior < pRef->data)
    {
      return pRef->data;
    }
    else
    {
      return maior;
    }
  }
}

list *remove(list *pRef, int info)
{
  list *aux = pRef;
  list *antAux = NULL;
  if (aux == NULL)
  {
    return NULL;
  }

  if (pRef->data == info)
  {
    list *aux = pRef;
    pRef = pRef->next;
    free(aux);
    return pRef;
  }

  if (aux != NULL && pRef->data != info)
  {
    // caso base
    antAux = aux;
    aux = aux->next;
    if (aux->data == info)
    {
      antAux->next = aux->next;
      free(aux);
      return pRef;
    }
    else
    {
      pRef->next = remove(pRef->next, info);
      return pRef;
    }
  }
  else
  {
    return pRef;
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
  L = remove(L, 70);
  imprime(L);

  return 0;
}
