#include <stdio.h>
#include <stdlib.h>

int main(){

    int ru[7], *ptr;
    int soma = 0;

    printf("Insira seu RU: ");
    
    for (int i = 0; i < 7; i++){
        scanf("%d", &ru[i]);
    }

    ptr = &ru;

    for (int i = 0; i < 7; i++){
        soma += *ptr;
        ptr++;
    }

    printf("\nA soma dos elementos resulta em: %d", soma);

    return 0;
}