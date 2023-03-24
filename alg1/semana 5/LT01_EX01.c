// enunciado..: LT01_EX01: Faça um algoritmo que peça a idade do usuário e, 
//em seguida, digite a mensagem: “Legal! Você tem *idade* anos!”.

#include <stdio.h>

int main()
{ int idade;
    printf("Digite a sua idade: ");
    scanf ("%d", &idade);
    printf ("Legal! Você tem %d anos!", idade);

    return 0;
}
