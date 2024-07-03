/*Para cada conjunto de valores abaixo, escreva o código em C, usando laço(s), que
preencha um array com os valores:

a) 10 9 8 7 6 5 4 3 2 1*/

#include <stdio.h>

// int main()
// {

//     int array[10];
//     int i = 0;
    
//     for (i; i < 10; i++){
//         array[i] = 10 - i;
//     }
    
//     for (i = 0; i < 10; i++){
//         printf("%d ", array[i]);
//     }

//     return 0;
// }

// b) 0 1 4 9 16 25 36 49 64 81 100 - o Quadrado dos números 0, 1, 2, 3, ..., 10.

// int main()
// {

//     int array[11];
//     int i = 0;
    
//     for (i; i <= 10; i++){
//         array[i] = i * i;
//     }
    
//     for (i = 0; i <= 10; i++){
//         printf("%d ", array[i]);
//     }

//     return 0;
// }

// c) 1 2 3 4 5 10 20 30 40 50 - o Quadrado dos números 0, 1, 2, 3, ..., 10.

int main()
{

    int array[10];
    int i = 0;
    
    int valores[] = {1, 2, 3, 4, 5, 10, 20, 30, 40, 50};
    
    for (i; i < 10; i++){
        array[i] = valores[i];
    }
    
    for (i = 0; i < 10; i++){
        printf("%d ", array[i]);
    }

    return 0;
}