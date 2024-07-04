//CRIE  UM PROGRAMA QUE LEIA 100 NUMEROS DOUBLE LIDOS PELO  TECLADO E IMPRIME ESTES  NUMEROS  DE TRAS PARA FRENTE "

#include <stdio.h>

int main()
{

    double valor[100];
    
    for (int i = 0; i < 100; i++){
        printf("Digite o valor double: ");
        scanf("%lf", &valor[i]);
    }
    
    for (int i = 99; i >= 0; i--){
        printf("%.1lf ", valor[i]);
    }

    return 0;
}