#include <iostream>

int main()
{
  int *p;
  int soma = 0;
  p = (int *)malloc(5 * sizeof(int));
  if (p != NULL)
  {
    for (int i = 0; i < 5; i++)
    {
      p[i] = i + 1;
    }
  }

  printf("\nAntes %p\n", p);

  p = (int *)realloc(p, 6 * sizeof(int)); // unidade em b

  printf("\nDepois %p\n", p); // dar uma olhada

  for (int i = 0; i < 5; i++)
  {
    soma += *(p + i);
  }
  p[5] = soma / 5;

  for (int i = 0; i < 6; i++)
  {
    printf("\n|%d|", *(p + i));
  }
}