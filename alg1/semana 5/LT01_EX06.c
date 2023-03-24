//LT01_EX06: Elabore um algoritmo que leia o raio de uma circunferência, calcule e apresente sua área./

#include <stdio.h>

int main()
{ int raio, area;
    printf("Digite o raio da circunferencia: ");
    scanf("%d", &raio);
    
    area = 3.14 * (raio * raio);
    
    printf("a area da circunferência é: %d", area);

    return 0;
}
