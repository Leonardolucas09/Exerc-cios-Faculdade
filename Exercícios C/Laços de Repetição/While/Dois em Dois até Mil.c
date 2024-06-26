/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Crie um programa que imprime os números pares de 0 a 2000. 

#include <stdio.h>

int main()
{
    
    int valor = 0;
    int i = 0;
    
    while (valor <= 2000){
        if(valor % 2 == 0){
            printf("%d\n", valor);
        }
        valor++;
    }

    return 0;
}