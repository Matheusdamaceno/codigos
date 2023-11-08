// Matheus Martins Damaceno 2475510 // Leonardo do Santos Correia 2475499

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define true 1
#define false 0
typedef int bool;
typedef int TIPOPESO;

typedef struct Aresta
{
  int destino;
  TIPOPESO peso;
  struct Aresta *proxima;
} Aresta;

typedef struct Vertice
{
  Aresta *listaAdj;
} Vertice;

typedef struct Grafo
{
  int num_are;
  int num_ver;
  Vertice *vertices;
} Grafo;

Grafo *criarGrafo(int num_ver)
{
  Grafo *grafo = (Grafo *)malloc(sizeof(Grafo));
  grafo->num_ver = num_ver;
  grafo->num_are = 0;
  grafo->vertices = (Vertice *)malloc(num_ver * sizeof(Vertice));

  for (int i = 0; i < num_ver; i++)
  {
    grafo->vertices[i].listaAdj = NULL;
  }

  return grafo;
}

bool adicionarAresta(Grafo *grafo, int origem, int destino, TIPOPESO peso)
{
  if (!grafo)
    return false;
  if ((origem < 0) || (origem >= grafo->num_ver))
    return false;
  if ((destino < 0) || (destino >= grafo->num_ver))
    return false;

  Aresta *novaAresta = (Aresta *)malloc(sizeof(Aresta));
  novaAresta->destino = destino;
  novaAresta->peso = peso;

  novaAresta->proxima = grafo->vertices[origem].listaAdj;

  grafo->vertices[origem].listaAdj = novaAresta;
  grafo->num_are++;
}

void imprimirGrafo(Grafo *grafo)
{
  for (int i = 0; i < grafo->num_ver; i++)
  {
    printf("v%d: ", i);
    Aresta *atual = grafo->vertices[i].listaAdj;
    while (atual != NULL)
    {
      printf("v%d(%d) ", atual->destino, atual->peso);
      atual = atual->proxima;
    }
    printf("\n");
  }
}

int calcularCaminho(Grafo *grafo, int origem, int destino)
{
  int *distancia = (int *)malloc(grafo->num_ver * sizeof(int));

  for (int i = 0; i < grafo->num_ver; i++)
  {
    distancia[i] = INT_MAX;
  }

  distancia[origem] = 0;

  for (int i = 0; i < grafo->num_ver - 1; i++)
  {
    for (int v = 0; v < grafo->num_ver; v++)
    {
      Aresta *atual = grafo->vertices[v].listaAdj;
      while (atual != NULL)
      {
        int u = v;
        int w = atual->destino;
        int peso = atual->peso;
        if (distancia[u] != INT_MAX && distancia[u] + peso < distancia[w])
        {
          distancia[w] = distancia[u] + peso;
        }
        atual = atual->proxima;
      }
    }
  }

  int resultado = distancia[destino];
  free(distancia);
  return resultado;
}

void imprimirmatriz(Grafo *grafo)
{
  for (int i = 0; i < grafo->num_ver; i++)
  {
    for (int j = 0; j < grafo->num_ver; j++)
    {
      Aresta *atual = grafo->vertices[i].listaAdj;
      int peso = 0;

      while (atual != NULL)
      {
        if (atual->destino == j)
        {
          peso = atual->peso;
          break;
        }
        atual = atual->proxima;
      }

      printf("%d\t", peso);
    }
    printf("\n");
  }
}

int main()
{
  int num_ver = 5;

  printf("------------- GRAFO 1 -------------\n");

  Grafo *grafo = criarGrafo(num_ver);

  adicionarAresta(grafo, 0, 0, 1);
  adicionarAresta(grafo, 0, 2, 1);
  adicionarAresta(grafo, 1, 2, 1);
  adicionarAresta(grafo, 1, 3, 1);
  adicionarAresta(grafo, 1, 4, 1);
  adicionarAresta(grafo, 2, 3, 1);
  adicionarAresta(grafo, 3, 4, 1);

  printf("Lista de Adjacência:\n");
  imprimirGrafo(grafo);
  printf("\n");

  printf("Matriz de Adjacência:\n");
  imprimirmatriz(grafo);

  printf("------------- GRAFO 2 -------------\n");

  Grafo *grafo2 = criarGrafo(num_ver);

  adicionarAresta(grafo2, 0, 0, 2);
  adicionarAresta(grafo2, 0, 2, 7);
  adicionarAresta(grafo2, 2, 1, 5);
  adicionarAresta(grafo2, 2, 3, 10);
  adicionarAresta(grafo2, 3, 1, 9);
  adicionarAresta(grafo2, 3, 4, 1);
  adicionarAresta(grafo2, 4, 1, 12);

  printf("Lista de Adjacência:\n");
  imprimirGrafo(grafo2);
  printf("\n");

  printf("Matriz de Adjacência:\n");
  imprimirmatriz(grafo2);

  int origem = 1;
  int destino = 5;
  int valorTotal = calcularCaminho(grafo2, origem, destino);

  if (valorTotal != INT_MAX)
  {
    printf("\nO valor total do caminho de {%d, %d} é %d\n", origem, destino, valorTotal);
  }
  else
  {
    printf("\nNão há caminho de {%d, %d}\n", origem, destino);
  }

  return 0;
}