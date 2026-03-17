#include <stdio.h>

int main() {
    char frase[100];
    printf("Digite uma frase: ");
    
    // fgets(variavel, tamanho, stdin)
    fgets(frase, sizeof(frase), stdin);
    
    printf("Voce digitou: %s", frase);
    return 0;
}