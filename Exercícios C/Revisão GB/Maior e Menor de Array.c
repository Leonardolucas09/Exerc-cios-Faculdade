/*Crie uma função que recebe como parâmetro um array de inteiros e imprime na tela, respectivamente, o maior e o menor valor deste array. Chame a função no bloco main..*/

#include <stdio.h>

int valorMaiorMenor(int array[5], int tamanho){
    
    
    int maior = array[0];
    int menor = array[0];
    
    for (int i = 0; i < tamanho; i++){
        if (array[i] > maior)
            maior = array[i];
        
        if (array[i] < menor)
            menor = array[i];
        
    }
    
    printf("O maior é: %d\n", maior);
    printf("O menor é: %d", menor);
}

int main()
{
    int array[5];
    int valor;
    
    printf("Digite os valores para o array:\n");
    
        for (int i = 0; i < 5; i++){
            scanf("%d", &valor);
            array[i] = valor;
        }
        
    printf("\n")
    
    int tamanho = sizeof(array) / sizeof(array[0]);
    
    valorMaiorMenor(array, tamanho);

}
