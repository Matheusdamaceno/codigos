// LT03_EX04: Faça um programa em Linguagem C que receba um número do usuário e
// apresente a fase "Seja bem vindo", tantas vezes quanto for esse número. Uma frase por linha./

#include <stdio.h>

// int main()
// { int num, cont = 0;
//     printf("Digite um numero: "); scanf("%d", &num);
//     while(cont < num){
//     printf("Seja bem-vindo!\n");
//     cont++;
//     }
//     return 0;
// }

int main()
{
    int num;
    printf("Digite um numero ai ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("\nSeja bem vindo!");
    }

    return 0;
}
