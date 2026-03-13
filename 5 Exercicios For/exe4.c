#include <stdio.h>
int main(){
    int senha_correta = 1234, tentativa = 0;

    printf("LOGIN:\n");
    for(int cont=1; cont<=3; cont++){
        printf("-------------------\n");
        printf(" Digite sua senha:\n");
        scanf("%i", &tentativa);
        printf("-------------------\n");
        if(tentativa == senha_correta){
            printf("ACESSO LIBERADO!\n");
            break;
        }else{
            printf("ACESSO NEGADO\n");
        }
        if(cont == 3 && tentativa){
            printf("-------------------\n");
            printf("Limite de tentativas excedido.\n");
            printf("ACESSO BLOQUEADO\n");
            printf("-------------------\n");
        }
    }
    return 0;
}
