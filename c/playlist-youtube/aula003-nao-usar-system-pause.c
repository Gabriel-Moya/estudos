#include <stdio.h>

int main(){

    printf("Nao use a funcao system(\"pause\")\n");
    /*
        Pq não usar a função system("pause")?
        A função em questão só funcionar para windows, se necessário compilar em MacOS ou alguma distribuição Linux
        Ela não irá funcionar, parra isso podemos utilizar o recurso abaixo.
    */

    printf("\nPresione qualquer tecla para finalizar.");
    getchar();

    return 0;
}