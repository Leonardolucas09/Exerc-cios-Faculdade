/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    // Exercício 6: Faça um programa que cria dois arrays bidimensionais de double de dimensões informadas pelo usuário pelo teclado. Em seguida, preencha as posições dos arrays também com valores obtidos via teclado. Depois disso, seu programa deve criar um array unidimensional que possui todos os elementos negativos (dos dois arrays) na primeira parte e todos os elementos positivos e zero (dos dois arrays) na segunda parte.
    
    int Linha1, Coluna1;
    int Linha2, Coluna2;
    
    printf("Escolha a dimensão da linha da primeira matriz: ");
    scanf("%d", &Linha1);
    
    printf("Escolha a dimensão da coluna da primeira matriz: ");
    scanf("%d", &Coluna1);
    
    
    double array1[Linha1][Coluna1];
    
    for(int i = 0; i < Linha1; i++){
        for(int j = 0; j < Coluna1; j++){
        
    double valorArray1; 
        
        printf("Digite o valor da linha %d e coluna %d ", i+1, j+1);
        scanf("%lf", &valorArray1);
        array1[i][j] = valorArray1;
        }
    }
    
    // ----------------------------------
    
    for(int i = 0; i < Linha1; i++){
        for(int j = 0; j < Coluna1; j++){
            
        double valorArray1;
        
        printf("[%.1lf]", array1[i][j]);
        }
        printf("\n");
    }
    
    //*************************************************************
            
    printf("Escolha a dimensão da linha da segunda matriz: ");
    scanf("%d", &Linha2);
    
    printf("Escolha a dimensão da coluna da segunda matriz: ");
    scanf("%d", &Coluna2);
    
    double array2[Linha2][Coluna2];

    
    for(int i = 0; i < Linha2; i++){
        for(int j = 0; j < Coluna2; j++){
        
    double valorArray2; 
        
        printf("Digite o valor da linha %d e coluna %d ", i+1, j+1);
        scanf("%lf", &valorArray2);
        array2[i][j] = valorArray2;
        }
    }
    
    // ----------------------------------
    
    for(int i = 0; i < Linha2; i++){
        for(int j = 0; j < Coluna2; j++){
            
        double valorArray2;
        
        printf("[%2.lf]", array2[i][j]);
        }
        printf("\n");
    }
    
        //*************************************************************
        
    int somaArray = (Linha1 * Coluna1) + (Linha2 * Coluna2);
    double arrayNegativo[somaArray];
    
    int p = 0;
    
    for(int i = 0; i < Linha1; i++){
        for(int j = 0; j < Coluna1; j++){
            if (array1[i][j] < 0){
                arrayNegativo[p] = array1[i][j];
                p++;
            }
        }
    }
    
    for(int i = 0; i < Linha2; i++){
        for(int j = 0; j < Coluna2; j++){
            if (array1[i][j] < 0){
                arrayNegativo[p] = array1[i][j];
                p++;
            }
        }
    }
    
        // ----------------------------------
        
    for(int i = 0; i < Linha1; i++){
        for(int j = 0; j < Coluna1; j++){
            if (array1[i][j] >= 0){
                arrayNegativo[p] = array1[i][j];
                p++;
            }
        }
    }
    
    for(int i = 0; i < Linha2; i++){
        for(int j = 0; j < Coluna2; j++){
            if (array1[i][j] >= 0){
                arrayNegativo[p] = array1[i][j];
                p++;
            }
        }
    }
    
    for(int i = 0; i < somaArray; i++){
        printf("%2.lf ", arrayNegativo[i]);
    }
    

    return 0;
}