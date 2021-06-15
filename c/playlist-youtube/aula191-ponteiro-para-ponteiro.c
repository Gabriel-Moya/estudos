#include <stdio.h>
#include <stdlib.h>

int main(){

    int a = 100, *b, **c;

    b = &a;
    c = &b;

    printf("Endereço de A: %p\tConteudo de A: %d\n", &a, a);
    printf("Endereço de B: %p\tConteudo de B: %p\n", &b, b);
    printf("Conteudo apontado por B: %d\n", *b);

    printf("Endereço de C: %p\tConteudo de C: %p\n", &c, c);
    printf("Conteudo apontado por C: %d\n", **c);

    return 0;
}