#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "");

    int x;

    printf("Digite um n�mero inteiro\n");
    scanf("%d", &x);

    if(x==5)
        printf("N�mero digitado = 5.");
    else if(x==200)
        printf("N�mero digitado = 200.");
    else if(x==400)
        printf("N�mero digitado = 400.");
    else if(x>500 && x<=1000)
        printf("N�mero digitado est� entre 500 e 1000.");
    else
        printf("N�mero digitado n�o atende nenhum pedido.");

    return 0;
}
