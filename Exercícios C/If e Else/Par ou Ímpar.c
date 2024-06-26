/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Crie um programa que recebe um inteiro pelo teclado e imprime se ele é par ou ímpar.

#include <stdio.h>

int main()
{
    int valor;
    
    printf("Digite o valor de um número: ");
    scanf("%d", &valor);
    
    if (valor % 2 == 0){
        printf("O valor %d é par", valor);
    }
    
    else{
        printf("O valor %d é ímpar", valor);
    }
    
    return 0;
}