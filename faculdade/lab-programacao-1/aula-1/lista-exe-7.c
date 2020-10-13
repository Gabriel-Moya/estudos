#include<stdio.h>
#include<stdlib.h>
//calcule e mostre a área de um quadrado.

int main(){

    float l1, l2, a;

    printf("\nDigite lado 1\n");
    scanf("%f", &l1);

    printf("\nDigite o lado 2\n");
    scanf("%f", &l2);

    a = l1*l2;

    printf("\nA area do quadrado e: %.2f", a);

    return 0;
}
