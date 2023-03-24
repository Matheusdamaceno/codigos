/*
LT03_EX10: Crie um programa em linguagem C que leia 3 números inteiros diferentes 
e imprima os números em ordem crescente.
*/

#include <stdio.h>

int main()
{ int num1, num2, num3;
    printf("Digite 3 numeros: "); scanf("%i%i%i", &num1, &num2, &num3);
    
    if(num1 < num2 && num2 < num3){
        printf("valores: %i, %i, %i", num1, num2, num3);
    }else {
        if(num1 < num3 && num3 < num2){
            printf("valores: %i, %i, %i", num1, num3, num2);
        }else {
            if(num2 < num1 && num1 < num3){
                printf("valores: %i, %i, %i", num2, num1, num3);
            }else {
                if(num2 < num3 && num3 < num1){
                   printf("valores: %i, %i, %i", num2, num3, num1); 
                }else {
                    if(num3 < num1 && num1 < num2){
                        printf("valores: %i, %i, %i", num3, num1, num2); 
                    }else{
                        if(num3 < num2 && num2 < num1){
                           printf("valores: %i, %i, %i", num3, num2, num1);  
                        }
                    }
                }
            }
        }
    }

    return 0;
}
