/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Crie um programa que recebe três valores inteiros pelo teclado e imprime qual dos três é menor.

#include <stdio.h>

int main()
{
    int A, B, C;
    
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    
    printf("Digite o valor de C: ");
    scanf("%d", &C);
    
    
    if (A > B && A > C){
        printf("O valor A, ou seja, %d é maior", A);
    }
    
    else if (B > A && B > C){
        printf("O valor B, ou seja, %d é maior", B);
    }
    
    else {
        printf("O valor C, ou seja, %d é maior", C);
    }
    
    return 0;
}