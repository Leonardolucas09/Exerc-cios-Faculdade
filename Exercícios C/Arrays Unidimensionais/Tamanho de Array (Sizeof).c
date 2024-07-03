/* Escreva um trecho em C que exiba os valores de um array a double numa mesma
linha, separados por um hífen. Obs.: não deve ser impresso na tela o último hífen. Por exemplo,
considerando um array com os valores {1, 2, 3, 4, 5}, a impressão deve ser:
1-2-3-4-5*/

#include <stdio.h>

int main()
{

    double array[] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]); //calculo de tamanho de array

    for (int i = 0; i < n; i++){
        if(i < n - 1)
            printf("%.0f-", array[i]);
        
        else
            printf("%.0f", array[i]);
        
    }

    return 0;
}

/* sizeof(arr)→ retorna o tamanho total do array em bytes
sizeof(arr[0])→ retorna o tamanho de um elemento do array em byte */s