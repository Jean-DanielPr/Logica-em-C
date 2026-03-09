#include <stdio.h>

int i, tab;

int main(){

    printf("TABUADA INTELIGENTE\n");
    printf("Qual tabuada deseja ver?\n");
    scanf("%i", &tab);

    for(i=1; i<=10; i++){
        printf("%i x %i = %i\n", tab, i, tab*i);
    }
    
    return 0;
}
