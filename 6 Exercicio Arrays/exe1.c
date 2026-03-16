#include <stdio.h>

    int vetor[5];

int main(){

    for(int i=0;i<5;i++){
        printf("Digite o %i* numero: \n", i+1);
        scanf("%i", &vetor[i]);
    }   
    printf("Agora os numeros na posicao inversa: \n");
    for(int i=4;i>=0;i--){
        printf("%i ", vetor[i]);
    }

    return 0;
}
