#include <iostream>

int validar_ano(int x)
{
  int op;
  if (x > 2004)
  {
    printf("\ndata invalida.");
    return 1;
  }
  else
  {
    printf("data valida");
    return 0;
  }
}

int main(int argc, char const *argv[])
{
  int ano, op;
  do
  {
    printf("\ndigite seu ano de nascimento:");
    scanf("%d", &ano);
    op = validar_ano(ano);
  } while (op == 1);

  return 0;
}
