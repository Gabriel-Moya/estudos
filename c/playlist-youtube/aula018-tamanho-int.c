#include <stdio.h>

/*
        Tamanho de um int na memória
        intervalo: -2.147.483.648   2.147.483.647
*/

int main() {

    int x = 2147483647;

    printf("Valor de X = %d", x);
    x++;
    printf("Valor de X = %d", x);

    // 4 * 8 = 32 bits


    return 0;
}