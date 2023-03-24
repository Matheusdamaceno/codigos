#include <iostream>

struct dvd
{
  char titulo[50];
  char genero[50];
  float duracao;
  char prateleira[50];
};

int main(int argc, char const *argv[])
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

  system("cls");
  printf("\nO titulo e: %s", d.titulo);
  printf("\nO genero e: %s", d.genero);
  printf("\nA duracao e: %.2f", d.duracao);
  printf("\nA prateleira e: %s", d.prateleira);

  return 0;
}
