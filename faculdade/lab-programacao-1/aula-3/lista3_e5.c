#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

//ESTÁ ERRADO REFAZER

/*
Cores:
0 = Preto           8 = Cinza
1 = Azul            9 = Azul claro
2 = Verde           10 = Verde claro
3 = Verde-água      11 = Verde-água claro
4 = Vermelho        12 = Vermelho claro
5 = Roxo            13 = Lilás
6 = Amarelo         14 = Amarelo claro
7 = Branco          15 = Branco brilhante
*/

/*
Leia 5 números e escreva o maior e o menor.
*/

int main()
{
    setlocale(LC_ALL, "");
    system("color 6");

    int a, b, c, d, e, maior, menor;

    printf("Digite um número inteiro: ");
    scanf("%d", &a);
    maior=a;
    menor=a;

    printf("Digite outro número inteiro: ");
    scanf("%d", &b);
        if (b>maior) maior = b;
        if (b<menor) menor = b;

    printf("Digite outro número inteiro: ");
    scanf("%d", &c);
        if (c>maior) maior = c;
        if (c<menor) menor = c;

    printf("Digite outro número inteiro: ");
    scanf("%d", &d);
        if (d>maior) maior = d;
        if (d<menor) menor = d;

    printf("Digite outro número inteiro: ");
    scanf("%d", &e);
        if (e>maior) maior = e;
        if (e<menor) menor = e;


    printf("\nO maior é %d e o menor é %d\n", maior, menor);


    system("pause");

    return 0;
}
