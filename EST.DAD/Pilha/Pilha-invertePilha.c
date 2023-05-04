#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lista {
  int valor;
  struct lista *prox;
} Lista;

typedef struct pilha {
  Lista* topo;
}Pilha; 

typedef struct fila {
  Lista* ini;
  Lista* fim;
} Fila;

//Assinaturas
void push(Pilha*, int);
void pop(Pilha*);

void removeFila(Fila* pFila){
  Lista* aux = pFila->ini;
  if(aux!=NULL){
    pFila->ini = pFila->ini->prox;
    free(aux);    
  }
  //Veirifa se ficou vazio
  if(pFila->ini == NULL)
    pFila->fim = NULL;
}

void insereFila(Fila* pFila, int info){
  Lista* novo = (Lista*) malloc(sizeof(Lista));
  novo->valor = info;
  novo->prox = NULL;
  if(pFila->ini==NULL){
    pFila->ini = novo;
    pFila->fim = novo;
  }else{
    pFila->fim->prox = novo;
    pFila->fim = novo;
  }  
}
  

void invertePilha(Pilha* pPilha){
  int aux = 0;
  //Cria uma Fila temporária
  Fila* tmp = (Fila*) malloc(sizeof(Fila));
  tmp->ini=NULL;
  tmp->fim = NULL;
  ////////////////////////

  //Esvaziar a Pilha pPilha
  while(pPilha->topo!=NULL){
    aux = pPilha->topo->valor;
    pop(pPilha);
    insereFila(tmp,aux);
  }

  //Esvaziar a Fila tmp
  while(tmp->ini!=NULL){
    aux = tmp->ini->valor;
    removeFila(tmp);
    push(pPilha, aux);
  }
  free(tmp);
}

//Insere
void push(Pilha* pPilha, int info){
  Lista* novo = (Lista*) malloc(sizeof(Lista));
  novo->valor = info;
  novo->prox = pPilha->topo;
  pPilha->topo = novo;
}

//Remove
void pop(Pilha* pPilha){
  Lista* aux = pPilha->topo;
  if(aux!=NULL){
    pPilha->topo = pPilha->topo->prox;  
    free(aux);
  } 
}

void imprime(Pilha* pPilha){
  Lista* aux = pPilha->topo;
  while(aux!=NULL){
    printf("%d ",aux->valor);
    aux=aux->prox;
  }
  printf("\n");
}
int main(){
  Pilha* P = (Pilha*) malloc(sizeof(Pilha));
  P->topo = NULL;
  push(P, 10);
  push(P, 20);
  push(P, 30);
  //P->30->20->10->NULL
  imprime(P);
  invertePilha(P);
  imprime(P);
  return 0;
}