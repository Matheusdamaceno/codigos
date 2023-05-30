
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct arv {
  int valor;
  struct arv *esq;
  struct arv *dir;
} Arv;

void pre_ordem(Arv *raiz, FILE* f) {
  if (raiz != NULL) {    
    printf("%d\n", raiz->valor);
    fprintf(f, "%d\n",raiz->valor); 
    pre_ordem(raiz->esq,f);
    pre_ordem(raiz->dir,f);
  }
}

Arv *insereArv(Arv *raiz, int info) {
  // Caso base
  if (raiz == NULL) {
    Arv *novo = (Arv *)malloc(sizeof(Arv));
    novo->valor = info;
    novo->esq = NULL;
    novo->dir = NULL;
    return novo;
  } else {
    if (raiz->valor > info) {
      raiz->esq = insereArv(raiz->esq, info);
    } else {
      raiz->dir = insereArv(raiz->dir, info);
    }
    return raiz;
  }
}

int main() {
  FILE *fptr;
  fptr = fopen("cTree.txt", "w");
  
  if (fptr != NULL) {
    printf("Arquivo criado com sucesso!\n");
  }
  else {
    printf("Failed to create the file.\n");
    // exit status for OS that an error occurred
    return -1;
  }  
    
  Arv *raiz = NULL;
  raiz = insereArv(raiz, 53);
  raiz = insereArv(raiz, 30);
  raiz = insereArv(raiz, 14);
  raiz = insereArv(raiz, 39);
  raiz = insereArv(raiz, 9);
  raiz = insereArv(raiz, 23);
  raiz = insereArv(raiz, 34);
  raiz = insereArv(raiz, 49);
  raiz = insereArv(raiz, 72);
  raiz = insereArv(raiz, 61);
  raiz = insereArv(raiz, 84);
  raiz = insereArv(raiz, 79);
  pre_ordem(raiz,fptr);
  fclose(fptr);
  return 0;
}
