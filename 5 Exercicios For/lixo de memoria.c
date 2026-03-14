#include <stdio.h>
int main(){
    int lixo_de_memoria;

    printf("lixo de memoria\n");
    printf("%i\n", lixo_de_memoria);
    
/* Essa variavel nao foi declarada, e ela sempre vai apresentar um valor diferente
do anterior
Ela sempre vai pegar qualquer lixo que estiver na memoria e inicializar ela
Recomendavel sempre iniciar uma variavel com zero. Para nao correr o risco de ela assumir qualquer valor aleatorio.
*/
    return 0;
}
