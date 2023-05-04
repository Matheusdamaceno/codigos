#include <iostream>

struct listaD
{
  int valor;
  listaD *prox;
  listaD *ant;
};

struct lista
{
  int valor;
  lista *prox;
};

void imprime(listaD *pRef)
{
  while (pRef != NULL)
  {
    printf("%d ", pRef->valor);
    pRef = pRef->prox;
  }
  printf("\n");
}

void imprimes(lista *pRef)
{
  while (pRef != NULL)
  {
    printf("%d ", pRef->valor);
    pRef = pRef->prox;
  }
  printf("\n");
}

listaD *addIni(listaD *pRef, int info)
{
  listaD *novo = (listaD *)malloc(sizeof(listaD));
  novo->valor = info;
  novo->prox = pRef;
  novo->ant = NULL;
  return novo;
}

listaD *addFim(listaD *pRef, int info)
{
  listaD *novo = (listaD *)malloc(sizeof(listaD));
  listaD *aux = pRef;
  if (aux == NULL)
  {
    novo->valor = info;
    novo->prox = pRef;
    novo->ant = NULL;
    return novo;
  }
  else
  {
    while (aux->prox != NULL)
    {
      aux = aux->prox;
    }
    aux->prox = novo;
    novo->valor = info;
    novo->prox = NULL;
    novo->ant = aux;
    return pRef;
  }
}

listaD *merge_lists(listaD *head1, listaD *head2)
{
  listaD *new_head = NULL;
  listaD *tail = NULL;

  while (head1 != NULL && head2 != NULL)
  {
    listaD *smaller_node = NULL;

    if (head1->valor < head2->valor)
    {
      smaller_node = head1;
      head1 = head1->prox;
    }
    else
    {
      smaller_node = head2;
      head2 = head2->prox;
    }

    if (new_head == NULL)
    {
      new_head = smaller_node;
    }
    else
    {
      tail->prox = smaller_node;
      smaller_node->ant = tail;
    }

    tail = smaller_node;
  }

  if (head1 != NULL)
  {
    if (new_head == NULL)
    {
      new_head = head1;
    }
    else
    {
      tail->prox = head1;
      head1->ant = tail;
    }

    while (tail->prox != NULL)
    {
      tail = tail->prox;
    }
  }

  if (head2 != NULL)
  {
    if (new_head == NULL)
    {
      new_head = head2;
    }
    else
    {
      tail->prox = head2;
      head2->ant = tail;
    }

    while (tail->prox != NULL)
    {
      tail = tail->prox;
    }
  }

  return new_head;
}

listaD *addPosi(listaD *pRef, int posi, int info)
{
  int count = 1;
  listaD *aux = pRef;
  listaD *novo = (listaD *)malloc(sizeof(listaD));
  // lista vazia
  if (aux == NULL)
  {
    return pRef;
  }
  // primeira posição
  if (posi == 1)
  {
    novo->valor = info;
    novo->ant = NULL;
    novo->prox = pRef;
    return novo;
  }
  else
  {
    while (count != posi && aux != NULL)
    {
      aux = aux->prox;
      count++;
    }
    if (aux == NULL)
    {
      return pRef;
    }
    else
    {
      novo->valor = info;
      aux->ant->prox = novo;
      novo->prox = aux;
      return pRef;
    }
  }
}

listaD *removeposi(listaD *pRef, int posi)
{
  int count = 1;
  listaD *aux = pRef;

  if (posi == 1)
  {
    aux->ant = aux->prox;
    free(aux);
    return aux->ant;
  }
  else
  {
    while (count != posi && aux != NULL)
    {
      aux = aux->prox;
      count++;
    }
    aux->ant->prox = aux->prox;
    free(aux);
    return pRef;
  }
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

void splitList(listaD *a, int corte, lista **L1, lista **L2)
{
  int cont = 0;
  listaD *aux = a;

  // Percorre até o ponto de corte
  // Insere em L1
  while (cont < corte && aux != NULL)
  {
    *L1 = insereFim(*L1, aux->valor);
    cont++;
    aux = aux->prox;
  }

  while (aux != NULL)
  {
    *L2 = insereFim(*L2, aux->valor);
    aux = aux->prox;
  }
}

lista *unirLstIntercalado(listaD *pRef1, listaD *pRef2)
{
  lista *novo = NULL;
  listaD *aux1 = pRef1;
  listaD *aux2 = pRef2;

  while (aux1 != NULL && aux2 != NULL)
  {
    novo = insereFim(novo, aux1->valor);
    novo = insereFim(novo, aux2->valor);
    aux1 = aux1->prox;
    aux2 = aux2->prox;
  }
  while (aux1 != NULL)
  {
    novo = insereFim(novo, aux1->valor);
    aux1 = aux1->prox;
  }
  while (aux2 != NULL)
  {
    novo = insereFim(novo, aux2->valor);
    aux2 = aux2->prox;
  }
  return novo;
}

int main()
{
  listaD *L = NULL;
  lista *l1 = NULL;
  lista *l2 = NULL;

  L = addIni(L, 10);
  L = addFim(L, 20);
  L = addFim(L, 30);
  L = addFim(L, 70);
  imprime(L);
  // splitList(L, 2, &l1, &l2);
  // imprimes(l1);
  // imprimes(l2);

  return 0;
}