/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Crie um programa que recebe dois valores inteiros pelo teclado e imprime qual dos dois é maior.

#include <stdio.h>

int main()
{
    int valor1, valor2;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);
    
    if (valor1 > valor2){
        printf("O valor um é maior");
    }
    
    else{
        printf("O valor dois é maior");
    }
    
    return 0;
}