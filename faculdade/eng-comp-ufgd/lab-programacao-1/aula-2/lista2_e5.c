#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
Ler um número de 3 dígitos e imprimir a saída dos dígitos separados por Centena, Dezena, Unidade.
*/

int main(){

    setlocale(LC_ALL, "");

    int x, C, D, U;

    printf("Insira um número inteiro de 3 dígitos: ");
    scanf("%d", &x);

    C = x/100;
    D = x/10%10;
    U = x%10;

    printf("O dígito da centena é %d, o da dezena é %d e o das unidades é %d.", C, D, U);

    return 0;

}
