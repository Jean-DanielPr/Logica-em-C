#include <stdio.h>
int main(){

    int sec = 73, escolha = 0, contador = 0;

    printf("Jogo da advinhacao!\n ");
    printf("Advinhe o numero que estou pensando de 1 a 100:\n");

    while (escolha != sec){
        contador++;
        printf("%io Chute\n", contador);
        scanf("%i", &escolha);
        if (escolha > sec){
            printf("Muito alto! Tente um numero MENOR do que %i.\n", escolha);
        } else if (escolha < sec){
            printf("Muito baixo! Tente um numero MAIOR do que %i.\n", escolha);
        }
        }
    printf("Parabens!\n");
    printf("Eu estava pensando no %i!\n", sec);

    return 0;  
}
