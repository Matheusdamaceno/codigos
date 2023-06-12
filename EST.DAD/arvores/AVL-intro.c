/*
 * Código fonte árvore do tipo AVL
 */
#include <stdio.h>
#include <stdlib.h>
typedef struct Arvore
{
  int info;
  struct Arvore *esq;
  struct Arvore *dir;
} Arv;

Arv *criaNo(int);
Arv *insereAVL(Arv *, int);
int calculaAltura(Arv *);
void print2DTree(Arv *root, int space, int COUNT);
Arv *rotDir(Arv *);
Arv *rotEsq(Arv *);
Arv *rotDirEsq(Arv *);
Arv *rotEsqDir(Arv *);

Arv *criaNo(int raiz)
{
  Arv *no = (Arv *)malloc(sizeof(Arv));
  no->info = raiz;
  no->esq = (Arv *)NULL;
  no->dir = (Arv *)NULL;
  return no;
}

int calculaAltura(Arv *a)
{
  int esq, dir;
  if (a == NULL)
    return -1;

  esq = calculaAltura(a->esq);
  dir = calculaAltura(a->dir);

  if (esq > dir)
    return esq + 1;
  else
    return dir + 1;
}

int getBalanceamento(Arv *no)
{
  if (no == NULL)
    return 0;

  return calculaAltura(no->esq) -
         calculaAltura(no->dir);
}

Arv *rotDir(Arv *no)
{
  printf("\n\nRot Dir >> %d\n", no->info);
  print2DTree(no, 0, 5);
  Arv *temp;
  Arv *q;
  q = no->esq;
  temp = q->dir;
  q->dir = no;
  no->esq = temp;
  no = q;
  return no;
}

Arv *rotEsq(Arv *no)
{
  printf("\n\nRot Esq >> %d\n", no->info);
  print2DTree(no, 0, 5);

  Arv *temp;
  Arv *q;
  q = no->dir;
  temp = q->esq;
  q->esq = no;
  no->dir = temp;
  no = q;
  return no;
}

Arv *rotEsqDir(Arv *no)
{
  printf("\n\nRot--Esq--Dir >> %d-->%d\n", no->info, no->esq->info);
  print2DTree(no, 0, 5);

  no->esq = rotEsq(no->esq);
  return rotDir(no);
}
Arv *rotDirEsq(Arv *no)
{
  printf("\n\nRot--Dir--Esq >> %d-->%d\n", no->info, no->dir->info);
  print2DTree(no, 0, 5);

  no->dir = rotDir(no->dir);
  return rotEsq(no);
}

Arv *insereAVL(Arv *a, int valor)
{
  if (a == NULL)
    return criaNo(valor);

  if (a->info > valor)
    a->esq = insereAVL(a->esq, valor);

  if (a->info < valor)
    a->dir = insereAVL(a->dir, valor);

  int fb = getBalanceamento(a);

  printf(">>>>> No: %d - Fb: %d\n", a->info, fb);

  // rotaçao simples
  // direita
  if (fb > 1 && valor < a->esq->info)
    a = rotDir(a);
  // esquerda
  if (fb < -1 && valor > a->dir->info)
    a = rotEsq(a);

  // rotação dupla
  // esquerda-direita
  if (fb > 1 && valor > a->esq->info)
    a = rotEsqDir(a);
  // direita-esquerda
  if (fb < -1 && valor < a->dir->info)
    a = rotDirEsq(a);

  /* Retorna a raiz com a nova configuração */
  return a;
}

// Imprime formatado
void print2DTree(Arv *root, int space, int COUNT)
{
  // Caso base;
  if (root == NULL)
    return;

  // Aumento da distância entre os níveis
  space += COUNT;

  // Avalia primeiro o nó direita
  // Vai empilhar todas subárvores direitas;
  print2DTree(root->dir, space, COUNT);

  // Imprime o nó no retorno da recursão
  for (int i = COUNT; i < space; i++)
    printf(" ");
  printf("%d\n", root->info);

  // Avalia o nó esquerda
  print2DTree(root->esq, space, COUNT);
}

int main()
{
  Arv *root = NULL;
  root = insereAVL(root, 10);
  printf("\n>>>>>>>>>>>>>>>>>\nABB Atual\n");
  root = insereAVL(root, 20);
  printf("\n>>>>>>>>>>>>>>>>>\nABB Atual\n");
  print2DTree(root, 0, 5);
  root = insereAVL(root, 30);
  printf("\n>>>>>>>>>>>>>>>>>\nABB Atual\n");
  print2DTree(root, 0, 5);
  root = insereAVL(root, 40);
  printf("\n>>>>>>>>>>>>>>>>>\nABB Atual\n");
  print2DTree(root, 0, 5);
  root = insereAVL(root, 50);
  printf("\n>>>>>>>>>>>>>>>>>\nABB Atual\n");
  print2DTree(root, 0, 5);
  root = insereAVL(root, 25);
  printf("\n>>>>>>>>>>>>>>>>>\nABB Atual\n");
  print2DTree(root, 0, 5);
}
