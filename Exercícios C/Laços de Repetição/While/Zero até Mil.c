/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Crie um programa que imprime os números de 0 a 1000. 

#include <stdio.h>

int main()
{
    
    int valor = 0;
    int i = 0;
    
    while (i <= 1000){
        printf("%d\n", valor++);
        i++;
    }

    return 0;
}