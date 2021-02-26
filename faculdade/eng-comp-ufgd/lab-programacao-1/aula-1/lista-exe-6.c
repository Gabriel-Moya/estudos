#include<stdio.h>
#include<stdlib.h>
//calcule e mostre a área de um trapézio.

int main(){

    float b1, b2, h, a;

    printf("\nDigite a base maior\n");
    scanf("%f", &b1);

    printf("\nDigite a base menor\n");
    scanf("%f", &b2);

    printf("\nDigite a altura\n");
    scanf("%f", &h);

    a = ((b1+b2)*h)/2;

    printf("\nA area do trapezio e: %.2f", a);

    return 0;
}
