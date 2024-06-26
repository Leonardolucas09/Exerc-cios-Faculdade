/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*Crie uma função que recebe 3 notas por parâmetro e retorna o conceito atingido pela média aritmética das notas. Os conceitos são:

    - entre 0.0 e 4.0 (inclusive): conceito 'D'
    - entre 4.0 (não incluído) e 7.0 (inclusive): conceito 'C'
    - entre 7.0 (não incluído) e 9.0 (inclusive): conceito 'B'
    - entre 9.0 (não incluído) e 10.0 (inclusive): conceito 'A'
*/

#include <stdio.h>

int sistemaNotas(float A, float B, float C){
    
    float nota = (A + B + C) / 3;
    char conceito;
    
    if (nota >= 0 && nota <= 4){
        conceito = 'D';
        printf("%c", conceito);
    }
    
    else if (nota > 4.0 && nota <= 7){
        conceito = 'C';
        printf("%c", conceito);
    }
    
    else if (nota > 7.0 && nota <= 9){
        conceito = 'B';
        printf("%c", conceito);
    }
    
    else{
        conceito = 'A';
        printf("%c", conceito);
    }
}

int main(){
    float notaA, notaB, notaC;
    
    printf("Digite o valor da primeira nota: ");
    scanf("%f", &notaA);
    
    printf("Digite o valor da segunda nota: ");
    scanf("%f", &notaB);
    
    printf("Digite o valor da terceira nota: ");
    scanf("%f", &notaC);
    
    sistemaNotas(notaA, notaB, notaC);
    
    return 0;
}