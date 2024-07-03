/*Faça um programa que cria um array bidimensional de inteiros, preenche-o com quaisquer valores e cria um novo array unidimensional que contém somente os valores pares do array criado.*/

#include <stdio.h>

int main()
{
    int l, c;
    int contPar = 0;
    
    printf("Digite a quantidade de linhas: ");
    scanf("%d", &l);
    
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &c);
    
    int matriz[l][c];
    
    //Adicionando valores na matriz
    
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            
            int valor;
            
            printf("Digite o valor da linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &valor);
            matriz[i][j] = valor;
            
            //contando os valores pares e incrementando na variável contPar
            if (matriz[i][j] % 2 == 0)
                contPar++;
        }
    }
    
    printf("\n");
    
    //Imprimindo os valores da matriz
    
    printf("Sua matriz personalizada foi: \n");
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            printf("[%d] ", matriz[i][j]);
        }
        printf("\n"); //da um espaço (após imprimir o fim de uma linha, da um \n para imprimir a linha seguinte)
    }
    
    //Array dos valores pares unidimensionais abaixo:
    
    int pares[contPar];
    int index = 0;
    
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            if (matriz[i][j] % 2 == 0)
                pares[index++] = matriz[i][j];
        }
    }
    
    //Imprimindo o array unidimensional de pares
    
    printf("\nOs valores pares em array unidimensional são:\n");
    for (int i = 0; i < contPar; i++)
        printf("[%d] ", pares[i]);
    
    return 0;
}
