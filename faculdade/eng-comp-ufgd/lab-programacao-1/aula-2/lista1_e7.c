#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Insira o preço da gasolina e o valor a ser abastecido, exiba a quantidade de L

int main(){

    setlocale(LC_ALL, "");

    float preco, valor, litros;

    printf("Qual o valor da gasolina? ");
    scanf("%f", &preco);

    printf("\nQual o valor a ser abastecido? ");
    scanf("%f", &valor);

    litros = valor/preco;

    printf("\nAbastecendo R$ %.2f, dará %fL ", valor, litros);


    return 0;
}
