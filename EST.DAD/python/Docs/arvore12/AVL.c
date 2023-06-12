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

typedef struct lista
{
  Arv *node;
  struct lista *prox;
} Lista;

typedef struct fila
{
  Lista *ini;
  Lista *fim;
} Fila;

Arv *criaNo(int);
Arv *insereAVL(Arv *, int);
int calculaAltura(Arv *);
Arv *abb_retira(Arv *, int);
void print2DTree(Arv *root, int space, int COUNT);
Arv *rotDir(Arv *);
Arv *rotEsq(Arv *);
Arv *rotDirEsq(Arv *);
Arv *rotEsqDir(Arv *);

Arv *removeFila(Fila *pFila)
{
  if (pFila == NULL)
    return NULL;

  Lista *aux = pFila->ini;
  Arv *node;
  if (aux != NULL)
  {
    pFila->ini = pFila->ini->prox;
    node = aux->node;
    free(aux);
  }
  // Veirifa se ficou vazio
  if (pFila->ini == NULL)
    pFila->fim = NULL;
  return node;
}

void insereFila(Fila *pFila, Arv *info)
{
  Lista *novo = (Lista *)malloc(sizeof(Lista));
  novo->node = info;
  novo->prox = NULL;
  if (pFila->ini == NULL)
  {
    pFila->ini = novo;
    pFila->fim = novo;
  }
  else
  {
    pFila->fim->prox = novo;
    pFila->fim = novo;
  }
}

Arv *criaNo(int raiz)
{
  Arv *no = (Arv *)malloc(sizeof(Arv));
  no->info = raiz;
  no->esq = NULL;
  no->dir = NULL;
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

  return calculaAltura(no->esq) - calculaAltura(no->dir);
}

Arv *rotDir(Arv *no)
{
  // printf("\n\nRot Dir >> %d\n", no->info);
  // print2DTree(no, 0, 5);
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
  // printf("\n\nRot Esq >> %d\n", no->info);
  // print2DTree(no, 0, 5);

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
  // printf("\n\nRot--Esq--Dir >> %d-->%d\n", no->info, no->esq->info);
  // print2DTree(no, 0, 5);

  no->esq = rotEsq(no->esq);
  return rotDir(no);
}
Arv *rotDirEsq(Arv *no)
{
  // printf("\n\nRot--Dir--Esq >> %d-->%d\n", no->info, no->dir->info);
  // print2DTree(no, 0, 5);

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
  // printf(">>>>> No: %d - Fb: %d\n", a->info, fb);

  // Rotação Simples
  ////Direita
  if (fb > 1 && valor < a->esq->info)
    a = rotDir(a);
  ////Esquerda
  if (fb < -1 && valor > a->dir->info)
    a = rotEsq(a);

  // Rotação Dupla
  /// Esquerda-Direita
  if (fb > 1 && valor > a->esq->info)
    a = rotEsqDir(a);
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

// Busca em Largura
void BFS(Arv *raiz, FILE *f)
{
  Arv *node = NULL;
  Fila *F = (Fila *)malloc(sizeof(Fila));
  F->ini = NULL;
  F->fim = NULL;
  insereFila(F, raiz);

  while (F->ini != NULL)
  {
    node = removeFila(F);
    if (node != NULL)
    {
      // printf("%d, ", node->info);
      fprintf(f, "%d\n", node->info);
      if (node->esq != NULL)
      {
        insereFila(F, node->esq);
      }
      else
      {
        insereFila(F, NULL);
      }
      if (node->dir != NULL)
      {
        insereFila(F, node->dir);
      }
      else
      {
        insereFila(F, NULL);
      }
    }
    else
    {
      // printf("%s, ", "None");
      fprintf(f, "%d\n", 0);
    }
  }
}

int verificaBalanceamento(Arv *raiz)
{
  int count = 0;
  if (raiz != NULL)
  {
    if (raiz->dir->info > raiz->info)
    {
      count = verificaBalanceamento(raiz->dir);
      return 1;
    }
    else
      return 0;
  }
  return count;
}

int main(int argc, char **argv)
{
  FILE *fptr;
  fptr = fopen("bTree.txt", "w");

  if (fptr != NULL)
  {
    printf("Arquivo criado com sucesso!\n");
  }
  else
  {
    printf("Failed to create the file.\n");
    // exit status for OS that an error occurred
    return -1;
  }

  Arv *root = NULL;
  root = insereAVL(root, 10);
  BFS(root, fptr);
  fprintf(fptr, "%d\n", -1);
  root = insereAVL(root, 20);
  BFS(root, fptr);
  fprintf(fptr, "%d\n", -1);
  root = insereAVL(root, 30);
  BFS(root, fptr);
  fprintf(fptr, "%d\n", -1);
  root = insereAVL(root, 40);
  BFS(root, fptr);
  fprintf(fptr, "%d\n", -1);
  root = insereAVL(root, 50);
  BFS(root, fptr);
  fprintf(fptr, "%d\n", -1);
  root = insereAVL(root, 25);
  BFS(root, fptr);
  print("%d", verificaBalanceamento);
  fclose(fptr);
}
