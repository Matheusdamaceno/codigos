#include <iostream>

void ler(float *cel)
{
  printf("Digite um valor para ser convertido de Celsius para Farenheit:");
  scanf("%f", cel);
}
void calc(float cel, float *fare)
{
  *fare = (((9 * cel) / 5) + 32);
}
void apresentar(float fare)
{
  printf("O valor convertido e: %.2f", fare);
}

int main(int argc, char const *argv[])
{
  float celsius, farenheit;
  ler(&celsius);
  calc(celsius, &farenheit);
  apresentar(farenheit);
  return 0;
}
