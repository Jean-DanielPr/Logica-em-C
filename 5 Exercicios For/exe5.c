#include <stdio.h>
int main(){
    int qtd, rejeitados = 0, aprovados = 0;
    float peso;
    printf("Quantas pecas foram produzidas hoje?\n");
    scanf("%i", &qtd);
    for (int cont=1; cont<=qtd; cont++) {
        printf("Qual e o peso da %i* peca?\n", cont);
        scanf("%f", &peso);
        if (peso < 10) {
            rejeitados++; 
        } else {
            aprovados++;
        }
    }
    printf("Total de pecas aprovadas: %i.\n", aprovados);
    printf("Total de pecas reprovadas: %i.\n", rejeitados);    
    return 0;
}
