//LT01_EX04: Faça um algoritmo que peça uma temperatura em graus célsius e 
//apresente seu respectivo valor em fahrenheit. O cálculo de conversão é: F = (9 * C / 5) + 32./

#include <stdio.h>

int main()
{ int cel, fahr;
    printf("Digite uma temperatura em graus célsius: ");
    scanf("%d", &cel);
    
    fahr = (9 * cel / 5) + 32;
    
    printf("A temperatura convertida para fahrenheit é: %d", fahr);

    return 0;
}
