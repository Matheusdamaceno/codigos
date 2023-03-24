#include <iostream>

int main(int argc, char const *argv[])
{
  int num1, num2;
  printf("valor inicial:");
  scanf("%d", &num1);
  printf("valor final:");
  scanf("%d", &num2);

  if (num1 < num2)
  {
    for (int i = num1; i <= num2; i++)
    {
      printf("\n%d", i);
    }
  }
  else
  {
    for (int i = num1; i >= num2; i--)
    {
      printf("\n%d", i);
    }
  }

  return 0;
}
