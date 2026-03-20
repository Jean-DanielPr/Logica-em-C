#include <stdio.h>
#include <stdlib.h>
int main(){
    float preco[5], soma = 0;
    
    for(int i=0; i<=4; i++) {
        printf("Digite o valor do %d* item: ", i+1);
        scanf("%f", &preco[i]);
        soma += preco[i];
    }

    printf("O valor total da compra foi R$%.2f.\n", soma);

    for(int i=0; i<=4; i++) {
        printf("Valor do %i* produto: R$%.2f\n", i+1, preco[i]);
    }

    return 0;
}
