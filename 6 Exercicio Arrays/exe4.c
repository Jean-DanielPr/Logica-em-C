#include <stdio.h>
int main(){
    int qtd_pares = 0, qtd_impar = 0, num[6];

        printf("Contador de pares e impares!\n");
        printf("-------------------------------\n");

    for(int i=0; i<=5; i++) {
        printf("Digite o %i* numero: ", i+1);
        scanf("%i", &num[i]);     
        if(num[i]%2 == 0) {
            qtd_pares+=1;
        } else {
            qtd_impar+=1;
        }
    }
    printf("---------------------------------\n");
    printf("Foram digitados %i numeros pares.\nE %i numeros impares.\n", qtd_pares, qtd_impar);
    
    return 0;
}
