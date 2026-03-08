#include <stdio.h>
int main(int argc, char const *argv[]){

    int cont = 0;

    do{
        cont += 1;
        printf("%i.\n", cont);
    }while(cont <= 9);
    
    return 0;
}

