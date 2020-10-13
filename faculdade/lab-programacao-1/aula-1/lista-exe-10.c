#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*O custo ao consumidor de um carro novo é a soma do custo de fábrica
com a percentagem do distribuidor e dos impostos
(aplicados ao custo de fábrica).
Supondo que a percentagem do distribuidor seja de 12% e os impostos de 45%,
preparar um algoritmo para ler o custo de fábrica do carro
e imprimir o custo ao consumidor. */

int main(){

    setlocale(LC_ALL,"");

    float cf, cc, imp, lcr;

    printf("\nInsira o custo de fábrica do carro\n");
    scanf("%f", &cf);

    imp = cf*0.45;
    lcr = cf*0.12;

    cc = cf+imp+lcr;

    printf("\nO custo para o consumidor será de: %.2f", cc);

    return 0;
}