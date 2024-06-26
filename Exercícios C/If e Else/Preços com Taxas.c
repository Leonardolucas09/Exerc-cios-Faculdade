/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*Crie um programa que aplica uma taxa de juros em um determinado preço digitado pelo teclado. A taxa aplicada deve ser:

    - Aumento de 10% caso o valor seja menor do que 100
    - Aumento de 20% caso o valor esteja entre 100 (inclusive) e 300
    - Aumento de 50% caso o valor esteja entre 300 (inclusive) e 1000
    - Sem aumento de taxa caso o valor seja maior ou igual a 1000
    - Imprima uma mensagem de erro se o valor for negativo
    - Ao final, seu programa deve imprimir o novo valor, já com a taxa aplicada.
*/
#include <stdio.h>

int main()
{
    int preco, precoFinal;
    
    printf("Digite o preço do produto: ");
    scanf("%d", &preco);
    
    if (preco < 100 && preco >= 0){
        precoFinal = preco + (preco * 0.10);
        printf("O novo preço é: %d", precoFinal);
    }
    
    else if (preco >= 100 && preco < 300){
        precoFinal = preco + (preco * 0.20);
        printf("O novo preço é: %d", precoFinal);
    }
    
    else if (preco >= 300 && preco < 1000){
        precoFinal = preco + (preco * 0.50);
        printf("O novo preço é: %d", precoFinal);
    }
    
    else if (preco >= 1000){
        precoFinal = preco;
        printf("O preço permanece: %d", precoFinal);
    }
    
    else {
        printf("Erro! O valor é negativo");
    }
  
    return 0;
}