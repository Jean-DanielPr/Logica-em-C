#include <stdio.h>
int main(){
    int num = 0;
    printf("Me informe um numero par.\n");

    do{
        printf("Digite um numero:\n");
        scanf("%i", &num);
    }while(num % 2 != 0);

    printf("Muito obrigado!\n");   

    return 0;
}
