#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "");

    int hr, recebe, extra;

    printf("Digite a quantidade de horas trabalhadas na semana:\n");
    scanf("%d", &hr);
    system("cls");

    if(hr<=40)
        recebe=hr*30;
    else{
        extra=hr-40;
        recebe=(40*30)+(extra*50);
    }

    printf("O sal�rio a ser pago para a funcion�ria ser� de R$ %d,00", recebe);

    return 0;
}
