%%file ABB.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct arv {
  int valor;
  struct arv *esq;
  struct arv *dir;
} Arv;

typedef struct lista {
  Arv* node;
  struct lista *prox;
} Lista;

typedef struct fila {
  Lista* ini;
  Lista* fim;
} Fila;

Arv* removeFila(Fila* pFila){
  if(pFila == NULL)
    return NULL;

  Lista* aux = pFila->ini;
  Arv* node;
  if(aux!=NULL){
    pFila->ini = pFila->ini->prox;
    node = aux->node;
    free(aux);
  }
  //Veirifa se ficou vazio
  if(pFila->ini == NULL)
    pFila->fim = NULL;
  return node;
}

void insereFila(Fila* pFila, Arv* info){
  Lista* novo = (Lista*) malloc(sizeof(Lista));
  novo->node = info;
  novo->prox = NULL;
  if(pFila->ini==NULL){
    pFila->ini = novo;
    pFila->fim = novo;
  }else{
    pFila->fim->prox = novo;
    pFila->fim = novo;
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

//////////////////////
//Completar a função//
//////////////////////
int leaf_count(Arv* raiz){
    //Deve retornar a quantidade de folhas
    int cont = 0;
    if(raiz==NULL){
        return 0;
    }else{
        cont = leaf_count(raiz->dir);
        cont = leaf_count(raiz->esq);
        if(raiz->dir ==NULL && raiz->esq==NULL)
          return cont++;
    }
    return cont;
}

// Busca em Largura
void BFS(Arv* raiz, FILE* f){
    Arv* node = NULL;
    Fila* F = (Fila*) malloc(sizeof(Fila));
    F->ini = NULL;
    F->fim = NULL;
    insereFila(F, raiz);

    while (F->ini != NULL) {
        node = removeFila(F);
        if(node != NULL){
          printf("%d, ", node->valor);
          fprintf(f, "%d\n",node->valor);
           if (node->esq!=NULL){
              insereFila(F, node->esq);
           }else{
               insereFila(F, NULL);
           }
           if (node->dir!=NULL){
              insereFila(F, node->dir);
           }else{
              insereFila(F, NULL);
           }
        }else{
          printf("%s, ", "None");
          fprintf(f, "%d\n",0);
        }
    }
}

int main(int argc, char **argv) {

   FILE *fptr;
   Arv *raiz = NULL;
   raiz = insereArv(raiz, 20);
   raiz = insereArv(raiz, 10);
   raiz = insereArv(raiz, 8);
   raiz = insereArv(raiz, 9);
   raiz = insereArv(raiz, 12);
   raiz = insereArv(raiz, 25);
   raiz = insereArv(raiz, 37);
   raiz = insereArv(raiz, 22);
   printf("%d", cont_leaf(raiz));

  if(argc == 1){
    FILE *fptr;
    fptr = fopen("bTree.txt", "w");

    if (fptr != NULL) {
      printf("Arquivo criado com sucesso!\n");
    }
    else {
      printf("Failed to create the file.\n");
      // exit status for OS that an error occurred
      return -1;
    }
    BFS(raiz,fptr);
    fclose(fptr);
  }else{
    fptr = fopen(argv[1], "r");
    int temp;
    if (fptr != NULL) {
      printf("Leitura realizada com sucesso!\n");
      fscanf(fptr, "%d", &temp);
      printf("Conteúdo do arquivo %s: %d\n", argv[1],temp);
    }
    else {
      printf("Falha na leitura do arquivo!!!\n");
      // exit status for OS that an error occurred
      return -1;
    }

    /////////////////////////////////////////////////////////
    //                      EDITAR AQUI                   ///
    //Chamada da função que verifica a quantidade de folhas//
    /////////////////////////////////////////////////////////
    printf("Saída da função: %d\n", leaf_count(raiz));
    printf("Valor do arquivo Python: %d\n", temp);

    fclose(fptr);
  }
  return 0;
}
