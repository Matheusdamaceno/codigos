#include <iostream>

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
  pre_ordem(raiz);
  printf("%d", contanos(raiz));
  return 0;
}
