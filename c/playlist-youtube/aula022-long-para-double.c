#include <stdio.h>

/*
        double      -> %lf
        long double -> %Lf

        __mingw_printf();
*/

int main() {

    float x = 3.1415;

    long double y = 3.141592653589793;

    // O print abaixo só irá em linux ou mac
    printf("Valor de Y: %Lf\n", y);

    // Para windows precisamos acessar uma função do compilador
    __mingw_printf("Valor de Y: %.15Lf\n", y);
    printf("Um long double precisa de %d bytes de memoria.\n", sizeof y);

    return 0;
}