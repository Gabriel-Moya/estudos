#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
Uma f�brica de camisetas produz os tamanhos pequeno, m�dio e grande, cada uma
sendo vendidas respectivamente por 10, 12 e 15 reais. Construa um programa em que
o usu�rio forne�a a quantidade de camisetas pequenas, m�dias e grandes referentes a
uma venda, e a m�quina informe quanto ser� o valor arrecadado.
*/

int main (){

    setlocale(LC_ALL, "");

    int P, M, G, total;

    printf("Quantidade de camisetas P: ");
    scanf("%d", &P);

    printf("\nQuantidade de camisetas M: ");
    scanf("%d", &M);

    printf("\nQuantidade de camisetas G: ");
    scanf("%d", &G);

    total = P*10+M*12+G*15;

    printf("Valor total da venda � de R$ %d ", total);

    system("pause");


    return 0;
}
