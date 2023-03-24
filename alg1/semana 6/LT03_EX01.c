/*
LT03_EX01: Faça um programa em linguagem C que leia uma valor 
do usuário e diga se ele é um valor igual a zero.
*/

#include <stdio.h>

int main()
{ int valor;
    printf("Digite um valor: "); scanf("%d", &valor);
    
    if(valor == 0)
        printf("seu valor é igual a zero");
    else
        printf("seu valor é diferente de zero");

    return 0;
}
