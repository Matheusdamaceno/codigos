#include <iostream>

struct pokemon
{
  char nome[10];
  float vida;
  int ataque, defesa;
};

pokemon ler()
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
  return p;
}

void apresentar(pokemon x)
{
  printf("\nO nome do pokemon e: %s", x.nome);
  printf("\nA vida do pokemon e: %f", x.vida);
  printf("\nO ataque do pokemon e: %d", x.ataque);
  printf("\nA defesa do pokemon e: %d", x.defesa);
}

int main(int argc, char const *argv[])
{
  pokemon dados;

  dados = ler();
  apresentar(dados);
  return 0;
}
