#include <iostream>

struct Lista
{
  int valor;
  Lista *prox;
};

struct Fila
{
  Lista *ini;
  Lista *fim;
};

int main(int argc, char const *argv[])
{

  Fila *F = (Fila *)malloc(sizeof(Fila)); // gerar um endereço de memoria, para acessar ini e fim;
  F->ini = NULL;
  F->fim = NULL;

  // Inserir elemento 10;
  Lista *novo = (Lista *)malloc(sizeof(Lista));
  novo->valor = 10;
  novo->prox = NULL;

  F->ini = novo;
  F->fim = novo;

  Lista *novo2 = (Lista *)malloc(sizeof(Lista));
  novo2->valor = 20;
  novo2->prox = NULL;

  // Faz o link entre 10 e 20;
  F->fim->prox = novo2;
  // Atualiza o fim para 20;
  F->fim = novo2;
  return 0;
}
