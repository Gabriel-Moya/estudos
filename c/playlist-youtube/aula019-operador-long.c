#include <stdio.h>

/*
        Operador long para tipo int
        %li / %ld
*/

int main () {

    long long int x = 2147483647;

    printf("Tamanho de X em bytes: %d\n", sizeof x);

    printf("Valor de X = %lli\n", x);
    x++;
    printf("Valor de X = %lld\n", x);

    return 0;
}