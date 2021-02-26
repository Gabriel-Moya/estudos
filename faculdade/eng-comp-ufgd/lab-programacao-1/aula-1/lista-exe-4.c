#include<stdio.h>
#include<stdlib.h>
//receba o peso de uma pessoa, calcule e mostre o pesso quando a pessoa engordar 15%, e o novo peso caso ela engorde 20%
int main(){

    float p, pa, pb;

    printf("\nDigite o peso da pessoa\n");
    scanf("%f", &p);

    pa = p*1.15;
    pb = p*1.2;

    printf("\nSe voce engordar 15%% ira ficar com: %.2f", pa);
    printf("\nSe voce engordar 20%% ira ficar com: %.2f", pb);

    return 0;
}