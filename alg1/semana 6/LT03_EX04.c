/*
LT03_EX04: Faça um programa em linguagem C que receba o valor do salário de um funcionário, se ele ganhar 
menos que 2 salários mínimos, acresça um bônus de 10% ao salário a receber.
*/
#include <stdio.h>

int main()
{ int sal, salmin=1212;
    printf("Digite seu salario: "); scanf("%d", &sal);
    
    if(sal < 2 * salmin){
        sal = sal * 1.10;
        printf("esse é seu salario acrescentado: %d", sal);
}
    else
        printf("esse é seu salario: %d", sal);

    return 0;
}
