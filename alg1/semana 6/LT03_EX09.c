/*
LT03_EX09: Faça um programa em linguagem C que leia o gênero de uma pessoa 
(‘F’ para feminino ou ‘M’ para masculino - deve ser UM caractere em maiúsculo) 
e a sua idade . Se o usuário for do sexo Feminino, apresentar a mensagem “Olá senhora, 
você tem ??? anos.  “. Do contrário, apresentar a mensagem “Olá senhor, você tem ??? anos. 
“ Trocar ??? pela idade digitada pelo usuário. 
*/
#include <stdio.h>

int main()
{ 
    char gen;
    int idade;
    printf("Digite seu Genero, ‘F’ para feminino ou ‘M’ para masculino: "); scanf("%c", &gen);
    printf("Digite sua idade: "); scanf("%i", &idade);
    
    if(gen == 'F'){
        printf("Olá senhora, você tem %i anos.", idade);
    }else{
        if(gen == 'M'){ 
            printf("Olá senhor, você tem %i anos.", idade);
        }else{
            printf("voce não digitou o genero");
        }
    }

    return 0;
}
