#include <stdio.h>
int main(){
    int v[5], aux = 5-1;

    for (int i=0; i<=aux; i++) {
        printf("Digite um valor inteiro: ");
        scanf("%i",&v[i]);
    } 

/*  Posso declarar uma variavel em qualquer local do programa
    isso faz com que meu codigo fique mais facil de ler e economize espaco
    declarando a variavel somente quando eu for utiliza-la
    Isso evita que uma variavel fique existindo no programa por muito tempo. 
    Entao declarei essa variavel(maior) aqui em baixo */

    int maior = v[0];
    for(int i=0; i<=aux; i++) {
            if(v[i] > maior) {
                maior = v[i];
        }    
    } 

    printf("O maior numero digitado foi %i.\n", maior);

    return 0;
}
