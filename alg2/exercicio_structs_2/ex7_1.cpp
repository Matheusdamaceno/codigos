#include <iostream>

struct dvd
{
  char titulo[50];
  char genero[50];
  float duracao;
  char prateleira[50];
};

dvd ler()
{
  dvd d;
  printf("\nDigite o titulo do dvd: ");
  gets(d.titulo);
  printf("\nDigite o genero do dvd: ");
  gets(d.genero);
  printf("\nDigite a duracao do dvd: ");
  scanf("%f", &d.duracao);
  fflush(stdin);
  printf("\nDigite a prateleira do dvd: ");
  gets(d.prateleira);
  return d;
}

void apresentar(dvd x)
{
  system("cls");
  printf("\nO titulo e: %s", x.titulo);
  printf("\nO genero e: %s", x.genero);
  printf("\nA duracao e: %.2f", x.duracao);
  printf("\nA prateleira e: %s", x.prateleira);
}

int main(int argc, char const *argv[])
{
  dvd dados;
  dados = ler();
  apresentar(dados);
  return 0;
}
