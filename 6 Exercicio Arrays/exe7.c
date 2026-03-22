#include <stdio.h>
#include <stdlib.h>
int main(){
    int v[5];

    for(int i=0; i<=4; i++) {
        printf("Digite o %i* valor: ", i+1);
        scanf("%i", &v[i]);
        v[i] = v[i]*2;
    }
    printf("--------------------------------------\n");
    for(int i=0; i<=4; i++) {
        printf("%i* Numero digitado dobrado = %i.\n", i+1, v[i]);
        printf("--------------------------------------\n");
    }
    return 0;
}
