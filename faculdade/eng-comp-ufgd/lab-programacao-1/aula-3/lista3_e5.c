#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

//EST� ERRADO REFAZER

/*
Cores:
0 = Preto           8 = Cinza
1 = Azul            9 = Azul claro
2 = Verde           10 = Verde claro
3 = Verde-�gua      11 = Verde-�gua claro
4 = Vermelho        12 = Vermelho claro
5 = Roxo            13 = Lil�s
6 = Amarelo         14 = Amarelo claro
7 = Branco          15 = Branco brilhante
*/

/*
Leia 5 n�meros e escreva o maior e o menor.
*/

int main()
{
    setlocale(LC_ALL, "");
    system("color 6");

    int a, b, c, d, e, maior, menor;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &a);
    maior=a;
    menor=a;

    printf("Digite outro n�mero inteiro: ");
    scanf("%d", &b);
        if (b>maior) maior = b;
        if (b<menor) menor = b;

    printf("Digite outro n�mero inteiro: ");
    scanf("%d", &c);
        if (c>maior) maior = c;
        if (c<menor) menor = c;

    printf("Digite outro n�mero inteiro: ");
    scanf("%d", &d);
        if (d>maior) maior = d;
        if (d<menor) menor = d;

    printf("Digite outro n�mero inteiro: ");
    scanf("%d", &e);
        if (e>maior) maior = e;
        if (e<menor) menor = e;


    printf("\nO maior � %d e o menor � %d\n", maior, menor);


    system("pause");

    return 0;
}
