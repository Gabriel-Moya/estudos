#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
Ler um n�mero de 3 d�gitos e imprimir a sa�da dos d�gitos separados por Centena, Dezena, Unidade.
*/

int main(){

    setlocale(LC_ALL, "");

    int x, C, D, U;

    printf("Insira um n�mero inteiro de 3 d�gitos: ");
    scanf("%d", &x);

    C = x/100;
    D = x/10%10;
    U = x%10;

    printf("O d�gito da centena � %d, o da dezena � %d e o das unidades � %d.", C, D, U);

    return 0;

}
