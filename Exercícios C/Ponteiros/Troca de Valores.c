/*Escreva uma função que troca os valores de duas variáveis inteiras usando ponteiros. Utilize a seguinte assinatura para sua função:

void trocaValores(int *a, int *b){

    //seu código

}*/

#include <stdio.h>

void trocaValores(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 5, y = 10;
    
    printf("Antes da troca era: x = %d e y = %d\n", x, y);
    trocaValores(&x, &y);
    printf("Depois da troca é: x = %d e y = %d", x, y);
    
    
    return 0;
}
