/* Escreva um trecho em C que leia 10 valores double do teclado e armazene-os num
array d.*/

#include <stdio.h>

int main()
{

    int i = 0;
    double arrayd[10];

    for (; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%lf", &arrayd[i]);
    }
    
    printf("Os valores escolhidos foram:");
    
    for (i = 0; i < 10; i++)
        printf("\n%.2lf ", arrayd[i]);
    
    
    
    return 0;
}
