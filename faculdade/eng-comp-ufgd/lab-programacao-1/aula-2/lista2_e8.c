#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
A lanchonete de uma certa universidade vende apenas um tipo de sanduíche, cujo recheio inclui duas fatias de queijo, uma fatia de presunto e uma unidade de
hambúrguer. Sabendo que cada fatia de queijo ou presunto pesa 50 gramas, e que a unidade de hambúrguer pesa 100 gramas, faça um programa em que o dono forneça a
quantidade de sanduíches a fazer, e a máquina informe as quantidades (em quilos) de queijo, presunto e hambúrguer necessários para compra.
*/

int main(){

    setlocale(LC_ALL, "");

    float sanduiche, queijo, presunto, hamburguer;

    printf("Digite a quantidade de sanduíches que serão produzidos: ");
    scanf("%f", &sanduiche);

    queijo = sanduiche*0.1;
    presunto = sanduiche*0.05;
    hamburguer = sanduiche*0.1;

    printf("\nPara produzir %.0f de sanduiche, compre %.2f kg de queijo, %.2f kg de presunto e %.2f kg de hamburguer\n", sanduiche, queijo, presunto, hamburguer);

    system("pause");

    return 0;
}
