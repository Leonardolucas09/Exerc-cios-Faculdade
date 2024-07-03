/*Crie uma função que recebe como parâmetro uma matriz quadrada, ou seja, com o mesmo número de linhas e colunas, e imprima a sua transposição. Chame essa função no bloco main. (A transposição de uma matriz[i][j] é uma matriz [j][i].*/

#include <stdio.h>

int transposicao(int matriz[3][3]){
    
    int valor;
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("Digite o valor da linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &valor);
            matriz[i][j] = valor;
        }
    // }
      
        printf("\nEssa é uma impressao sem transposição da linha:\n");
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++)
                printf("[%d] ", matriz[i][j]);
            printf("\n");
        }
        
        printf("\nEssa é uma impressao com transposição:\n"); 
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++)
                printf("[%d] ", matriz[j][i]);
            printf("\n");
            }
    }
}
int main()
{
    int matriz[3][3];

    transposicao(matriz);
    
}
