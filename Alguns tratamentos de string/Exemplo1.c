#include <stdio.h>
#include <string.h>
int main(){
    char str1[100], str2[100], str3[100], nome[100];

    printf("Digite uma string: ");
    gets(str1);
    printf("Digite outra string: ");
    gets(nome);

    strcpy (str2, str1);
    strcpy (str3, "Voce digitou: ");

    printf("%s%s.\n", str3, str2);
    printf("A palavra %s tem %i chacacteres.\n", str2, strlen(str2));

    if (strcmp (str1, nome) == 0) {
        printf("Os dois nomes digitados sao exatamente iguais.\n");
    } else {
        printf("Os dois nomes digitados sao diferentes.\n");
    }
    strcat(str1, nome);
    printf("A juncao das duas strings fica: %s", str1);
    
    return 0;
}
