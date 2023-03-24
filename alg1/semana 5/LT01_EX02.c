//LT01_EX02: Faça um algoritmo que peça o ano de nascimento do usuário e apresente sua provável idade./
#include <stdio.h>

int main()
{ int ano, idade;
    printf("Qual ano você nasceu? ");
    scanf("%d", &ano);
    
    idade = 2022 - ano;
    
    printf("Sua idade é %d", idade);
    

    return 0;
}

