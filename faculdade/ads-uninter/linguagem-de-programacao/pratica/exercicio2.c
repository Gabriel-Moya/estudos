#include <stdio.h>
#include <stdlib.h>

int main(){

    int ru[7], *ptr;
    int soma = 0;

    // Captura de dados
    printf("Insira seu RU: ");
    for (int i = 0; i < 7; i++){
        scanf("%d", &ru[i]);
    }

    ptr = &ru;

    // Soma dos dígitos através do ponteiro
    for (int i = 0; i < 7; i++){
        soma += *ptr;
        ptr++;
    }

    // Exibe a soma
    printf("\nA soma dos elementos resulta em: %d", soma);

    return 0;
}