/*
LT03_EX14: Faça um programa em Linguagem C que apresente um menu e pergunte ao usuário se ele deseja calcular:
1) a área de um triângulo (base vezes altura dividido por 2)
2) a área de um círculo (pi multiplicado pelo raio ao quadrado)
3) a área de um cubo (6 vezes a área do quadrado)
Depois, solicitar os dados necessários para calcular a área escolhida, e mostrar o resultado na tela.
*/
#include <stdio.h>

int main()
{ int esc, base, altura, result, raio, area;
    printf("voce deseja calcular\n 1) a área de um triângulo\n 2) a área de um círculo\n 3) a área de um cubo: ");
    scanf("%i", &esc);
    
    if(esc == 1){
        printf("digite a base e altura: "); scanf("%i%i", &base, &altura);
        result = (base * altura) / 2;
        printf("a area do triangulo é: %i", result);
    }else{
        if(esc == 2){
            printf("digite o raio: "); scanf("%i", &raio);
            result = 3.14 * (raio * raio);
            printf("a area do circulo é: %i", result);
        }else{
            if(esc == 3){
                printf("digite a area: "); scanf("%i", &area);
                result = 6 * area;
                printf("a area do cubo é: %i", result);  
            }
        }
    }

    return 0;
}
