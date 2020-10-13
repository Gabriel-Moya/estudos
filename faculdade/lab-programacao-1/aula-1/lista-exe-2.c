#include<stdio.h>
#include<stdlib.h>
//receba o preço de um produto e aplique um desconto de 10%, em seguida mostre o novo preco

int main(){

    float a, d;

    printf("\nDigite o valor do produto\n");
    scanf("%f", &a);

    d = a*0.9;

    printf("\nO preço com desconto sera: %.2f", d);

    return 0;
}