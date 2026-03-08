#include <stdio.h>
int main(int argc, char const *argv[])
{
    int senha = 0;

    while (senha != 1234){
        printf("Digite seu PIN.\n");
        scanf("%i", &senha);

        if(senha != 1234){
            printf("Senha incorreta!\nTenta novamente.\n-----------------\n");
        } 
    }

    printf("Acesso concedido!\n-----------------\n");
    return 0;
}
