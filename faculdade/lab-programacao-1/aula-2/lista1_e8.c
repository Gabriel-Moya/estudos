#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Leia o peso de um prato de comida e exiba o valor total a pagar, considere R$12,00/kg

int main(){

    setlocale(LC_ALL, "");

    float peso, total;

    printf("Insira o peso do prato do cliente em kg: ");
    scanf("%f", &peso);

    total = peso*12;

    printf("\nValor total: R$ %.2f ", total);

    system("pause");


    return 0;
}
