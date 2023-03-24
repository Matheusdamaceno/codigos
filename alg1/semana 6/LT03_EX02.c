/*
LT03_EX02: Faça um programa em linguagem C que informe se uma determinada pessoa é maior de idade.
*/
#include <stdio.h>

int main()
{ int idade;
    printf("Digite sua idade: "); scanf("%d", &idade);
    
    if(idade >= 18)
        printf("Você é maior de idade!");
    else
        printf("Você é menor de idade");

    return 0;
}
