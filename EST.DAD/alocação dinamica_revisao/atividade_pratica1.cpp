#include <iostream>

int main()
{
  int *p;
  int aux = 0;

  p = (int *)malloc(20 * sizeof(int));
  for (int i = 0; i < 20; i++)
  {
    // scanf("%d", (p + i));
    p[i] = i + 1;
  }
  int *pIni = p;
  int *pFim = &p[19];

  for (int i = 0; i < 10; i++)
  {
    aux = *pIni;
    *pIni = *pFim;
    *pFim = aux;
    pIni++;
    pFim--;
  }

  for (int i = 0; i < 20; i++)
  {
    printf("\n|%d|", *(p + i));
  }
}