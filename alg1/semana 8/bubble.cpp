#include <iostream>

int main(int argc, char const *argv[])
{
  char vet[5];
  char aux = 0;

  for (int i = 0; i < 5; i++)
  {
    scanf("%c", &vet[i]);
  }

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if (vet[j] > vet[j + 1])
      {
        aux = vet[j];
        vet[j] = vet[j + 1];
        vet[j + 1] = aux;
      }
    }
  }

  for (int i = 0; i < 5; i++)
  {
    printf("%c ", vet[i]);
  }

  return 0;
}
