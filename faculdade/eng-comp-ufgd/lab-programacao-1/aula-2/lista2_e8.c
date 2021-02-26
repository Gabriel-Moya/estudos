#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
A lanchonete de uma certa universidade vende apenas um tipo de sandu�che, cujo recheio inclui duas fatias de queijo, uma fatia de presunto e uma unidade de
hamb�rguer. Sabendo que cada fatia de queijo ou presunto pesa 50 gramas, e que a unidade de hamb�rguer pesa 100 gramas, fa�a um programa em que o dono forne�a a
quantidade de sandu�ches a fazer, e a m�quina informe as quantidades (em quilos) de queijo, presunto e hamb�rguer necess�rios para compra.
*/

int main(){

    setlocale(LC_ALL, "");

    float sanduiche, queijo, presunto, hamburguer;

    printf("Digite a quantidade de sandu�ches que ser�o produzidos: ");
    scanf("%f", &sanduiche);

    queijo = sanduiche*0.1;
    presunto = sanduiche*0.05;
    hamburguer = sanduiche*0.1;

    printf("\nPara produzir %.0f de sanduiche, compre %.2f kg de queijo, %.2f kg de presunto e %.2f kg de hamburguer\n", sanduiche, queijo, presunto, hamburguer);

    system("pause");

    return 0;
}
