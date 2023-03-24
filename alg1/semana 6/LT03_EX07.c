/*
LT03_EX07: Criar um algoritmo que leia 2 números. Caso o primeiro número lido seja maior que o 
segundo, imprima na tela o primeiro número menos o segundo, caso contrário mostre a soma dos dois números.
*/
#include <stdio.h>

int main()
{ int num1, num2;
    printf("Digite dois numeros: "); scanf("%i%i", &num1, &num2);
    
    if(num1 > num2){
        printf("%i", (num1 - num2));
    } else {
        printf("%i", (num1 + num2));
    }

    return 0;
}
