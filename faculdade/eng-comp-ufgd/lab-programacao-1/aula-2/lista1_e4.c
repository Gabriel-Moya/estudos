#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Leia as dimens�es de um terreno e depois calcule e exiba a �rea.

int main(){

    setlocale(LC_ALL, "");

    float l, c, a;

    printf("Insira a largura do terreno: ");
    scanf("%f", &l);

    printf("\nInsira o comprimento do terreno: ");
    scanf("%f", &c);

    a = l*c;

    printf("\nA �rea do terreno � de %.2f m�", a);

    return 0;
}
