/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Peça para o usuário 10 caracteres e imprima na tela a quantidade de vogais digitadas.

#include <stdio.h>

int main(){
    
    char palavra;
    int vogais = 0;
    
    printf("Digite um caracter 10 vezes abaixo:\n");
    
    for (int i = 1; i <= 10; i++){
        
        printf("%d - ", i);
        scanf(" %c", &palavra);
       
        if(palavra == 'a' || palavra == 'A' || palavra == 'e' || palavra == 'E' || palavra == 'i' || palavra == 'I' || palavra == 'o' || palavra == 'O' || palavra == 'u' || palavra == 'U'){
            vogais++;
        }
    }
    
    printf("A quantidade de vogais digitadas foram %d", vogais);
    
    

    
    return 0;
}