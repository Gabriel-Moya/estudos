#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "");

    int salario, prestacao;

    printf("Digite o sal�rio bruto do funcion�rio e o valor da presta��o:\n");
    scanf("%d %d", &salario, &prestacao);
    system("cls");

    if(prestacao<=salario*0.3)
        printf("Empr�stimo concedido.");
    else
        printf("Empr�stimo n�o concedido.");

    return 0;
}
