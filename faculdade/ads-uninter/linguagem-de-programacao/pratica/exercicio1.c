#include <stdio.h>
#include <stdlib.h>

/*
Base de cálculo para alíquota de imposto
de 0 até 1.903,98               isento
de 1.903,99 até 2.826,65        7,5%
de 2.826,66 até 3.751,05        15%
de 3.751,06 até 4.664,68        22,5%
a partir de 4.664,68            27,5%
*/

int main(){

    float aliquota, imposto;

    struct cadastroFuncionario {
        char nome[50];
        float salario;
    };
    struct cadastroFuncionario funcionario, *p;

    // Captura de dados
    printf("Digite o nome do funcionario: ");
    fgets(funcionario.nome, 50, stdin);
    printf("Digite o salario do funcionario: ");
    scanf("%f", &funcionario.salario);

    p = &funcionario;

    //Verifica alíquotas através do ponteiro
    if ((*p).salario <= 1903.98){
        aliquota = 0;
    } else if ((*p).salario >= 1903.99 && (*p).salario <= 2826.65){
        aliquota = 7.5;
    } else if ((*p).salario >= 2826.66 && (*p).salario <= 3751.05){
        aliquota = 15;
    } else if ((*p).salario >= 3751.06 && (*p).salario <= 4664.68){
        aliquota = 22.5;
    } else if ((*p).salario > 4664.68){
        aliquota = 27.5;
    }

    // Cálculo do imposto
    imposto = (((*p).salario)*aliquota)/100;

    // Exibe dados formatados
    printf("\nNome completo: %s", (*p).nome);
    printf("Salario: %.2f", (*p).salario);
    printf("\nAliquota: %.2f", aliquota);
    printf("\nValor a ser deduzido: %.2f", imposto);
    printf("\nSalario descontado imposto: %.2f", ((*p).salario)-imposto);

    return 0;
}