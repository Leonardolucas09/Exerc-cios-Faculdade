/*Escreva um programa que leia duas strings do teclado e as concatene.*/

#include <stdio.h>
#include <string.h>

int main()
{
    
    char string1[10] = "palavra";
    char string2[12] = " nao sei";

    strcat(string1, string2);
    
    printf("As palavras concatenadas formam: %s", string1);

    return 0;
}
