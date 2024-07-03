/*Crie uma função que recebe como parâmetro um array de inteiros e imprime na tela os números desse array com exceção de valores duplicados. Chame a função a partir do main.*/

#include <stdio.h>

int semDuplicado(int *array, int tamanho){
    int impressos[tamanho];
    int cont = 0;
    
    for (int i = 0; i < tamanho; i++){
        int duplicado = 0;
        
        for (int j = 0; j < cont; j++)
            if(array[i] == impressos[j]){
                duplicado = 1;
                break;
            }
    
        if (!duplicado){
            printf("%d ", array[i]);
            impressos[cont++] = array[i];
        }
    }
    printf("\n");
}

int main()
{
    int array[] = {2, 5, 7, -10, 8, 2, -1, -8, -10, 7, 8, 9, 10};
    int tamanho = sizeof(array) / sizeof(array[0]);
    
    semDuplicado(array, tamanho);
    
}
