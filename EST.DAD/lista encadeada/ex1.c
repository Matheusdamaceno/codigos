#include <stdio.h>

#include <stdlib.h>

#include <string.h>

typedef struct lista
{

  int valor;

  struct lista *prox;

} Lista;

/*

Caso de teste:

L->20->40->50->30->70->NULL

*/

/*

- Verifcar a condição de lista vazia;

- O elemento pode não estar na lista;

- O elemento pode estar em qualquer posição da lista;

*/

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

  /*

    - Verficar se o elemento está na lista;

    Verificar a posição da remoção

    - Tratar as condições

      -- Primeiro, meio até último;

  */

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

/*

 - Achar o maior elemento;

 - Remover e re-inserir no início da lista

 */

Lista *deslocaMaior2(Lista *pRef) {}

Lista *deslocaMaior(Lista *pRef)
{

  Lista *aux = pRef->prox;

  Lista *antAux = pRef;

  Lista *temp = pRef;

  Lista *antTemp = NULL;

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

  // Desloca o maior para o inicio

  antTemp->prox = temp->prox;

  temp->prox = pRef;

  return temp;
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

/*

??? insereFim(???)

??? deslocaMaior(???)

  - Deslocar o maior elemento para o início

*/

int main()
{

  Lista *L = NULL;

  L = insereIni(L, 20);

  L = insereFim(L, 40);

  L = insereFim(L, 50);

  L = insereFim(L, 30);

  L = insereFim(L, 70);

  imprime(L);

  // L = deslocaMaior(L);

  L = removeLista(L, 50);

  imprime(L);

  return (0);
}
