/*Escreva um programa que compare duas strings digitadas pelo usuário e diga se são iguais ou diferentes.*/

#include <stdio.h>
#include <string.h>

int main()
{
    
    char string1[12];
    char string2[12];
    
    printf("Digite a primeira palavra: ");
    fgets(string1, 12, stdin);
    
    printf("Digite a segunda palavra: ");
    fgets(string2, 12, stdin);

    int comparacao = strcmp(string1, string2);
    
    if (comparacao == 0)
        printf("Palavras iguais");
    
    else
        printf("Palavras diferentes");

    return 0;
}
