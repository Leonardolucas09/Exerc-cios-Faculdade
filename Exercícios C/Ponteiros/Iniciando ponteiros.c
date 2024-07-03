#include <stdio.h>

int main()
{
    
    char nome[] = "Teste de texto";
    
    printf("Endereço de nome %p\n", nome);
    printf("Primeiro elemento de nome %c\n", *nome);
    printf("Segundo elemento de nome %c\n", *(nome+1));
    printf("Terceiro elemento de nome %c\n\n", *(nome+2));

    char *ponteiro = nome;
    
    printf("Endereço de ponteiro %p\n", ponteiro);
    printf("Valor de ponteiro %c\n\n", *ponteiro);
    
    while(*ponteiro != '\0'){
        printf("Letra: %c\n", *ponteiro);
        ponteiro++;
    }
    
    printf("Endereço final de ponteiro %p\n", ponteiro);
    
    return 0;
}
