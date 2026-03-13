#include <stdio.h>
int main(){
    printf("-----------------\n");
    printf("   JOGO DO PIM   \n");
    printf("-----------------\n");
    printf("Os numeros que forem divisiveis por 4");
    printf("\nserao substituidos por PIM!!!");

    for(int cont = 1; cont <= 20; cont++){
        if(cont%4==0){
            printf("PIM!!!\n");
        } else {
            printf("%i.\n", cont);
        }
    }
    return 0;
}
