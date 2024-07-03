/*Faça um programa que cria um array bidimensional de char e preenche-o com quaisquer valores. Em seguida, peça para o usuário digitar um caractere pelo teclado e imprima na tela a mensagem "Caractere encontrado na posição X do array", onde X é a posição na qual o caractere foi encontrado no array. Caso o caractere não esteja no array imprima a mensagem "Caractere não encontrado no array".*/

#include <stdio.h>

int main()
{
    char array[2][3] = { {'c', 'A', 'o'},
                         {'p', 'q', 'j'},
                       };
    
    char escolha;
    int encontrado = 0; //variável que será usada para a busca do caractere
    
    printf("Digite o caractere a sua escolha: ");
    scanf(" %c", &escolha);

    //Abaixo a validação de linha à coluna se há um caractere que coincide com o que o usuário escreveu;

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            if (array[i][j] == escolha){
                printf("Caractere encontrado na posição [%d][%d] do array", i, j);
                encontrado = 1;
                break;
            }
        }
        
        if (encontrado) 
            break;
    }
    
    //Se o caractere não foi encontrado (que significa que não está na lista) irá imprimir a mensagem abaixo:
    
    if (!encontrado)
        printf("Caractere não encontrado no array");
    return 0;
}
