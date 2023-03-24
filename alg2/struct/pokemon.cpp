#include <iostream>

struct pokemon
{
  char nome[10];
  float vida;
  int ataque, defesa;
};

int main(int argc, char const *argv[])
{
  pokemon p;
  printf("Digite o nome do pokemon: ");
  gets(p.nome);
  printf("\nDigite a vida do pokemon: ");
  scanf("%f", &p.vida);
  printf("\nDigite o ataque do pokemon: ");
  scanf("%d", &p.ataque);
  printf("\nDigite a defesa do pokemon: ");
  scanf("%d", &p.defesa);

  printf("\nO nome do pokemon e: %s", p.nome);
  printf("\nA vida do pokemon e: %f", p.vida);
  printf("\nO ataque do pokemon e: %d", p.ataque);
  printf("\nA defesa do pokemon e: %d", p.defesa);
  return 0;
}
