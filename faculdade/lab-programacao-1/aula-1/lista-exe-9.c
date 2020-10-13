#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//ler uma temperatura em Celsius e mostrar a equivalente em fahrenheit.

int main(){

    setlocale(LC_ALL,"");

    float c, f;

    printf("\nDigite a temperatura em Cº\n");
    scanf("%f", &c);

    f = c*9/5+32;

    printf("\nA temperatura em Fº é: %.2f", f);

    return 0;
}