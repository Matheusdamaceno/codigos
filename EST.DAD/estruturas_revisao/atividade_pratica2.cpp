// o exercicio 1 da pratica 2 é o ex1malloc desta mesma pasta, fique agr com o exercicio 2

#include <iostream>
#include <string.h>

struct aluno
{
  char nome[30];
  int ra;
  float media;
};

void apresentar(aluno *p)
{
  strcpy(p->nome, "skylab");
  p->ra = 2475510;
  p->media = 8.0;

  printf("%s\t%d\t%f\n", p->nome, p->ra, p->media);
}

int main(int argc, char const *argv[])
{
  aluno *pAluno;
  pAluno = (aluno*)malloc(sizeof(aluno));
  apresentar(pAluno);
  return 0;
}
