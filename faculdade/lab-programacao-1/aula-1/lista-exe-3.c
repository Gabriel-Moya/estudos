#include<stdio.h>
#include<stdlib.h>
//Calcular o salario de um funcionario mais sua comissao de 4% sobre as vendas
int main(){

    float s, v, c, sf;

    printf("\nDigite o salario do funcionario\n");
    scanf("%f", &s);
    printf("\nDigite o valor da venda do funcionario\n");
    scanf("%f", &v);

    c = v*0.04;
    sf = s+c;

    printf("\nA comissao sera: %.2f", c);
    printf("\nO salario mais a comissao sera: %.2f", sf);

    return 0;
}