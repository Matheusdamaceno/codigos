#include <iostream>

int ler()
{
  int num;
  printf("num1: ");
  scanf("%d", &num);
  return num;
}

void calc(int num1, int num2)
{
  if (num1 > num2)
  {
    printf("o maior é %d", num1);
  }
  else
  {
    printf("o maior é %d", num2);
  }
}

int main(int argc, char const *argv[])
{
  int dig1, dig2;
  dig1 = ler();
  dig2 = ler();
  calc(dig1, dig2);
  return 0;
}
