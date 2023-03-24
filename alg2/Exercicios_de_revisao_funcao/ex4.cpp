#include <iostream>
#include <stdlib.h>

void inicializar(float **p)
{
  *p = (float *)malloc(sizeof(float));
}

void ler(float ***p)
{
  printf("Digite um numero para ser convertido:");
  scanf("%f", **p);
}

int main(int argc, char const *argv[])
{
  float *p;
  float **pp;
  float c;
  float a;

  inicializar(&p);
  ler(&pp);
  c = (5 * (*p - 32)) / 9;

  printf("\no valor digitado foi %f e a conversao e %f", *p, c);

  return 0;
}
