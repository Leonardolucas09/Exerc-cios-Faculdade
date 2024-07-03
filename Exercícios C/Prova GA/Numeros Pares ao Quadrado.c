/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*Crie um procedimento que recebe um valor inteiro N por parâmetro. O procedimento deve imprimir o
quadrado de cada um dos valores pares de 1 até N, inclusive N, se for o caso. Por exemplo, quando N = 6, o
procedimento deve imprimir os valores 4, 16 e 36 (2 ao quadrado, 4 ao quadrado e 6 ao quadrado, respectivamente).
Crie um main para chamar o procedimento criado, passando um valor lido pelo teclado. Você deve garantir que o
usuário digite um valor entre 5 e 1000, solicitando novamente sempre que um valor inválido for informado.

*/

#include <stdio.h>
#include <math.h>

int numerosPares(int n, int e){
    e = 2;
    for (int i = 1; i <= n; i++){
        if (i % 2 == 0){
            int p = pow(i, e);
            printf("O número par resulta em %d, ao quadrado fica %d\n", i, p);
        }
    }
}
 
int main()
{
   int numero;
   int expoente;
   
       do {
           printf("Digite um valor de 5 a 1000: ");
           scanf("%d", &numero);
           
           if (numero < 5 || numero > 1000)
               printf("Valor invalido.\n");
       }
        while (numero < 5 || numero > 1000);
        
        numerosPares(numero, expoente);

    return 0;
}