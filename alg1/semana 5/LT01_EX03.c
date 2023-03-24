//LT01_EX03: Faça um algoritmo que peça a idade do usuário e apresente seu provável ano de nascimento./

#include <stdio.h>

int main()
{ int ano, idade;
    printf("Qual sua idade? ");
    scanf("%d", &idade);
    
    ano = 2022 - idade;
    
    printf("Você nasceu em: %d", ano);

    return 0;
}
