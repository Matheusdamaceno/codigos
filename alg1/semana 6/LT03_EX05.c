/*
LT03_EX05: Faça um programa em linguagem C que receba uma operação (caracter: + - * / ) 
e depois, 2 valores reais. Realize apenas a operação escolhida pelo usuário
*/
#include <stdio.h>

int main()
{ 
    char oper;
    int num1, num2, soma, sub, mult, di;
    
    printf("escolha uma operação: "); scanf("%c", &oper);
    printf("Escolha dois numeros: "); scanf("%i%i", &num1, &num2);
    
    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    di = num1 / num2;
    
    if(oper == '+'){
        printf("%i + %i = %i", num1, num2, soma);
    } else if(oper == '-'){
        printf("%i - %i = %i", num1, num2, sub);
    } else if(oper == '*'){
        printf("%i * %i = %i", num1, num2, mult);
    }else if(oper == '/'){
        printf("%i / %i = %i", num1, num2, di);
    }
    
    return 0;
}
