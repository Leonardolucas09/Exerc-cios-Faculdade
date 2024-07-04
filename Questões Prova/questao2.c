//CRIE UMA FUNÇÃO QUE RECEBE POR PARAMETRO UM ARAY DE INT E RETORNA QUANTOS NUMEROS NEGATIVOS ESTÃO NO ARAY

#include <stdio.h>

int numerosNegativos(int X){
    int cont = 0;
    int numero;
    
    for (int i = 0; i < X; i++){
        printf("Digite um número: ");
        scanf("%d", &numero);
        
        if (numero < 0)
            cont++;
    }

    return cont;
}
 
int main(){
   int valor, result;
        printf("Digite a quantidade de números: ");
        scanf("%d", &valor);
           
        result = numerosNegativos(valor);
   
        printf("Foram digitados %d valores negativos", result);
    
    return 0;
}