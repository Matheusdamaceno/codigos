#include <iostream>

/*
Atividade - Estrutura de Dados C31

Aluno: Matheus Martins Damaceno 2475510
*/

struct Arv
{
  int valor;
  Arv *esq;
  Arv *dir;
};

Arv *insereArv(Arv *raiz, int info)
{
  if (raiz == NULL)
  {
    Arv *novo = (Arv *)malloc(sizeof(Arv));
    novo->valor = info;
    novo->esq = NULL;
    novo->dir = NULL;
    return novo;
  }
  else
  {
    if (raiz->valor > info)
    {
      raiz->esq = insereArv(raiz->esq, info);
    }
    else
    {
      raiz->dir = insereArv(raiz->dir, info);
    }
    return raiz;
  }
}

int contanos(Arv *raiz)
{
  int cont = 0;
  if (raiz == NULL)
    return 0;
  else
  {
    cont += contanos(raiz->esq);
    cont += contanos(raiz->dir);
  }
  return ++cont;
}

int altura(Arv *raiz)
{
  // Arvore nula
  if (raiz == NULL)
  {
    return -1;
  }

  int dir = altura(raiz->dir);
  int esq = altura(raiz->esq);

  if (esq > dir)
  {
    return esq + 1;
  }
  else
  {
    return dir + 1;
  }
}

int maior(Arv *raiz)
{
  if (raiz == NULL)
  {
    return -1;
  }
  else
  {
    if (raiz->dir == NULL)
    {
      return raiz->valor;
    }
    return maior(raiz->dir);
  }
}

Arv *remocao(Arv *raiz, int valor)
{
  if (raiz == NULL)
  {
    return NULL;
  }
  else
  {

    if (raiz->valor > valor)
      raiz->esq = remocao(raiz->esq, valor);

    else if (raiz->valor < valor)
    {
      raiz->dir = remocao(raiz->dir, valor);
    }
    else
      // achou o elemento
      // caso 1
      if (raiz->esq == NULL && raiz->dir == NULL)
      {
        free(raiz);
        raiz = NULL;
      }
      // caso 2
      else if (raiz->esq == NULL)
      {
        Arv *aux = raiz->dir;
        free(raiz);
        raiz = aux;
      }
      else if (raiz->dir == NULL)
      {
        Arv *aux = raiz->esq;
        free(raiz);
        raiz = aux;
      }
      else
      // caso 3
      // achar o no que antecede a raiz na ordenação
      {
        Arv *aux = raiz->esq;
        while (aux->dir != NULL)
          aux = aux->dir;

        // Efetuo a troca de valores
        raiz->valor = aux->valor;
        aux->valor = valor;

        // volta para a recursao (caso 1 ou 2)
        raiz->esq = remocao(raiz->esq, valor);
      }
  }
  return raiz;
}

int nivelNo(Arv *raiz, int valor)
{
  int count = 0;

  if (raiz->valor != valor)
  {
    if (raiz->valor > valor)
    {
      count += nivelNo(raiz->esq, valor);
      return 1 + count;
    }
    else
    {
      count += nivelNo(raiz->dir, valor);
      return 1 + count;
    }
  }
  return count;
}

int somaNivel(Arv *raiz, int nv)
{
  if (raiz == NULL)
    return 0;

  if (nv == 0)
    return 1;

  int countEsq = somaNivel(raiz->esq, nv - 1);
  int countDir = somaNivel(raiz->dir, nv - 1);

  int count = countEsq + countDir;

  if (nv > 1)
  {
    count += somaNivel(raiz->esq, nv - 2);
    count += somaNivel(raiz->dir, nv - 2);
  }

  return count;
}

void pre_ordem(Arv *raiz)
{
  if (raiz != NULL)
  {
    printf("%d\n", raiz->valor);
    pre_ordem(raiz->esq);
    pre_ordem(raiz->dir);
  }
}

int main(int argc, char const *argv[])
{
  Arv *raiz = NULL;
  raiz = insereArv(raiz, 10);
  raiz = insereArv(raiz, 76);
  raiz = insereArv(raiz, 16);
  raiz = insereArv(raiz, 5);
  raiz = insereArv(raiz, 60);
  raiz = insereArv(raiz, 2);
  pre_ordem(raiz);
  // printf("%d", contanos(raiz));
  // printf("%d", altura(raiz));
  // printf("%d", maior(raiz));
  // raiz = remocao(raiz, 10);
  // pre_ordem(raiz);
  printf("%d", somaNivel(raiz, 3));
  return 0;
}