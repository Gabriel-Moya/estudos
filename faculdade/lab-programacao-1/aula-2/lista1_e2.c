#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//receba dois inteiros e exiba a soma deles.

int main (){

    setlocale(LC_ALL, "");

    int n1, n2, soma;

    printf("\nInsira um inteiro ");
    scanf("%d", &n1);

    fflush(stdin);

    printf("\nInsira outro inteiro ");
    scanf("%d", &n2);

    soma = n1+n2;

    printf("\nA soma de %d mais %d, é %d ", n1, n2, soma);

    system("pause");

    return 0;

}

