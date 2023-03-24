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
  dvd *p;

  p = &d;

  printf("\nDigite o titulo do dvd: ");
  gets(p->titulo);
  printf("\nDigite o genero do dvd: ");
  gets(p->genero);
  printf("\nDigite a duracao do dvd: ");
  scanf("%f", &p->duracao);
  fflush(stdin);
  printf("\nDigite a prateleira do dvd: ");
  gets(p->prateleira);

  system("cls");
  printf("\nO titulo e: %s", p->titulo);
  printf("\nO genero e: %s", p->genero);
  printf("\nA duracao e: %.2f", p->duracao);
  printf("\nA prateleira e: %s", p->prateleira);

  return 0;
}
