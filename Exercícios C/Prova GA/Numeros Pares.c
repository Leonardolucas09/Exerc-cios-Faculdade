/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*Faça um procedimento que imprima os números pares entre 1 (inclusive) e X (inclusive), sendo que o
valor X será recebido por parâmetro de entrada.
Crie um main e chame este procedimento 10 vezes, solicitando o valor a ser passado para o procedimento pelo
teclado. Você deve solicitar que o valor seja digitado novamente sempre que o valor informado for menor do que 1.

*/

#include <stdio.h>

int numerosPares(int n){
    for (int i = 1; i <= n; i++){
        if (i % 2 == 0){
            printf("O número par é: %d", i);
            printf("\n");
        }
    }
}
    
 
int main()
{
   int numero;
   
   for (int i = 0; i < 10; i++){
       do {
           printf("Digite um valor maior que 1: ");
           scanf("%d", &numero);
           
           if (numero < 1)
               printf("Valor inválido.\n");
       }
        while (numero < 1);
        
        numerosPares(numero);
   }
    
    return 0;
}