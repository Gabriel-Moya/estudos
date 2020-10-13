#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "");

    int x;

    printf("Digite um número inteiro\n");
    scanf("%d", &x);

    if(x==5)
        printf("Número digitado = 5.");
    else if(x==200)
        printf("Número digitado = 200.");
    else if(x==400)
        printf("Número digitado = 400.");
    else if(x>500 && x<=1000)
        printf("Número digitado está entre 500 e 1000.");
    else
        printf("Número digitado não atende nenhum pedido.");

    return 0;
}
