/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*Muitos fãs da Xuxa pedem para que ela cante a música "5 Patinhos" com um número maior de patos. Obviamente, Xuxa não quer escrever uma letra para cada fã, e pediu para que você escrevesse um programa que faça isso por ela. 

Assim sendo, crie um programa que recebe uma quantidade de patinhos e armazena em P. Seu programa deve imprimir na tela a música "P Patinhos" (trocando P pela quantidade de patos) da Xuxa com a quantidade de patinhos informada pelo usuário via teclado.
*/

#include <stdio.h>

int cancao(int quantidade){
    int i = 1;
    
    if (quantidade >= 2){
        for (int i = quantidade; i > 1; i--){
            printf("\n%d patinhos\nForam passear\nAlém das montanhas\nPara brincar\nA mamãe gritou\nQuack quack quack\nMas só %d patinhos\nVoltaram de lá\n", i, i-1);
        }
        
        printf("\n1 patinho\nFoi passear\nAlém das montanhas\nPara brincar\nA mamãe gritou\nQuack quack quack\nMas nenhum patinho\nVoltou de lá\n\n");
        printf("A mamãe patinha\nFoi procurar\nAlém das montanhas\nNa beira do mar\nA mamãe gritou\nQuack quack quack\nE os %d patinhos\nVoltaram de lá\n", quantidade);
    }
    
    else{
        printf("A quantidade de patinhos deve ser maior ou igual a 2");
    }
}
    
 
int main()
{
    int patinhos;
    
    printf("Digite a quantidade de patinhos: ");
    scanf("%d", &patinhos);
    cancao(patinhos);
    return 0;
}