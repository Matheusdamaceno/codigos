#include <iostream>

struct lista
{
  int valor;
  struct lista *prox;
};

void imprimir(lista *L)
{
  while (L != NULL)
  {
    printf("%d\n", L->valor);
    L = L->prox;
  }
}

lista *inserirIni(lista *L, int info)
{
  lista *novo = (lista *)malloc(sizeof(lista));
  novo->valor = info;
  novo->prox = L;
  return novo;
}

lista *inserirFim(lista *L, int info)
{
  lista *aux = L;
  lista *novo = (lista *)malloc(sizeof(lista));
  novo->valor = info;
  novo->prox = NULL;

  if (L == NULL)
  {
    return novo;
  }
  else
  {
    // Percorre até o ultimo
    while (aux->prox != NULL)
    {
      aux = aux->prox;
    }
    // Aux aponta para o ultimo
    aux->prox = novo;
  }
  return L;
  //   while (L->prox != NULL)
  //   {
  //     L = L->prox;
  //   }

  //   L->prox = (lista *)malloc(sizeof(lista));
  //   L->prox->valor = info;
  //   L->prox->prox = NULL;
}

lista *deslocaMaior(lista *L)
{
  lista *aux = L->prox;
  lista *antAux = L;
  lista *temp = L;
  lista *antTemp = NULL;
  while (aux != NULL)
  {
    if (aux->valor > temp->valor)
    {
      antTemp = antAux;
      temp = aux;
    }
    antAux = aux;
    aux = aux->prox;
  }
  // Desloc o maior para o inicio
  antTemp->prox = temp->prox;
  temp->prox = L;
  return temp;
}

// VERIFICAR A CONDIÇÃO DE LISTA VAZIA;
// O ELEMENTO PODE N ESTAR NA LISTA;
// O ELEMENTO PODE ESTAR EM QUALQUER POSIÇÃO DA LISTA;
lista *removeLista(lista *L, int info)
{
  lista *aux = L;
  lista *ant = NULL;

  if (aux == NULL)
  {
    return aux;
  }
  // percorre a lista
  while (aux != NULL && aux->valor != info)
  {
    ant = aux;
    aux = aux->prox;
  }

  // verificar se o elemneto esta na lista
  // verificar a posição de remoção
  // verificar primeiro, meio até ultimo
  if (aux == NULL)
  {
    return L;
  }
  else if (ant == NULL)
  {
    L = aux->prox; /* guarda a segunda posição*/
    free(aux);
  }
  else
  {
    // remove do meio para o fim
    ant->prox = aux->prox;
    free(aux);
  }
  return L;
}

lista *deslocaremmaior(lista *L)
{
  lista *aux = L;
  int maior = 0;

  maior = L->valor;

  // encontra maior elemento
  while (aux != NULL)
  {
    if (maior < aux->valor)
    {
      maior = aux->valor;
    }
    aux = aux->prox;
  }
  L = removeLista(L, maior);
  L = inserirIni(L, maior);
}

int main(int argc, char const *argv[])
{
  lista *listaInt = NULL;

  listaInt = inserirIni(listaInt, 20);
  // listaInt = inserirIni(listaInt, 40);
  // listaInt = inserirIni(listaInt, 60);
  listaInt = inserirFim(listaInt, 40);
  listaInt = inserirFim(listaInt, 50);
  listaInt = inserirFim(listaInt, 30);
  listaInt = inserirFim(listaInt, 70);
  imprimir(listaInt);
  // listaInt = deslocaMaior(listaInt);
  // listaInt = removeLista(listaInt, 50);
  listaInt = deslocaremmaior(listaInt);
  imprimir(listaInt);
  return 0;
}