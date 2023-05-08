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
  aluno *pAluno;

  pAluno = (aluno *)malloc(sizeof(aluno));
  strcpy(pAluno->nome, "skylab");
  pAluno->ra = 2475510;
  pAluno->media = 8.0;

  printf("%s\t%d\t%f\n", pAluno->nome, pAluno->ra, pAluno->media);
  return 0;
}
