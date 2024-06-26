/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Crie um programa que recebe dois valores inteiros A e B pelo teclado e imprime o valor de A dividido por B. Entretanto, se o valor de B for 0, imprima uma mensagem de erro e não faça a divisão.

#include <stdio.h>

int main()
{
    int A, B;
    
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    
    
    if (B == 0){
        printf("Erro, não é possível efetuar a divisão");
    }
    
    
    else{
        int divisao = A / B;
        printf("Sua divisão foi %d/%d = %d", A, B, divisao);
    }
    
    return 0;
}