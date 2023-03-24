//LT01_EX09: Elabore um algoritmo que leia um número inteiro representando a 
//quantidade de alunos de uma turma. Apresente a quantidade de grupos de 4 alunos que 
//podem ser formados, e quantos alunos ficam de fora, sem formar um grupo completo.


#include <stdio.h>

int main()
{ int nalu, grup, resto;
    printf("Digite o numeros de alunos: "); scanf("%i", &nalu);
    
    grup = nalu / 4;
    resto = nalu % 4;
    
    printf("O numero de grupos que podem ser formados é: %i\n", grup);
    printf("e o numero de alunos que sobram é: %i", resto);

    return 0;
}

