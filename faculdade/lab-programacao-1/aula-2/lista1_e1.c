#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Receba um inteiro do usuário e exiba na tela

int main (){

    setlocale(LC_ALL, "");

    int x;

    printf("Digite um número inteiro.\n");
    scanf("%d", &x);

    printf("O número digitado foi: %d", x);

    return 0;
}