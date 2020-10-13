#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Leia as dimensões de um terreno e depois calcule e exiba a área.

int main(){

    setlocale(LC_ALL, "");

    float l, c, a;

    printf("Insira a largura do terreno: ");
    scanf("%f", &l);

    printf("\nInsira o comprimento do terreno: ");
    scanf("%f", &c);

    a = l*c;

    printf("\nA área do terreno é de %.2f m²", a);

    return 0;
}
