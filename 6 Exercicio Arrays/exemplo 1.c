#include <stdio.h>
  
    int vetor[5];

int main(){

    for(int i=0;i<5;i++){
        printf("Digite o %i valor:\n", i+1);
        scanf("%i", &vetor[i]);
    }

    printf("Dados inseridos:\n");
    for(int i=0;i<5;i++){
        printf("%i ", vetor[i]);
    }

    return 0;
}
 