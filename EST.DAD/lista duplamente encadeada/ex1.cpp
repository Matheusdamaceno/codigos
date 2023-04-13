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
  while (pRef != NULL)
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
  }
  // o maior ja esta isolado
  // conectar com o primeiro
  // TERMINAR
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
  L = deslocaMaior(L);
  imprime(L);

  return 0;
}
