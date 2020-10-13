#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//Leia dois números e exiba o resultado das quatro operações básicas entre os dois.

int main() {

    setlocale(LC_ALL,"");

    float n1, n2, adc, sub, mult, div;

    printf("Insira um número: ");
    scanf("%f", &n1);

    printf("\nInsira um segundo número: ");
    scanf("%f", &n2);

    adc = n1+n2;
    sub = n1-n2;
    mult = n1*n2;
    div = n1/n2;

    printf("\nO primeiro número mais o segundo resulta em: %.2f", adc);
    printf("\nO primeiro número menos o segundo resulta em: %.2f", sub);
    printf("\nO primeiro número vezes o segundo resulta em: %.2f", mult);
    printf("\nO primeiro número dividindo pelo segundo resulta em: %.2f", div);

    return 0;

}