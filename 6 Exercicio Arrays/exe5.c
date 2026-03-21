#include <stdio.h>
int main(){
    int v[5] = {10, 25, 33, 40, 50}, num;

    printf("Digite um valor inteiro: ");
    scanf("%i", &num);

    for(int i=0; i<=4; i++) {
        if(num==v[i]) {
            printf("O numero %i foi encontrado na posicao %i.\n",num, i+1);
            return 0;
        }
    }
    printf("O numero %i nao foi encontrado.\n", num);
    return 0;
}
