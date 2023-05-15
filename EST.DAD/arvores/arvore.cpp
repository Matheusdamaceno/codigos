#include <iostream>

struct Arv
{
  int info;
  Arv *dir;
  Arv *esq;
};

Arv *criaFolha(int valor)
{
  Arv *folha = (Arv *)malloc(sizeof(Arv));
  folha->info = valor;
  folha->dir = NULL;
  folha->esq = NULL;
  return folha;
}

Arv *criaNoInterno(int valor, Arv *esq, Arv *dir)
{
  Arv *interno = (Arv *)malloc(sizeof(Arv));
  interno->info = valor;
  interno->dir = dir;
  interno->esq = esq;
  return interno;
}

void pre_ordem(Arv *raiz)
{
  if (raiz != NULL)
  {
    printf("%d\n", raiz->info);
    pre_ordem(raiz->esq);
    pre_ordem(raiz->dir);
  }
}

int main()
{
  // codigo basico de arvore
  Arv *raiz = (Arv *)malloc(sizeof(Arv));
  raiz->info = 10;
  raiz->dir = criaFolha(30);
  raiz->esq = criaNoInterno(15, NULL, criaFolha(20));
  Arv *aux = raiz->esq->dir;
  // removendo no 20
  free(aux);
  raiz->esq->dir = NULL;

  // Insere 35 a direita de 30
  raiz->dir->dir = criaFolha(35);
  pre_ordem(raiz);
  return 0;
}
