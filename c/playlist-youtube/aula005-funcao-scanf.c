#include <stdio.h>

int main(){

    float numero = 3.1415;

    printf("Valor da minha variavel: %.2f", numero);

    printf("Digite um numero real: ");
    scanf("%f", &numero);

    printf("\nValor lido: %.2f", numero);

    return 0;
}