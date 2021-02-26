#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

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
Leia dois números e imprimi-los em ordem decrescente.
*/

int main()
{
    setlocale(LC_ALL, "");
    system("color 6");

    int x, y;

    printf("Digite um número inteiro: ");
    scanf("%d", &x);

    printf("Digite um segundo número inteiro: ");
    scanf("%d", &y);

    if (x>y)
        printf("Os números em ordem decrescente são %d e %d\n", x, y);

    else
        printf("Os números em ordem decrescente são %d e %d\n", y, x);


    system("pause");

    return 0;
}
