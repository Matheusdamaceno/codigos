//LT01_EX05: Faça um algoritmo que peça uma temperatura em graus fahrenheit
//e apresente seu respectivo valor em cel/

#include <stdio.h>

int main()
{ int fahr, cel;
    printf("Digite uma temperatura em fahrenheit: ");
    scanf("%d", &fahr);
    
    cel = (fahr - 32) / 1.8;
    
    printf("A conversão para celsius é: %d", cel);

    return 0;
}
