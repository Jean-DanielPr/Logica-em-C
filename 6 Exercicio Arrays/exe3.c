#include <stdio.h>
int main(){
    int idade [6];

    printf("------------------------------------\n");
    for(int i=0; i<=5; i++) {
        printf("Idade da %i* pessoa: ", i+1);
        scanf("%i", &idade[i]);
    }
    printf("------------------------------------\n");

    for(int i=0; i<=5; i++) {
        printf("A %i* pessoa possui %i anos.\n", i+1, idade[i]);
        if(idade[i] >= 18) {
            printf("Acesso liberado!\n");
        } else {
            printf("Acesso Negado!\n");
        } 
        printf("------------------------------------\n");
    }
    return 0;
}
