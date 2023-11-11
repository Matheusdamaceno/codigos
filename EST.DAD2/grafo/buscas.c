//Matheus Martins Damaceno 2475510 -- Leonardo dos Santos Correia 

#include <stdio.h>
#include <stdlib.h>
#define SIZE 40

struct fila
{
  int items[SIZE];
  int front;
  int rear;
};

struct fila *criaFila();
void enqueue(struct fila *q, int);
int dequeue(struct fila *q);
void display(struct fila *q);
int vazio(struct fila *q);
void printaFila(struct fila *q);

struct no
{
  int vertex;
  struct no *next;
};

struct no *criaNo(int v);

struct grafo
{
  int numVertices;
  struct no **adjLists;
  int *visitado;
};

void bfs(struct grafo *grafo, int startVertex)
{
  struct fila *q = criaFila();

  grafo->visitado[startVertex] = 1;
  enqueue(q, startVertex);

  while (!vazio(q))
  {
    printaFila(q);
    int currentVertex = dequeue(q);
    printf("Visitado %d\n", currentVertex);

    struct no *temp = grafo->adjLists[currentVertex];

    while (temp)
    {
      int adjVertex = temp->vertex;

      if (grafo->visitado[adjVertex] == 0)
      {
        grafo->visitado[adjVertex] = 1;
        enqueue(q, adjVertex);
      }
      temp = temp->next;
    }
  }
}

void DFS(struct grafo *grafo, int vertex)
{
  struct no *adjList = grafo->adjLists[vertex];
  struct no *temp = adjList;

  grafo->visitado[vertex] = 1;
  printf("Visitado %d \n", vertex);

  while (temp != NULL)
  {
    int connectedVertex = temp->vertex;

    if (grafo->visitado[connectedVertex] == 0)
    {
      DFS(grafo, connectedVertex);
    }
    temp = temp->next;
  }
}

struct no *criaNo(int v)
{
  struct no *novoNo = malloc(sizeof(struct no));
  novoNo->vertex = v;
  novoNo->next = NULL;
  return novoNo;
}

struct grafo *criaGrafo(int vertices)
{
  struct grafo *grafo = malloc(sizeof(struct grafo));
  grafo->numVertices = vertices;

  grafo->adjLists = malloc(vertices * sizeof(struct no *));
  grafo->visitado = malloc(vertices * sizeof(int));

  int i;
  for (i = 0; i < vertices; i++)
  {
    grafo->adjLists[i] = NULL;
    grafo->visitado[i] = 0;
  }

  return grafo;
}

void addAresta(struct grafo *grafo, int src, int dest)
{

  struct no *novoNo = criaNo(dest);
  novoNo->next = grafo->adjLists[src];
  grafo->adjLists[src] = novoNo;

  novoNo = criaNo(src);
  novoNo->next = grafo->adjLists[dest];
  grafo->adjLists[dest] = novoNo;
}

struct fila *criaFila()
{
  struct fila *q = malloc(sizeof(struct fila));
  q->front = -1;
  q->rear = -1;
  return q;
}

int vazio(struct fila *q)
{
  if (q->rear == -1)
    return 1;
  else
    return 0;
}

void enqueue(struct fila *q, int valor)
{
  if (q->rear == SIZE - 1)
    printf("\nQueue is Full!!");
  else
  {
    if (q->front == -1)
      q->front = 0;
    q->rear++;
    q->items[q->rear] = valor;
  }
}

int dequeue(struct fila *q)
{
  int item;
  if (vazio(q))
  {
    printf("Fila vazia");
    item = -1;
  }
  else
  {
    item = q->items[q->front];
    q->front++;
    if (q->front > q->rear)
    {
      printf("Resetando fila ");
      q->front = q->rear = -1;
    }
  }
  return item;
}

void printaFila(struct fila *q)
{
  int i = q->front;

  if (vazio(q))
  {
    printf("Fila vazia");
  }
  else
  {
    printf("\nFila contem: \n");
    for (i = q->front; i < q->rear + 1; i++)
    {
      printf("%d ", q->items[i]);
    }
  }
}

void printaGrafo(struct grafo *grafo)
{
  int v;
  for (v = 0; v < grafo->numVertices; v++)
  {
    struct no *temp = grafo->adjLists[v];
    printf("\n vertices: %d\n ", v);
    while (temp)
    {
      printf("%d -> ", temp->vertex);
      temp = temp->next;
    }
    printf("\n");
  }
}

int main()
{
  struct grafo *grafo = criaGrafo(6);
  addAresta(grafo, 0, 1);
  addAresta(grafo, 0, 2);
  addAresta(grafo, 1, 3);
  addAresta(grafo, 1, 4);
  addAresta(grafo, 1, 5);
  addAresta(grafo, 3, 6);
  addAresta(grafo, 3, 7);
  addAresta(grafo, 5, 8);
  addAresta(grafo, 5, 9);
  addAresta(grafo, 7, 10);
  addAresta(grafo, 7, 11);
  addAresta(grafo, 7, 12);
  addAresta(grafo, 9, 13);
  addAresta(grafo, 9, 14);

  bfs(grafo, 1);

  printf("-------------dfs-------------");

  addAresta(grafo, 0, 1);
  addAresta(grafo, 1, 2);
  addAresta(grafo, 1, 4);
  addAresta(grafo, 2, 3);
  addAresta(grafo, 2, 4);
  addAresta(grafo, 2, 9);
  addAresta(grafo, 3, 4);
  addAresta(grafo, 4, 5);
  addAresta(grafo, 4, 6);
  addAresta(grafo, 4, 7);
  addAresta(grafo, 5, 6);
  addAresta(grafo, 7, 8);
  addAresta(grafo, 7, 9);

  printaGrafo(grafo);

  DFS(grafo, 0);

  return 0;
}