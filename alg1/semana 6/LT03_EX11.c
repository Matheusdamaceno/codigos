/*
LT03_EX11: Faça um programa em linguagem C que peça um número inteiro. Em seguida, 
o programa deve apresentar uma mensagem conforme a seguinte regra: 
a. Se o valor for positivo: “Valor positivo”; 
b. Se o valor for negativo: “Valor negativo”; 
c. Se não for nenhuma das opções (se for 0): “Valor neutro”.
*/
#include <stdio.h>

int main()
{ 
    int num1;
    printf("Digite um numero: "); scanf("%i", &num1);
    
    if(num1 > 0){
        printf("Valor posiivo");
    }else{
        if(num1 < 0){
            printf("Valor negativo");
        }else{
            if(num1 == 0){
                printf("Valor neutro");
            }
        }
    }

    return 0;
}
