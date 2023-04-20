#include <iostream>

struct listaD
{
  int valor;
  listaD *prox;
  listaD *ant;
};

listaD *insereIni(listaD *pRef, int info)
{
  listaD *aux = (listaD *)malloc(sizeof(listaD));
  aux->ant = NULL;
  aux->valor = info;
  aux->prox = pRef;
  if (pRef != NULL)
    pRef->ant = aux;
  return aux;
}

listaD *insereFim(listaD *pRef, int info)
{
  listaD *aux = pRef;
  listaD *novo = (listaD *)malloc(sizeof(listaD));
  novo->valor = info;
  novo->prox = NULL;

  if (pRef == NULL)
  {
    novo->ant = NULL;
    return novo;
  }
  else
  {
    // Encontrrar o ultimo elemento
    while (aux->prox != NULL)
    {
      aux = aux->prox;
    }
    // Conetar o ultimo com o novo
    aux->prox = novo;
    novo->ant = aux;
    return pRef;
  }
}

listaD *deslocaMaior(listaD *pRef)
{
  listaD *aux = pRef->prox;
  listaD *maior = pRef;
  while (aux != NULL)
  {
    if (aux->valor > maior->valor)
    {
      maior = aux;
    }
    aux = aux->prox;
  }
  if (maior == pRef)
  {
    return maior;
  }
  else
  {
    if (maior->prox == NULL)

    {
      // VERIFICA SE TA NA ULTIMA POSIÇÃO
      // Isolar o maior elemento
      // conectar o anterior com o proximo
      maior->ant->prox = maior->prox;
    }
    else
    {
      maior->ant->prox = maior->prox;
      maior->prox->ant = maior->ant;
    }
    maior->prox = pRef;
    pRef->ant = maior;
    maior->ant = NULL;
    return maior;
  }
  // o maior ja esta isolado
  // conectar com o primeiro
  // TERMINAR
}

listaD *removeLista(listaD *pRef, int info)
{
  listaD *aux = pRef;
  if (aux == NULL)
  {
    return NULL;
  }

  while (aux != NULL && aux->valor != info)
  {
    aux = aux->prox;
  }
  // Condições:
  // i) Se o elemento não esta na lista
  // ii)Se o elemento é o primeiro
  // iii)Se o elemento é o ultimo
  // iv)Se esta no meio
  if (aux == NULL)
  {
    return pRef;
  }
  if (aux == pRef)
  {
    // pRef guarda segundo elemento
    pRef = aux->prox;
    // Atualiza o segundo como novo primeiro
    pRef->ant = NULL;
    free(aux);
    return pRef;
  }
  else
  {
    if (aux->prox == NULL)
    {
      aux->ant->prox = NULL;
      free(aux);
    }
    else
    {
      aux->ant->prox = aux->prox;
      aux->prox->ant = aux->ant;
      free(aux);
    }
  }
  return pRef;
}

void imprime(listaD *pRef)
{
  while (pRef != NULL)
  {
    printf("%d  ", pRef->valor);
    pRef = pRef->prox;
  }
}

int main()
{
  listaD *L = NULL;
  // L->valor = 10;
  // L->ant = NULL;
  // L->prox = NULL;
  L = insereIni(L, 30);
  L = insereIni(L, 50);
  L = insereFim(L, 70);
  L = insereIni(L, 10);
  L = deslocaMaior(L);
  imprime(L);
  printf("\n");
  L = removeLista(L, 30);
  imprime(L);

  return 0;
}
