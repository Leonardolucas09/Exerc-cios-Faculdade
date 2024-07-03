/*Faça um programa que cria um array bidimensional de inteiros, preenche este array com quaisquer valores e imprime este array. Cada linha do array deve ser impressa em uma nova linha.*/

#include <stdio.h>

int main()
{
    int matriz[3][4] = { {19, 32, 45, 31},
                         {-10, 41, 9, 3},
                         {133, 92, 10, 4}
                        };
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            printf("[%d] ", matriz[i][j]);
        }
        printf("\n"); //da um espaço (após imprimir o fim de uma linha, da um \n para imprimir a linha seguinte)
    }
    
    return 0;
}
