/*
LT03_EX03: Faça um programa em linguagem C que informe se um número é PAR.
*/
#include <stdio.h>

int main()
{ int num, resto;
    printf("Digite um numero qualquer: "); scanf("%d", &num);
    
    resto = num % 2;
    
    if(resto == 0)
        printf("Seu numero é par.");
    else
        printf("Seu numero é impar.");

    return 0;
}
