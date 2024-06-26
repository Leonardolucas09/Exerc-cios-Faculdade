/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Crie um programa que pede para o usuário digitar 5 inteiros pelo teclado. 

#include <stdio.h>

int main()
{
    
    int valor;
    int i = 0;
    
    printf("Digite um valor cinco vezes logo abaixo:\n");
    
    while (i != 5){
        scanf("%d", &valor);
        i++;
    }

    return 0;
}