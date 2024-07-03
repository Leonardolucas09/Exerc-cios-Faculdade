/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Crie uma função que recebe um inteiro por parâmetro e retorna verdadeiro (1) caso seja um valor primo e falso (0) caso contrário. Caso o parâmetro seja negativo o método deve retornar falso (0).

#include <stdio.h>
#include <math.h>

int valorPrimo(int numero){
    
    if (numero <= 1) {
        return 0; 
        //o valor não é primo (1, 0 e negativos não são primos)
    }
    
    for (int i = 2; i <= sqrt(numero); i++){
        if (numero % i == 0)
            return 0;
            //Encontra um divisor primo (sqrt é uma função que serve para retornar a raiz quadrada de um número.)
    }
    return 1;
}
 
int main()
{
    int valor;
    
    printf("Digite um número: ");
    scanf("%d", &valor);
    
    if (valorPrimo(valor))
        printf("O valor %d é primo.", valor);
    
    else
        printf("O valor %d não é primo", valor);

    return 0;
}