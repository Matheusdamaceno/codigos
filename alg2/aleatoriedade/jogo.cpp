#include <iostream>

struct jogo
{
  char nome[50];
  char genero[50];
  float preco;
  int ano;
};

void ler(jogo *j)
{
  printf("\nNome: ");
  gets(j->nome);
  printf("\nGenero: ");
  gets(j->genero);
  printf("\nPreco: ");
  scanf("%f", &j->preco);
  printf("\nAno de lançamento: ");
  scanf("%d", &j->ano);
}

void apresentar(jogo j)
{
  printf("\nO nome do jogo e: %s", j.nome);
  printf("\nO genero e: %s", j.genero);
  printf("\nO preco do jogo e: %.2f", j.preco);
  printf("\nO ano do jogo e: %d", j.ano);
}

int main(int argc, char const *argv[])
{
  jogo dados;
  ler(&dados);
  apresentar(dados);
  return 0;
}
