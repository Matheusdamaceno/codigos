/*
LT03_EX06: Você está jogando um bingo e só faltam as "pedras" 21 e 53. 
Faça um programa em linguagem C que receba 2 valores "cantados" do usuário, 
se os valores "cantados" forem os seus, diga BINGO!!! Ao final, ganhando ou não, 
de uma mensagem de fim da rodada.
*/
#include <stdio.h>

int main()
{ int num1, num2;
    printf("Digite dois numeros: "); scanf("%i%i", &num1, &num2);
    
    if(num1 == 21 && num2 == 53){
        printf("BINGOOO!!!!\n");
        printf("fim de rodade");
    }else {
        printf("errou\n");
        printf("fim de rodada");
    }

    return 0;
}
