//LT01_EX08: Elabore um algoritmo que calcule o preço de venda de um carro. 
//O preço de venda é formado pelo preço da montadora, mais 15% de lucro, mais 11% de IPI, 
//mais 17% de ICMS. As porcentagens são sobre o preço da montadora, que é lido do usuário. 
//Apresente na tela o preço final e o valor dos impostos./

#include <stdio.h>

int main()
{ int pmont, l, ipi, icms, pvend;
    printf("Digite o preço da montadora: "); scanf("%d", &pmont);
    
    l = pmont * 1.14;
    ipi = pmont * 1.11;
    icms = pmont * 1.17;
    pvend = pmont + l + ipi + icms;
    
    printf("preço do carro é: %d\n", pvend);
    printf("lucro é: %d\n", l);
    printf("ipi é: %d\n", ipi);
    printf("icms é: %d\n", icms);
    
    
    return 0;
}
