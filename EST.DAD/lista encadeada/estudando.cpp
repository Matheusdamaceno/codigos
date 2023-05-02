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

lista *insereFim(lista *pRef, int info)
{
  lista *aux = pRef;
  lista *novo = (lista *)malloc(sizeof(lista));
  novo->valor = info;
  novo->prox = NULL;
  if (aux == NULL)
  {
    return novo;
  }
  else
  {
    while (aux->prox != NULL)
    {
      aux = aux->prox;
    }
    aux->prox = novo;
    return pRef;
  }
}

lista *deslocaMaiorIni(lista *pRef)
{
  lista *antAux = pRef;
  lista *aux = pRef->prox;
  lista *temp = pRef;
  lista *antTemp = NULL;
  while (aux != NULL)
  {

    // 30 - 20 - 60 - 11- 80
    if (aux->valor > temp->valor)
    {
      antTemp = antAux;
      temp = aux;
    }
    antAux = aux;
    aux = aux->prox;
  }
  antTemp->prox = temp->prox;
  temp->prox = pRef;
  return temp;
}

lista *deslocamenor(lista *pRef)
{
  lista *antAux = pRef;
  lista *aux = pRef->prox;
  lista *temp = pRef;
  lista *antTemp = NULL;
  while (aux != NULL)
  {
    if (aux->valor < temp->valor)
    {
      antTemp = antAux;
      temp = aux;
    }
    antAux = aux;
    aux = aux->prox;
  }
  antTemp->prox = temp->prox;
  temp->prox = pRef;
  return temp;
}

lista *AddPosi(lista *pRef, int info, int posi)
{
  int count = 1;
  lista *antAux = NULL;
  lista *aux = pRef;
  lista *novo = (lista *)malloc(sizeof(lista));
  novo->valor = info;
  novo->prox = NULL;
  if (posi == 1)
  {
    novo->prox = pRef;
    return novo;
  }
  else
  {
    while (count != posi)
    {
      antAux = aux;
      aux = aux->prox;
      count++;
    }
    antAux->prox = novo;
    novo->prox = aux;
    return pRef;
  }
}

lista *removeIni(lista *pRef)
{
  lista *antAux = pRef;
  lista *aux = pRef->prox;

  antAux = aux;
  free(pRef);
  return antAux;
}

lista *removeFim(lista *pRef)
{
  lista *antAux = pRef;
  lista *aux = pRef->prox;
  while (aux->prox != NULL)
  {
    antAux = aux;
    aux = aux->prox;
  }
  antAux->prox = NULL;
  free(aux);
  return pRef;
}

lista *removePos(lista *pRef, int posi)
{
  int count = 1;
  lista *antAux = NULL;
  lista *aux = pRef;

  if (posi == 1)
  {
    antAux = aux->prox;
    free(aux);
    return antAux;
  }
  else
  {
    while (count != posi && aux != NULL)
    {
      antAux = aux;
      aux = aux->prox;
      count++;
    }
    if (aux == NULL)
    {
      return pRef;
    }
    antAux->prox = aux->prox;
    free(aux);
    return pRef;
  }
}

lista *numeros_impares(lista *pRef)
{
  lista *temp_cauda = NULL;
  lista *temp = NULL;
  lista *aux = pRef;
  while (aux != NULL)
  {
    if (aux->valor % 2 != 0)
    {
      lista *novo = (lista *)malloc(sizeof(lista));
      novo->valor = aux->valor;
      novo->prox = NULL;
      if (temp == NULL)
      {
        temp = novo;
        temp_cauda = novo;
      }
      else
      {
        temp_cauda->prox = novo;
        temp_cauda = novo;
      }
    }
    aux = aux->prox;
  }
  return temp;
}

int main()
{
  lista *L = NULL;
  L = insereIni(L, 2);
  L = insereIni(L, 4);
  L = insereIni(L, 7);
  L = insereFim(L, 8);
  L = insereFim(L, 9);
  // L = deslocaMaiorIni(L);
  // L = deslocamenor(L);
  imprime(L);
  printf("\n");
  L = removePos(L, 6);
  // L = removeFim(L);
  // L = removeIni(L);
  // L = numeros_impares(L);
  // L = AddPosi(L, 25, 0);
  imprime(L);
  return 0;
}
