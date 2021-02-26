#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
O empregador dom�stico contribui de maneira diferenciada para a Previd�ncia Social.
Ele paga mensalmente 12% sobre o sal�rio de contribui��o de seu(s) empregado(s)
dom�stico(s). O desconto do empregado � de 8% para quem ganha um sal�rio m�nimo.
Fa�a um programa que receba o valor do sal�rio m�nimo atual e mostre quanto o
empregador vai ter que pagar de contribui��o em Reais (R$); quanto o empregado vai
pagar de contribui��o; e qual o sal�rio final do empregado, j� que ele vai ter
descontado 8% para a previd�ncia.
*/

int main(){

    setlocale(LC_ALL, "");

    float salario, desconto_empregador, desconto_funcionario, salario_final;

    printf("Insira o valor atual do sal�rio m�nimo: ");
    scanf("%f", &salario);

    desconto_empregador = salario*0.12;
    desconto_funcionario = salario*0.08;
    salario_final = salario-desconto_funcionario;

    //Contribui��o do empregador
    printf("\nO empregador ir� pagar R$ %.2f ", desconto_empregador);

    //Contribui��o do empregado
    printf("\nO funcion�rio ir� pagar R$ %.2f ", desconto_funcionario);

    //sal�rio final
    printf("\nSal�rio final ser� R$ %.2f ", salario_final);

    system("pause");

    return 0;
}
