#include <iostream>

int menu()
{
  int op;
  printf("\nConvercao de temperaturas..:\n");
  printf("\n1- Converter Celsius para Frenheit.");
  printf("\n2- Converter Farenheit para Celsius.");
  printf("\n0- Sair.\n");
  scanf("%d", &op);
  return op;
}

float lerC()
{
  float c, f;
  printf("Digite um valor:");
  scanf("%f", &c);
  f = ((9 * c) / 5) + 32;
  system("cls");
  printf(" o valor em Farenheit e: %.2f\n", f);
  return f;
}

float lerF()
{
  float c, f;
  printf("Digite um valor:");
  scanf("%f", &f);
  c = (5 * (f - 32)) / 9;
  system("cls");
  printf(" o valor em Celsius e: %.2f\n", c);
  return c;
}

void apresentar(float c, float f, int op)
{
  int opc;
  float fa, ce;
  do
  {
    opc = menu();

    switch (opc)
    {
    case 1:
      fa = lerC();
      break;

    case 2:
      ce = lerF();
      break;

    default:
      system("cls");
      printf("Opcao invalida");
      break;
    }
  } while (op != 0);
}

int main(int argc, char const *argv[])
{
  int op;
  float c, f;

  apresentar(c, f, op);

  return 0;
}
