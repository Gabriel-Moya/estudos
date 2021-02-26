#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
Uma fábrica controla o tempo de trabalho sem acidentes pela quantidade de dias. Faça
um programa para converter este tempo em anos, meses e dias. Assuma que cada
mês possui sempre 30 dias.
*/

int main(){

    setlocale(LC_ALL,"");

    int D, M, A;

    printf("Quantidade de dias trabalhados sem acidentes: ");
    scanf("%d", &D);

    M = D/30;
    A = M/12;
    M = D/30-A*12;
    D = D-M*30-A*360;

    printf("\n%d anos, %d meses, %d dias ", A, M, D);

    return 0;
}
