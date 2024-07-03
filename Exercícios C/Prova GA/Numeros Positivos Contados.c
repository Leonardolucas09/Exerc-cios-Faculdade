/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*Faça uma função que recebe um valor X por parâmetro. Sua função deve solicitar que o usuário digite X
números inteiros e retornar a quantidade total de valores positivos digitados.
Crie um main para chamar a função criada, passando um valor lido pelo teclado e imprimindo na tela o resultado da
função no formato: “Foram digitados Y valores positivos”, onde Y é o resultado da função
*/

#include <stdio.h>

int numerosPositivos(int X){
    int cont = 0;
    int numero;
    
    for (int i = 0; i < X; i++){
        printf("Digite um número: ");
        scanf("%d", &numero);
        
        if (numero > 0)
            cont++;
    }
    return cont;
}
    
 
int main(){
   int valor, result;
        printf("Digite a quantidade de números: ");
        scanf("%d", &valor);
           
        result = numerosPositivos(valor);
   
        printf("Foram digitados %d valores positivos", result);
    
    return 0;
}