#include <iostream>
#include <string.h>

struct aluno
{
  char nome[30];
  int ra;
  float media;
};

int main(int argc, char const *argv[])
{
  aluno a1, *p;

  p = &a1;

  strcpy(p->nome, "skylab");
  p->ra = 2475510;
  p->media = 8.0;

  printf("%s\t%d\t%f\n", p->nome, p->ra, p->media);
  return 0;
}
