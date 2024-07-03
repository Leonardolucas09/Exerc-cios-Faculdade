/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int tabuada(int n){
            for (int i = 1; i <= 10; i++){
                int m = n * i;
                printf("%d x %d = %d\n", i, n, m);
            }
}

int main(){
    int valor;
    
    printf("Digite um número de 2 a 1000 para a tabuada: ");
    scanf("%d", &valor);
    
    while (valor < 2 || valor > 1000){
        printf("Erro, digite novamente o valor: ");
        scanf("%d", &valor);
    };
    
    tabuada(valor);

    return 0;
}