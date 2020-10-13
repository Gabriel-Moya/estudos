#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
O empregador doméstico contribui de maneira diferenciada para a Previdência Social.
Ele paga mensalmente 12% sobre o salário de contribuição de seu(s) empregado(s)
doméstico(s). O desconto do empregado é de 8% para quem ganha um salário mínimo.
Faça um programa que receba o valor do salário mínimo atual e mostre quanto o
empregador vai ter que pagar de contribuição em Reais (R$); quanto o empregado vai
pagar de contribuição; e qual o salário final do empregado, já que ele vai ter
descontado 8% para a previdência.
*/

int main(){

    setlocale(LC_ALL, "");

    float salario, desconto_empregador, desconto_funcionario, salario_final;

    printf("Insira o valor atual do salário mínimo: ");
    scanf("%f", &salario);

    desconto_empregador = salario*0.12;
    desconto_funcionario = salario*0.08;
    salario_final = salario-desconto_funcionario;

    //Contribuição do empregador
    printf("\nO empregador irá pagar R$ %.2f ", desconto_empregador);

    //Contribuição do empregado
    printf("\nO funcionário irá pagar R$ %.2f ", desconto_funcionario);

    //salário final
    printf("\nSalário final será R$ %.2f ", salario_final);

    system("pause");

    return 0;
}
