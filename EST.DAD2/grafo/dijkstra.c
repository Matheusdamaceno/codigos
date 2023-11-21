// Matheus Martins Damaceno 2475510 -- Leonardo dos Santos Correia

#include <stdio.h>
#define V 6
#define INF 100

void print(int dist[], int n)
{
  printf("Vertice   Distancia da Origem\n");
  for (int i = 0; i < V; i++)
    printf("%d \t\t %d\n", i, dist[i]);
}

void dijkstra(int grafo[V][V], int src)
{
  int dist[V];
  int ss[V];
  for (int i = 0; i < V; i++)
  {
    dist[i] = INF;
    ss[i] = 0;
  }
  dist[src] = 0;
  for (int count = 0; count < V - 1; count++)
  {
    int min = INF, min_index;
    for (int v = 0; v < V; v++)
      if (ss[v] == 0 && dist[v] <= min)
        min = dist[v], min_index = v;
    int u = min_index;
    ss[u] = 1;
    for (int v = 0; v < V; v++)
      if (!ss[v] && grafo[u][v] && dist[u] != INF && dist[u] + grafo[u][v] < dist[v])
        dist[v] = dist[u] + grafo[u][v];
  }
  print(dist, V);
}

int main()
{
  int grafo[V][V] = {{0, 1, 4, 0, 0, 0},
                     {1, 0, 4, 2, 7, 0},
                     {4, 4, 0, 3, 5, 0},
                     {0, 2, 3, 0, 4, 6},
                     {0, 7, 5, 4, 0, 7},
                     {0, 0, 0, 6, 7, 0}};
  dijkstra(grafo, 0);
  return 0;
}