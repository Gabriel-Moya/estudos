#include <stdio.h>
#include <stdlib.h>

int main(){

    char letra;

    printf("Digite um caracter: ");
    letra = getc(stdin);

    printf("Caracter lido: %c\n", letra);

    return 0;
}