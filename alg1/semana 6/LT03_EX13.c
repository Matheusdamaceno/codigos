/*
LT03_EX13: Em uma indústria de parafusos, um algoritmo determina se a produção está boa ou ruim. 
Uma produção é ruim quando o número de parafusos com defeito for maior do que 10% do total produzido. 
Faça um programa em linguagem C que peça o número total de parafusos produzidos e, em seguida, peça o 
número de parafusos com defeito. O programa, então, deve calcular o limite de peças com defeito permitidas 
(com base no total de peças produzidas e a porcentagem limite) e apresentar se a produção está boa ou ruim.
*/
#include <stdio.h>

int main()
{ int tpar, pardef;
    printf("total de parafusos: "); scanf("%i", &tpar);
    printf("parafusos com defeitos: "); scanf("%i", &pardef);
    
    if(pardef > tpar * 0.1){
        printf("ruim");
    }else{
        printf("boa");
    }

    return 0;
}
