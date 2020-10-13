#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "");

    int salario, prestacao;

    printf("Digite o salário bruto do funcionário e o valor da prestação:\n");
    scanf("%d %d", &salario, &prestacao);
    system("cls");

    if(prestacao<=salario*0.3)
        printf("Empréstimo concedido.");
    else
        printf("Empréstimo não concedido.");

    return 0;
}
