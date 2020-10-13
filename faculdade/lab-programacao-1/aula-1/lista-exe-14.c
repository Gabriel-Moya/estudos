#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//Leia salário do funcionario e um percentual de reajuste, exiba o novo salario.

int main() {

    setlocale(LC_ALL,"");

    float salario, percentual, salarionovo;

    printf("Insira o salário do funcionário: ");
    scanf("%f", &salario);

    printf("\nInsira o percentual de reajuste: ");
    scanf("%f", &percentual);


    salarionovo = salario+((salario*percentual)/100);

    printf("\nNovo salário será de: %.2f", salarionovo);

    return 0;
}