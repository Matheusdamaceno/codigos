//LT01_EX07: Elabore um algoritmo que calcule e apresente o valor do salário família de um 
//funcionário, que é de 2% do salário por dependente. O salário e o número de dependentes serão 
//lidos do usuário./

#include <stdio.h>

int main()
{ int sal, dep, liq;
    printf("Digite o seu salário...........: "); scanf("%d", &sal);
    printf("Digite o numero de dependentes: ");  scanf("%d", &dep);
    
    liq = (dep * 0.02) * sal;
    
    printf("Seu salario liquido é: %d", liq);

    return 0;
}
