/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Crie um programa que imprime a tabuada de um número qualquer digitado pelo usuário.

#include <stdio.h>

int main(){
    
    int valor;
    
    printf("Digite o valor para a tabuada: ");
    scanf("%d", &valor);
    
    for (int i = 1; i <= 10; i++){
        int mult = valor * i;
        printf("%d x %d = %d\n", valor, i, mult);
    }

    return 0;
}