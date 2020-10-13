#include<stdio.h>
#include<stdlib.h>
//calcule e mostre a área de um losango.

int main(){

    float dmr, dmn, a;

    printf("\nDigite a diagonal maior\n");
    scanf("%f", &dmr);

    printf("\nDigite a diagonal menor\n");
    scanf("%f", &dmn);

    a = (dmr*dmn)/2;

    printf("\nA area do losango e: %.2f", a);

    return 0;
}
