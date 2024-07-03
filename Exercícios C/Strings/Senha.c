/*A senha de determinado usuário é o texto "senhaDificil789$". Crie um programa que pede para o usuário digitar a senha e, caso a senha esteja correta, imprima na tela a mensagem "[Senha corrreta]". O usuário tem 3 chances de acertar a senha, e a cada vez que ele digitar uma senha errada deve ser impresso na tela a mensagem "[Senha incorreta, tente novamente]". Caso o usuário não acerte a senha nas 3 tentativas, informe com a mensagem "[Número de tentativas esgotadas]".*/

#include <stdio.h>
#include <string.h>

int main()
{
    
    char senha[18] = "senhaDificil789$";
    char chute[18];
    int i = 0;

    printf("Digite a senha para entrar: ");
    fgets(chute, 18, stdin);
    
    chute[strlen(chute)-1] = '\0';

    if (strcmp(senha, chute) == 0)
        printf("As senhas coincidem, seja bem-vindo!");
    
    else
        for (; i < 2; i++){
            printf("Senha Incorreta, tente novamente: ");
            printf("Tentativa: %d\n", i);
            fgets(chute, 18, stdin);
            chute[strlen(chute)-1] = '\0';

            if (strcmp(senha, chute) == 0)
                break;
        }

        if (i == 2)
            printf("Número de tentativas esgotadas");
        
        
        else
            printf("As senhas coincidem, seja bem-vindo!");

    return 0;
}
