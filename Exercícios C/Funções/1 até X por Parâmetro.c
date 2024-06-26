/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Crie um procedimento que recebe um inteiro X por parâmetro e imprime os valores de 1 até X (inclusive).

#include <stdio.h>

int inteiro(int X){
    int i = 1;
        for(; i < X; i++)
            printf("%d - ", i);
}

int main(){
    int valor;
    
    printf("Digite um valor: ");
    scanf("%d", &valor);
    
    if(valor > 0){
        printf("%d", inteiro(valor));
    }
    
    else {
        printf("O valor deve ser maior que 0.");
    }
    
    return 0;
}