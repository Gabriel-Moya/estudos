#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
Faça um programa para ler o salário de um funcionário e aumentá-Io em 15%. Após o
aumento, desconte 8% de impostos. Imprima o salário inicial, o salário com o aumento
e o salário final
*/

int main(){

    setlocale(LC_ALL, "");

    float salario, aumento, imposto;

    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);

    aumento = salario+(salario*0.15);
    imposto = aumento-(aumento*0.08);

    printf("\n----------Salário inicial----------");
    printf("\nR$ %.2f \n", salario);

    printf("\n--------Salário com aumento--------");
    printf("\nR$ %.2f \n", aumento);

    printf("\n-----------Salário Final-----------");
    printf("\nR$ %.2f \n", imposto);


    return 0;
}
